#include <StdInc.h>

#include "Commands.hpp"
#include <CommandParser/Parser.hpp>
#include "AudioEngine.h"
#include "FireManager.h"
#include "Timer.h"
#include "Streaming.h"
#include "TheScripts.h"
#include "Conversations.h"
#include "CommandParser/Parser.hpp"

/*!
* Various Script commands
*/

namespace {
void TerminateAllScriptsWithThisName(std::string_view name) {
    const notsa::ci_string_view ciName{name}; // TODO: Support this natively in the parser
    for (CRunningScript* script = CTheScripts::pActiveScripts, *next; script; script = next) {
        next = script->m_pNext;

        if (script->m_szName == ciName) {
            script->RemoveScriptFromList(&CTheScripts::pActiveScripts);
            script->AddScriptToList(&CTheScripts::pIdleScripts);
            script->ShutdownThisScript();
        }
    }
}

void RemoveAllScriptFires() {
    gFireManager.RemoveAllScriptFires();
}

void LoadScene(CVector point) {
    CTimer::Stop();
    CStreaming::LoadScene(point);
    CTimer::Update();
}

void LoadSceneInDirection(CVector point, float heading) {
    CTimer::Stop();
    CRenderer::RequestObjectsInDirection(point, heading, STREAMING_LOADING_SCENE);
    CStreaming::LoadScene(point);
    CTimer::Update();
}

void LoadMissionAudio(uint32 slotId, int32 sampleId) {
    AudioEngine.PreloadMissionAudio(slotId - 1, sampleId);
}

void AttachMissionAudioToCar(uint32 slotId, CVehicle& veh) {
    AudioEngine.AttachMissionAudioToPhysical(slotId - 1, &veh);
}

void ReportMissionAudioEventAtChar(CPed& ped, int32 eventId) {
    AudioEngine.ReportMissionAudioEvent(eventId, &ped);
}

void ReportMissionAudioEventAtCar(CVehicle& vehicle, int eventId) {
    AudioEngine.ReportMissionAudioEvent(eventId, &vehicle);
}

void PlayMissionAudio(uint32 slotId) {
    AudioEngine.PlayLoadedMissionAudio(slotId - 1);
}

void DisplayNonMinigameHelpMessages(bool enable) {
    CTheScripts::bDisplayNonMiniGameHelpMessages = enable;
}

void SetPhotoCameraEffect(bool enable) {
    CTheScripts::bDrawCrossHair = enable ? eCrossHairType::FIXED_DRAW_1STPERSON_WEAPON : eCrossHairType::NONE;
}

void DrawOddJobTitleBeforeFade(bool enable) {
    CTheScripts::bDrawOddJobTitleBeforeFade = enable;
}

void DrawSubtitlesBeforeFade(bool enable) {
    CTheScripts::bDrawSubtitlesBeforeFade = enable;
}

void SetPlayerInStadium(bool enable) {
    CTheScripts::bPlayerIsOffTheMap = enable;
}

};

void notsa::script::commands::script::RegisterHandlers() {
    REGISTER_COMMAND_HANDLER_BEGIN("Script");

    REGISTER_COMMAND_HANDLER(COMMAND_TERMINATE_ALL_SCRIPTS_WITH_THIS_NAME, TerminateAllScriptsWithThisName);
    REGISTER_COMMAND_HANDLER(COMMAND_REMOVE_ALL_SCRIPT_FIRES, RemoveAllScriptFires);
    REGISTER_COMMAND_HANDLER(COMMAND_LOAD_SCENE, LoadScene);
    REGISTER_COMMAND_HANDLER(COMMAND_LOAD_SCENE_IN_DIRECTION, LoadSceneInDirection);
    REGISTER_COMMAND_HANDLER(COMMAND_LOAD_MISSION_AUDIO, LoadMissionAudio);
    REGISTER_COMMAND_HANDLER(COMMAND_ATTACH_MISSION_AUDIO_TO_CAR, AttachMissionAudioToCar);
    REGISTER_COMMAND_HANDLER(COMMAND_REPORT_MISSION_AUDIO_EVENT_AT_CHAR, ReportMissionAudioEventAtChar);
    REGISTER_COMMAND_HANDLER(COMMAND_REPORT_MISSION_AUDIO_EVENT_AT_CAR, ReportMissionAudioEventAtCar);
    REGISTER_COMMAND_HANDLER(COMMAND_PLAY_MISSION_AUDIO, PlayMissionAudio);
    REGISTER_COMMAND_HANDLER(COMMAND_DISPLAY_NON_MINIGAME_HELP_MESSAGES, DisplayNonMinigameHelpMessages);
    REGISTER_COMMAND_HANDLER(COMMAND_SET_PHOTO_CAMERA_EFFECT, SetPhotoCameraEffect);
    REGISTER_COMMAND_HANDLER(COMMAND_DRAW_ODDJOB_TITLE_BEFORE_FADE, DrawOddJobTitleBeforeFade);
    REGISTER_COMMAND_HANDLER(COMMAND_DRAW_SUBTITLES_BEFORE_FADE, DrawSubtitlesBeforeFade);
    REGISTER_COMMAND_HANDLER(COMMAND_SET_PLAYER_IS_IN_STADIUM, SetPlayerInStadium);
}
