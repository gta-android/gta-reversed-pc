#pragma once

#include <extensions/WEnum.hpp>

/*!
* Theory:
* Bank slots are used to "store" loaded bank sounds.
* So, for example, you could load `SND_BANK_GENRL_HORN` into `SND_BANK_SLOT_HORN_AND_SIREN`
* and then play sounds from that slot.
* But then you could load any other bank into that slot,
* and the sounds played would now be different.
*/
enum eSoundBankSlot : int16 {
    SND_BANK_SLOT_NONE                = -1,

    SND_BANK_SLOT_FIRST               = 0,
    SND_BANK_SLOT_FRONTEND_GAME       = SND_BANK_SLOT_FIRST, // 0x0
    SND_BANK_SLOT_FRONTEND_MENU       = 1, // 0x1
    SND_BANK_SLOT_COLLISIONS          = 2, // 0x2
    SND_BANK_SLOT_BULLET_HITS         = 3, // 0x3
    SND_BANK_SLOT_EXPLOSIONS          = 4, // 0x4
    SND_BANK_SLOT_WEAPON_GEN          = 5, // 0x5
    SND_BANK_SLOT_WEATHER             = 6, // 0x6

    /* Dummy vehicles */
    SND_BANK_SLOT_DUMMY_FIRST = 7,
    SND_BANK_SLOT_DUMMY_ENGINE_0 = SND_BANK_SLOT_DUMMY_FIRST,
    SND_BANK_SLOT_DUMMY_ENGINE_1, // 8 - 0x8
    SND_BANK_SLOT_DUMMY_ENGINE_2, // 9 - 0x9
    SND_BANK_SLOT_DUMMY_ENGINE_3, // 10 - 0xA
    SND_BANK_SLOT_DUMMY_ENGINE_4, // 11 - 0xB
    SND_BANK_SLOT_DUMMY_ENGINE_5, // 12 - 0xC
    SND_BANK_SLOT_DUMMY_ENGINE_6, // 13 - 0xD
    SND_BANK_SLOT_DUMMY_ENGINE_7, // 14 - 0xE
    SND_BANK_SLOT_DUMMY_ENGINE_8, // 15 - 0xF
    SND_BANK_SLOT_DUMMY_ENGINE_9, // 16 - 0x10
    SND_BANK_SLOT_DUMMY_END,

    /* Other vehicle related */
    SND_BANK_SLOT_HORN_AND_SIREN      = 17, // 0x11
    SND_BANK_SLOT_COP_HELI            = 18, // 0x12
    SND_BANK_SLOT_VEHICLE_GEN         = 19, // 0x13

    /* Ped speech */
    SND_BANK_SLOT_SPEECH_FIRST = 20,
    SND_BANK_SLOT_SPEECH1      = SND_BANK_SLOT_SPEECH_FIRST, // 20 - 0x14
    SND_BANK_SLOT_SPEECH2,                                   // 21 - 0x15
    SND_BANK_SLOT_SPEECH3,                                   // 22 - 0x16
    SND_BANK_SLOT_SPEECH4,                                   // 23 - 0x17
    SND_BANK_SLOT_SPEECH5,                                   // 24 - 0x18
    SND_BANK_SLOT_SPEECH6,                                   // 25 - 0x19
    SND_BANK_SLOT_SPEECH_END,

    /* Missions */
    SND_BANK_SLOT_MISSION1            = 26, // 0x1A
    SND_BANK_SLOT_MISSION2            = 27, // 0x1B
    SND_BANK_SLOT_MISSION3            = 28, // 0x1C
    SND_BANK_SLOT_MISSION4            = 29, // 0x1D

    SND_BANK_SLOT_FOOTSTEPS_PLAYER    = 30, // 0x1E
    SND_BANK_SLOT_DOORS               = 31, // 0x1F
    SND_BANK_SLOT_SWIMMING            = 32, // 0x20

    /* Scanners */
    SND_BANK_SLOT_SCANNER_FIRST       = 33,
    SND_BANK_SLOT_SCANNER_INSTRUCTION = SND_BANK_SLOT_SCANNER_FIRST, // 33 - 0x21
    SND_BANK_SLOT_SCANNER_NUMBER,                                    // 34 - 0x22
    SND_BANK_SLOT_SCANNER_DIRECTION1,                                // 35 - 0x23
    SND_BANK_SLOT_SCANNER_DIRECTION2,                                // 36 - 0x24
    SND_BANK_SLOT_SCANNER_AREA,                                      // 37 - 0x25
    SND_BANK_SLOT_SCANNER_END,

    /* Misc stuff */
    SND_BANK_SLOT_TEST1               = 38, // 0x26
    SND_BANK_SLOT_EFFECT1             = 39, // 0x27
    SND_BANK_SLOT_PLAYER_ENGINE_P     = 40, // 0x28
    SND_BANK_SLOT_FOOTSTEPS_GENERIC   = 41, // 0x29
    SND_BANK_SLOT_BULLET_PASS         = 42, // 0x2A
    SND_BANK_SLOT_TEST2               = 43, // 0x2B
    SND_BANK_SLOT_EFFECT2             = 44, // 0x2C

    NUM_SND_BANK_SLOTS                = 45, // 0x2D
    SND_BANK_SLOT_END                 = NUM_SND_BANK_SLOTS
};
NOTSA_WENUM_DEFS_FOR(eSoundBankSlot);

inline std::optional<const char*> EnumToString(eSoundBankSlot v) {
#define ENUM_CASE(_e) case _e: return #_e
    switch (v) {
    ENUM_CASE(SND_BANK_SLOT_FRONTEND_GAME);
    ENUM_CASE(SND_BANK_SLOT_FRONTEND_MENU);
    ENUM_CASE(SND_BANK_SLOT_COLLISIONS);
    ENUM_CASE(SND_BANK_SLOT_BULLET_HITS);
    ENUM_CASE(SND_BANK_SLOT_EXPLOSIONS);
    ENUM_CASE(SND_BANK_SLOT_WEAPON_GEN);
    ENUM_CASE(SND_BANK_SLOT_WEATHER);
    ENUM_CASE(SND_BANK_SLOT_DUMMY_ENGINE_0);
    ENUM_CASE(SND_BANK_SLOT_DUMMY_ENGINE_1);
    ENUM_CASE(SND_BANK_SLOT_DUMMY_ENGINE_2);
    ENUM_CASE(SND_BANK_SLOT_DUMMY_ENGINE_3);
    ENUM_CASE(SND_BANK_SLOT_DUMMY_ENGINE_4);
    ENUM_CASE(SND_BANK_SLOT_DUMMY_ENGINE_5);
    ENUM_CASE(SND_BANK_SLOT_DUMMY_ENGINE_6);
    ENUM_CASE(SND_BANK_SLOT_DUMMY_ENGINE_7);
    ENUM_CASE(SND_BANK_SLOT_DUMMY_ENGINE_8);
    ENUM_CASE(SND_BANK_SLOT_DUMMY_ENGINE_9);
    ENUM_CASE(SND_BANK_SLOT_HORN_AND_SIREN);
    ENUM_CASE(SND_BANK_SLOT_COP_HELI);
    ENUM_CASE(SND_BANK_SLOT_VEHICLE_GEN);
    ENUM_CASE(SND_BANK_SLOT_SPEECH1);
    ENUM_CASE(SND_BANK_SLOT_SPEECH2);
    ENUM_CASE(SND_BANK_SLOT_SPEECH3);
    ENUM_CASE(SND_BANK_SLOT_SPEECH4);
    ENUM_CASE(SND_BANK_SLOT_SPEECH5);
    ENUM_CASE(SND_BANK_SLOT_SPEECH6);
    ENUM_CASE(SND_BANK_SLOT_MISSION1);
    ENUM_CASE(SND_BANK_SLOT_MISSION2);
    ENUM_CASE(SND_BANK_SLOT_MISSION3);
    ENUM_CASE(SND_BANK_SLOT_MISSION4);
    ENUM_CASE(SND_BANK_SLOT_FOOTSTEPS_PLAYER);
    ENUM_CASE(SND_BANK_SLOT_DOORS);
    ENUM_CASE(SND_BANK_SLOT_SWIMMING);
    ENUM_CASE(SND_BANK_SLOT_SCANNER_INSTRUCTION);
    ENUM_CASE(SND_BANK_SLOT_SCANNER_NUMBER);
    ENUM_CASE(SND_BANK_SLOT_SCANNER_DIRECTION1);
    ENUM_CASE(SND_BANK_SLOT_SCANNER_DIRECTION2);
    ENUM_CASE(SND_BANK_SLOT_SCANNER_AREA);
    ENUM_CASE(SND_BANK_SLOT_TEST1);
    ENUM_CASE(SND_BANK_SLOT_EFFECT1);
    ENUM_CASE(SND_BANK_SLOT_PLAYER_ENGINE_P);
    ENUM_CASE(SND_BANK_SLOT_FOOTSTEPS_GENERIC);
    ENUM_CASE(SND_BANK_SLOT_BULLET_PASS);
    ENUM_CASE(SND_BANK_SLOT_TEST2);
    ENUM_CASE(SND_BANK_SLOT_EFFECT2);
    ENUM_CASE(NUM_SND_BANK_SLOTS);
    }
#undef ENUM_CASE
    return std::nullopt;
}
