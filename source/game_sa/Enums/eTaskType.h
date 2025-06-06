/*
    Plugin-SDK file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#pragma once

/* https://github.com/multitheftauto/mtasa-blue/blob/master/Client/sdk/game/TaskTypes.h */
#include "Base.h"

enum eTaskType : int32 {
    TASK_INVALID = -1,

    // player tasks
    TASK_SIMPLE_PLAYER_ON_FOOT = 0,

    TASK_SIMPLE_PLAYER_IN_CAR,

    // emergency services tasks
    TASK_COMPLEX_MEDIC_TREAT_INJURED_PED = 100,
    TASK_COMPLEX_TREAT_ACCIDENT,
    TASK_SIMPLE_GIVE_CPR,
    TASK_COMPLEX_COP_ARREST_PED,
    TASK_COMPLEX_COP_HASSLE_PED,
    TASK_COMPLEX_HASSLED_BY_COP,
    TASK_COMPLEX_PRESENT_ID_TO_COP,
    TASK_COMPLEX_DRIVE_FIRE_TRUCK,
    TASK_COMPLEX_USE_SWAT_ROPE,
    TASK_COMPLEX_USE_WATER_CANNON,
    TASK_COMPLEX_EXTINGUISH_FIRE_ON_FOOT,
    // SCRIPT_DECISION

    // basic tasks
    TASK_NONE = 200,
    // SCRIPT_DECISION
    TASK_SIMPLE_UNINTERRUPTABLE,
    TASK_SIMPLE_PAUSE,
    // SCRIPT_DECISION
    TASK_SIMPLE_STAND_STILL,
    // SCRIPT_DECISION
    TASK_SIMPLE_SET_STAY_IN_SAME_PLACE,
    TASK_SIMPLE_GET_UP,
    TASK_COMPLEX_GET_UP_AND_STAND_STILL,
    TASK_SIMPLE_FALL,
    TASK_COMPLEX_FALL_AND_GET_UP,
    // SCRIPT_DECISION
    TASK_COMPLEX_FALL_AND_STAY_DOWN,
    // SCRIPT_DECISION
    TASK_SIMPLE_JUMP,
    TASK_COMPLEX_JUMP,
    // SCRIPT_DECISION
    TASK_SIMPLE_DIE,
    TASK_SIMPLE_DROWN,
    TASK_SIMPLE_DIE_IN_CAR,
    TASK_COMPLEX_DIE_IN_CAR,
    TASK_SIMPLE_DROWN_IN_CAR,
    TASK_COMPLEX_DIE,
    // SCRIPT_DECISION
    TASK_SIMPLE_DEAD,
    TASK_SIMPLE_TIRED,
    TASK_SIMPLE_SIT_DOWN,
    TASK_SIMPLE_SIT_IDLE,
    TASK_SIMPLE_STAND_UP,
    TASK_COMPLEX_SIT_DOWN_THEN_IDLE_THEN_STAND_UP,
    TASK_COMPLEX_OBSERVE_TRAFFIC_LIGHTS,
    TASK_COMPLEX_OBSERVE_TRAFFIC_LIGHTS_AND_ACHIEVE_HEADING,
    TASK_NOT_USED,
    TASK_COMPLEX_CROSS_ROAD_LOOK_AND_ACHIEVE_HEADING,
    TASK_SIMPLE_TURN_180,
    TASK_SIMPLE_HAIL_TAXI,
    TASK_COMPLEX_HIT_RESPONSE,
    TASK_COMPLEX_HIT_BY_GUN_RESPONSE,
    TASK_UNUSED_SLOT,
    TASK_COMPLEX_USE_EFFECT,
    // SCRIPT_DECISION
    TASK_COMPLEX_WAIT_AT_ATTRACTOR,
    TASK_COMPLEX_USE_ATTRACTOR,
    TASK_COMPLEX_WAIT_FOR_DRY_WEATHER,
    TASK_COMPLEX_WAIT_FOR_BUS,
    TASK_SIMPLE_WAIT_FOR_BUS,
    TASK_SIMPLE_WAIT_FOR_PIZZA,
    TASK_COMPLEX_IN_AIR_AND_LAND,
    TASK_SIMPLE_IN_AIR,
    TASK_SIMPLE_LAND,
    TASK_COMPLEX_BE_IN_GROUP,
    TASK_COMPLEX_SEQUENCE,
    // SCRIPT_DECISION
    TASK_SIMPLE_CALL_FOR_BACKUP,

    TASK_COMPLEX_USE_PAIRED_ATTRACTOR,
    TASK_COMPLEX_USE_ATTRACTOR_PARTNER,
    TASK_COMPLEX_ATTRACTOR_PARTNER_WAIT,
    TASK_COMPLEX_USE_SCRIPTED_ATTRACTOR,
    TASK_COMPLEX_ON_FIRE,
    TASK_SIMPLE_BE_DAMAGED,
    // SCRIPT_DECISION
    TASK_SIMPLE_TRIGGER_EVENT,
    TASK_SIMPLE_RAGDOLL,
    TASK_SIMPLE_CLIMB,
    TASK_SIMPLE_PLAYER_ON_FIRE,
    TASK_COMPLEX_PARTNER,
    TASK_COMPLEX_STARE_AT_PED,
    TASK_COMPLEX_USE_CLOSEST_FREE_SCRIPTED_ATTRACTOR,
    // SCRIPT_DECISION
    TASK_COMPLEX_USE_EFFECT_RUNNING,
    // SCRIPT_DECISION
    TASK_COMPLEX_USE_EFFECT_SPRINTING,
    // SCRIPT_DECISION
    TASK_COMPLEX_USE_CLOSEST_FREE_SCRIPTED_ATTRACTOR_RUN,
    // SCRIPT_DECISION
    TASK_COMPLEX_USE_CLOSEST_FREE_SCRIPTED_ATTRACTOR_SPRINT,
    // SCRIPT_DECISION
    TASK_SIMPLE_CHOKING,
    TASK_SIMPLE_IK_CHAIN,
    TASK_SIMPLE_IK_MANAGER,
    TASK_SIMPLE_IK_LOOK_AT,
    TASK_COMPLEX_CLIMB,
    TASK_COMPLEX_IN_WATER,
    TASK_SIMPLE_TRIGGER_LOOK_AT,
    // SCRIPT_DECISION
    TASK_SIMPLE_CLEAR_LOOK_AT,
    TASK_SIMPLE_SET_CHAR_DECISION_MAKER,
    TASK_SIMPLE_IK_POINT_R_ARM,
    TASK_SIMPLE_IK_POINT_L_ARM,
    TASK_COMPLEX_BE_STILL,
    TASK_COMPLEX_USE_SEQUENCE,
    TASK_SIMPLE_SET_KINDA_STAY_IN_SAME_PLACE,
    TASK_COMPLEX_FALL_TO_DEATH,
    TASK_WAIT_FOR_MATCHING_LEADER_AREA_CODES,

    // secondary tasks
    TASK_SIMPLE_LOOK_AT_ENTITY_OR_COORD = 300,
    // SCRIPT_DECISION
    TASK_SIMPLE_SAY,
    // SCRIPT_DECISION
    TASK_SIMPLE_SHAKE_FIST,
    // SCRIPT_DECISION
    TASK_SIMPLE_FACIAL,
    // SCRIPT_DECISION
    TASK_COMPLEX_CHAINED_FACIAL,
    TASK_COMPLEX_FACIAL,
    TASK_SIMPLE_AFFECT_SECONDARY_BEHAVIOUR,
    TASK_SIMPLE_HOLD_ENTITY,
    TASK_SIMPLE_PICKUP_ENTITY,     // these three aren't really secondary tasks
    TASK_SIMPLE_PUTDOWN_ENTITY,    // but they	exist around the secondary hold entity
    TASK_COMPLEX_GO_PICKUP_ENTITY, // task at the start and finish
    TASK_SIMPLE_DUCK_WHILE_SHOTS_WHIZZING,
    // SCRIPT_DECISION

    // anims (tasks that are sub-classes of CTaskSimpleRunUnloopedAnim)
    TASK_SIMPLE_ANIM = 400,
    TASK_SIMPLE_NAMED_ANIM,
    TASK_SIMPLE_TIMED_ANIM,
    TASK_SIMPLE_HIT_BACK,
    TASK_SIMPLE_HIT_FRONT,
    TASK_SIMPLE_HIT_LEFT,
    TASK_SIMPLE_HIT_RIGHT,
    TASK_SIMPLE_HIT_BY_GUN_BACK, // AKA TASK_SIMPLE_HIT_BY_GUN_REAR
    TASK_SIMPLE_HIT_BY_GUN_FRONT,
    TASK_SIMPLE_HIT_BY_GUN_LEFT,
    TASK_SIMPLE_HIT_BY_GUN_RIGHT,
    TASK_SIMPLE_HIT_WALL,
    TASK_SIMPLE_COWER,
    // SCRIPT_DECISION
    TASK_SIMPLE_HANDS_UP,
    // SCRIPT_DECISION
    TASK_SIMPLE_HIT_BEHIND,
    TASK_SIMPLE_DUCK,
    // SCRIPT_DECISION
    TASK_SIMPLE_CHAT,
    TASK_COMPLEX_SUNBATHE,
    TASK_SIMPLE_SUNBATHE,
    TASK_SIMPLE_DETONATE,
    TASK_SIMPLE_USE_ATM,
    TASK_SIMPLE_SCRATCH_HEAD,
    TASK_SIMPLE_LOOK_ABOUT,
    TASK_SIMPLE_ABSEIL,
    TASK_SIMPLE_ANIM_LOOPED_MIDDLE,
    TASK_SIMPLE_HANDSIGNAL_ANIM,
    TASK_COMPLEX_HANDSIGNAL_ANIM,
    TASK_SIMPLE_DUCK_FOREVER,
    // SCRIPT_DECISION
    TASK_SIMPLE_START_SUNBATHING,
    TASK_SIMPLE_IDLE_SUNBATHING,
    TASK_SIMPLE_STOP_SUNBATHING,

    // collision response tasks
    TASK_SIMPLE_HIT_HEAD = 500,
    TASK_SIMPLE_EVASIVE_STEP,
    TASK_COMPLEX_EVASIVE_STEP,
    TASK_SIMPLE_EVASIVE_DIVE,
    TASK_COMPLEX_EVASIVE_DIVE_AND_GET_UP,
    TASK_COMPLEX_HIT_PED_WITH_CAR,
    TASK_SIMPLE_KILL_PED_WITH_CAR,
    TASK_SIMPLE_HURT_PED_WITH_CAR,
    TASK_COMPLEX_WALK_ROUND_CAR,
    // SCRIPT_DECISION
    TASK_COMPLEX_WALK_ROUND_BUILDING_ATTEMPT,
    TASK_COMPLEX_WALK_ROUND_OBJECT,
    // SCRIPT_DECISION
    TASK_COMPLEX_MOVE_BACK_AND_JUMP,
    TASK_COMPLEX_EVASIVE_COWER,
    TASK_COMPLEX_DIVE_FROM_ATTACHED_ENTITY_AND_GET_UP,
    // SCRIPT_DECISION
    TASK_COMPLEX_WALK_ROUND_FIRE,
    // SCRIPT_DECISION
    TASK_COMPLEX_STUCK_IN_AIR,

    // threat response tasks
    TASK_COMPLEX_INVESTIGATE_DEAD_PED = 600,
    // SCRIPT_DECISION
    TASK_COMPLEX_REACT_TO_GUN_AIMED_AT,
    // SCRIPT_DECISION
    TASK_COMPLEX_WAIT_FOR_BACKUP,
    TASK_COMPLEX_GET_OUT_OF_WAY_OF_CAR,
    // SCRIPT_DECISION
    TASK_COMPLEX_EXTINGUISH_FIRES,
    // SCRIPT_DECISION

    // car tasks

    // public car tasks
    TASK_COMPLEX_ENTER_CAR_AS_PASSENGER = 700,
    // SCRIPT_DECISION
    TASK_COMPLEX_ENTER_CAR_AS_DRIVER,
    // SCRIPT_DECISION
    TASK_COMPLEX_STEAL_CAR,
    // SCRIPT_DECISION
    TASK_COMPLEX_DRAG_PED_FROM_CAR,
    // SCRIPT_DECISION
    TASK_COMPLEX_LEAVE_CAR,
    // SCRIPT_DECISION
    TASK_COMPLEX_LEAVE_CAR_AND_DIE,
    // SCRIPT_DECISION
    TASK_COMPLEX_LEAVE_CAR_AND_FLEE,
    // SCRIPT_DECISION
    TASK_COMPLEX_LEAVE_CAR_AND_WANDER,
    // SCRIPT_DECISION
    TASK_COMPLEX_SCREAM_IN_CAR_THEN_LEAVE,
    // SCRIPT_DECISION
    TASK_SIMPLE_CAR_DRIVE,
    // SCRIPT_DECISION
    TASK_COMPLEX_CAR_DRIVE_TO_POINT,
    // SCRIPT_DECISION
    TASK_COMPLEX_CAR_DRIVE_WANDER,
    // SCRIPT_DECISION
    TASK_COMPLEX_ENTER_CAR_AS_PASSENGER_TIMED,
    // SCRIPT_DECISION
    TASK_COMPLEX_ENTER_CAR_AS_DRIVER_TIMED,
    // SCRIPT_DECISION
    TASK_COMPLEX_LEAVE_ANY_CAR,
    // SCRIPT_DECISION
    TASK_COMPLEX_ENTER_BOAT_AS_DRIVER,

    TASK_COMPLEX_LEAVE_BOAT,
    TASK_COMPLEX_ENTER_ANY_CAR_AS_DRIVER,
    TASK_COMPLEX_ENTER_CAR_AS_PASSENGER_WAIT,
    TASK_SIMPLE_CAR_DRIVE_TIMED,
    TASK_COMPLEX_SHUFFLE_SEATS,

    TASK_COMPLEX_CAR_DRIVE_POINT_ROUTE,
    TASK_COMPLEX_CAR_OPEN_DRIVER_DOOR,
    TASK_SIMPLE_CAR_SET_TEMP_ACTION,
    TASK_COMPLEX_CAR_DRIVE_MISSION,
    TASK_COMPLEX_CAR_DRIVE,
    TASK_COMPLEX_CAR_DRIVE_MISSION_FLEE_SCENE,
    // SCRIPT_DECISION
    TASK_COMPLEX_ENTER_LEADER_CAR_AS_PASSENGER,
    TASK_COMPLEX_CAR_OPEN_PASSENGER_DOOR,
    TASK_COMPLEX_CAR_DRIVE_MISSION_KILL_PED,
    // SCRIPT_DECISION
    TASK_COMPLEX_LEAVE_CAR_AS_PASSENGER_WAIT,

    // private car tasks (used only by public car tasks)
    TASK_COMPLEX_GO_TO_CAR_DOOR_AND_STAND_STILL = 800,
    TASK_SIMPLE_CAR_ALIGN,
    TASK_SIMPLE_CAR_OPEN_DOOR_FROM_OUTSIDE,
    TASK_SIMPLE_CAR_OPEN_LOCKED_DOOR_FROM_OUTSIDE,
    TASK_SIMPLE_BIKE_PICK_UP,
    TASK_SIMPLE_CAR_CLOSE_DOOR_FROM_INSIDE,
    TASK_SIMPLE_CAR_CLOSE_DOOR_FROM_OUTSIDE,
    TASK_SIMPLE_CAR_GET_IN,

    TASK_SIMPLE_CAR_SHUFFLE,
    TASK_SIMPLE_CAR_WAIT_TO_SLOW_DOWN,
    TASK_SIMPLE_CAR_WAIT_FOR_DOOR_NOT_TO_BE_IN_USE,
    TASK_SIMPLE_CAR_SET_PED_IN_AS_PASSENGER,
    TASK_SIMPLE_CAR_SET_PED_IN_AS_DRIVER,
    TASK_SIMPLE_CAR_GET_OUT,
    TASK_SIMPLE_CAR_JUMP_OUT,
    TASK_SIMPLE_CAR_FORCE_PED_OUT,
    TASK_SIMPLE_CAR_SET_PED_OUT,

    TASK_SIMPLE_CAR_QUICK_DRAG_PED_OUT,
    TASK_SIMPLE_CAR_QUICK_BE_DRAGGED_OUT,
    TASK_SIMPLE_CAR_SET_PED_QUICK_DRAGGED_OUT,
    TASK_SIMPLE_CAR_SLOW_DRAG_PED_OUT,
    TASK_SIMPLE_CAR_SLOW_BE_DRAGGED_OUT,
    TASK_SIMPLE_CAR_SET_PED_SLOW_DRAGGED_OUT,
    TASK_COMPLEX_CAR_SLOW_BE_DRAGGED_OUT,
    TASK_COMPLEX_CAR_SLOW_BE_DRAGGED_OUT_AND_STAND_UP,
    TASK_COMPLEX_CAR_QUICK_BE_DRAGGED_OUT,
    TASK_SIMPLE_BIKE_JACKED,
    TASK_SIMPLE_SET_PED_AS_AUTO_DRIVER,
    TASK_SIMPLE_GO_TO_POINT_NEAR_CAR_DOOR_UNTIL_DOOR_NOT_IN_USE,
    TASK_SIMPLE_WAIT_UNTIL_PED_OUT_CAR,
    TASK_COMPLEX_GO_TO_BOAT_STEERING_WHEEL,
    TASK_COMPLEX_GET_ON_BOAT_SEAT,
    TASK_SIMPLE_CREATE_CAR_AND_GET_IN,
    TASK_SIMPLE_WAIT_UNTIL_PED_IN_CAR,
    TASK_SIMPLE_CAR_FALL_OUT,

    // goto tasks
    TASK_SIMPLE_GO_TO_POINT = 900,
    // SCRIPT_DECISION
    TASK_COMPLEX_GO_TO_POINT_SHOOTING,
    TASK_SIMPLE_ACHIEVE_HEADING,
    TASK_COMPLEX_GO_TO_POINT_AND_STAND_STILL,
    TASK_COMPLEX_GO_TO_POINT_AND_STAND_STILL_AND_ACHIEVE_HEADING,
    TASK_COMPLEX_FOLLOW_POINT_ROUTE,
    TASK_COMPLEX_FOLLOW_NODE_ROUTE,
    TASK_COMPLEX_SEEK_ENTITY,
    // SCRIPT_DECISION
    TASK_COMPLEX_FLEE_POINT,
    // SCRIPT_DECISION
    TASK_COMPLEX_FLEE_ENTITY,
    // SCRIPT_DECISION
    TASK_COMPLEX_SMART_FLEE_POINT,
    // SCRIPT_DECISION
    TASK_COMPLEX_SMART_FLEE_ENTITY,
    // SCRIPT_DECISION
    TASK_COMPLEX_WANDER,
    TASK_COMPLEX_FOLLOW_LEADER_IN_FORMATION,
    TASK_COMPLEX_FOLLOW_SEXY_PED,
    // SCRIPT_DECISION
    TASK_COMPLEX_GO_TO_ATTRACTOR,
    TASK_COMPLEX_LEAVE_ATTRACTOR,
    TASK_COMPLEX_AVOID_OTHER_PED_WHILE_WANDERING,
    // SCRIPT_DECISION
    TASK_COMPLEX_GO_TO_POINT_ANY_MEANS,
    TASK_COMPLEX_WALK_ROUND_SHOP,
    TASK_COMPLEX_TURN_TO_FACE_ENTITY,
    // SCRIPT_DECISION
    TASK_COMPLEX_AVOID_BUILDING,
    TASK_COMPLEX_SEEK_ENTITY_ANY_MEANS,
    TASK_COMPLEX_FOLLOW_LEADER_ANY_MEANS,
    TASK_COMPLEX_GO_TO_POINT_AIMING,
    TASK_COMPLEX_TRACK_ENTITY,
    TASK_SIMPLE_GO_TO_POINT_FINE,
    TASK_COMPLEX_FLEE_ANY_MEANS,
    // SCRIPT_DECISION
    TASK_COMPLEX_FLEE_SHOOTING,
    TASK_COMPLEX_SEEK_ENTITY_SHOOTING,
    TASK_UNUSED1,
    TASK_COMPLEX_FOLLOW_PATROL_ROUTE,
    TASK_COMPLEX_GOTO_DOOR_AND_OPEN,
    TASK_COMPLEX_SEEK_ENTITY_AIMING,
    // SCRIPT_DECISION
    TASK_SIMPLE_SLIDE_TO_COORD,
    TASK_COMPLEX_INVESTIGATE_DISTURBANCE,
    // SCRIPT_DECISION
    TASK_COMPLEX_FOLLOW_PED_FOOTSTEPS,
    TASK_COMPLEX_FOLLOW_NODE_ROUTE_SHOOTING,
    TASK_COMPLEX_USE_ENTRYEXIT,
    TASK_COMPLEX_AVOID_ENTITY,
    TASK_SMART_FLEE_ENTITY_WALKING,

    // fight tasks

    TASK_COMPLEX_KILL_PED_ON_FOOT = 1000,
    // SCRIPT_DECISION
    TASK_COMPLEX_KILL_PED_ON_FOOT_MELEE,
    TASK_COMPLEX_KILL_PED_ON_FOOT_ARMED,
    TASK_COMPLEX_DESTROY_CAR,
    // SCRIPT_DECISION
    TASK_COMPLEX_DESTROY_CAR_MELEE,
    TASK_COMPLEX_DESTROY_CAR_ARMED,
    // TASK_COMPLEX_FIGHT,
    // TASK_SIMPLE_FIRE_RANGED,
    // TASK_SIMPLE_FIRE_RANGED_CROUCHED,
    // TASK_SIMPLE_FIRE_RELOAD,
    // TASK_SIMPLE_FIRE_SNIPER,

    // TASK_COMPLEX_ATTACK_RANGED,
    // TASK_SIMPLE_AIM_GUN,
    // TASK_SIMPLE_FIGHT_IDLE,
    // TASK_SIMPLE_FIGHT_SHUFFLE,
    // TASK_SIMPLE_ATTACK_MELEE,
    // TASK_SIMPLE_FIRE_PROJECTILE,
    // TASK_SIMPLE_ATTACK_UNARMED,
    // TASK_COMPLEX_THROW_PROJECTILE,
    // TASK_SIMPLE_THROW_WEAPON,
    TASK_COMPLEX_REACT_TO_ATTACK,
    TASK_SIMPLE_BE_KICKED_ON_GROUND,
    TASK_SIMPLE_BE_HIT,
    TASK_SIMPLE_BE_HIT_WHILE_MOVING,
    TASK_COMPLEX_SIDE_STEP_AND_SHOOT,
    TASK_SIMPLE_DRIVEBY_SHOOT,
    TASK_SIMPLE_DRIVEBY_WATCH_FOR_TARGET,
    TASK_COMPLEX_DO_DRIVEBY,
    TASK_KILL_ALL_THREATS,
    TASK_KILL_PED_GROUP_ON_FOOT,

    // new weapon/fight tasks
    TASK_SIMPLE_FIGHT,
    TASK_SIMPLE_USE_GUN,
    TASK_SIMPLE_THROW_PROJECTILE,
    TASK_SIMPLE_FIGHT_CTRL, // 0x3fb
    TASK_SIMPLE_GUN_CTRL,
    // SCRIPT_DECISION
    TASK_SIMPLE_THROW_CTRL,
    TASK_SIMPLE_GANG_DRIVEBY,
    // SCRIPT_DECISION

    TASK_COMPLEX_KILL_PED_ON_FOOT_TIMED,       // SCRIPT_DECISION
    TASK_COMPLEX_KILL_PED_ON_FOOT_STAND_STILL, // SCRIPT_DECISION
    TASK_UNUSED2,
    TASK_KILL_PED_ON_FOOT_WHILE_DUCKING,
    // SCRIPT_DECISION
    TASK_SIMPLE_STEALTH_KILL,
    TASK_COMPLEX_KILL_PED_ON_FOOT_STEALTH,
    // SCRIPT_DECISION
    TASK_COMPLEX_KILL_PED_ON_FOOT_KINDA_STAND_STILL,
    // SCRIPT_DECISION
    TASK_COMPLEX_KILL_PED_AND_REENTER_CAR,
    TASK_COMPLEX_ROAD_RAGE,
    // SCRIPT_DECISION
    TASK_KILL_PED_FROM_BOAT,
    TASK_SIMPLE_SET_CHAR_IGNORE_WEAPON_RANGE_FLAG,

    TASK_SEEK_COVER_UNTIL_TARGET_DEAD,

    // police tasks

    TASK_SIMPLE_ARREST_PED = 1100,

    TASK_COMPLEX_ARREST_PED,
    // SCRIPT_DECISION
    TASK_SIMPLE_BE_ARRESTED,
    TASK_COMPLEX_POLICE_PURSUIT,
    TASK_COMPLEX_BE_COP,
    TASK_COMPLEX_KILL_CRIMINAL,
    // SCRIPT_DECISION
    TASK_COMPLEX_COP_IN_CAR,

    // gang/partner tasks

    TASK_SIMPLE_INFORM_GROUP = 1200,
    // SCRIPT_DECISION
    TASK_COMPLEX_GANG_LEADER,
    TASK_COMPLEX_PARTNER_DEAL,
    // SCRIPT_DECISION
    TASK_COMPLEX_PARTNER_GREET,
    // SCRIPT_DECISION
    TASK_COMPLEX_PARTNER_CHAT,
    TASK_COMPLEX_GANG_HASSLE_VEHICLE,
    // SCRIPT_DECISION
    TASK_COMPLEX_WALK_WITH_PED,
    TASK_COMPLEX_GANG_FOLLOWER,
    TASK_COMPLEX_WALK_ALONGSIDE_PED,
    TASK_COMPLEX_PARTNER_SHOVE,
    // SCRIPT_DECISION
    TASK_COMPLEX_SIGNAL_AT_PED,
    // SCRIPT_DECISION
    TASK_COMPLEX_PASS_OBJECT,
    TASK_COMPLEX_GANG_HASSLE_PED,
    // SCRIPT_DECISION
    TASK_COMPLEX_WAIT_FOR_PED,
    TASK_SIMPLE_DO_HAND_SIGNAL,
    //		TASK_COMPLEX_THROW_OBJECT_BEING_HELD,
    TASK_COMPLEX_BE_IN_COUPLE,
    TASK_COMPLEX_GOTO_VEHICLE_AND_LEAN,
    TASK_COMPLEX_LEAN_ON_VEHICLE,
    // SCRIPT_DECISION
    TASK_COMPLEX_CHAT,
    TASK_COMPLEX_GANG_JOIN_RESPOND,

    // misc
    TASK_ZONE_RESPONSE = 1300,
    // SCRIPT_DECISION
    TASK_SIMPLE_TOGGLE_PED_THREAT_SCANNER,
    TASK_FINISHED,
    TASK_SIMPLE_JETPACK,
    TASK_SIMPLE_SWIM,
    TASK_COMPLEX_SWIM_AND_CLIMB_OUT,
    TASK_SIMPLE_DUCK_TOGGLE,
    TASK_WAIT_FOR_MATCHING_AREA_CODES,
    TASK_SIMPLE_ON_ESCALATOR,
    TASK_COMPLEX_PROSTITUTE_SOLICIT,

    // interior tasks

    TASK_INTERIOR_USE_INFO = 1400,
    TASK_INTERIOR_GOTO_INFO,
    TASK_INTERIOR_BE_IN_HOUSE,
    TASK_INTERIOR_BE_IN_OFFICE,
    TASK_INTERIOR_BE_IN_SHOP,
    TASK_INTERIOR_SHOPKEEPER,
    TASK_INTERIOR_LIE_IN_BED,
    TASK_INTERIOR_SIT_ON_CHAIR,
    TASK_INTERIOR_SIT_AT_DESK,
    TASK_INTERIOR_LEAVE,
    TASK_INTERIOR_SIT_IN_RESTAURANT,
    TASK_INTERIOR_RESERVED2,
    TASK_INTERIOR_RESERVED3,
    TASK_INTERIOR_RESERVED4,
    TASK_INTERIOR_RESERVED5,
    TASK_INTERIOR_RESERVED6,
    TASK_INTERIOR_RESERVED7,
    TASK_INTERIOR_RESERVED8,

    // group tasks
    TASK_GROUP_FOLLOW_LEADER_ANY_MEANS = 1500,
    // SCRIPT_DECISION
    TASK_GROUP_FOLLOW_LEADER_WITH_LIMITS,
    // SCRIPT_DECISION
    TASK_GROUP_KILL_THREATS_BASIC,
    // SCRIPT_DECISION
    TASK_GROUP_KILL_PLAYER_BASIC,
    // SCRIPT_DECISION
    TASK_GROUP_STARE_AT_PED,
    // SCRIPT_DECISION
    TASK_GROUP_FLEE_THREAT,
    // SCRIPT_DECISION
    TASK_GROUP_PARTNER_DEAL,
    // SCRIPT_DECISION
    TASK_GROUP_PARTNER_GREET,
    // SCRIPT_DECISION
    TASK_GROUP_HASSLE_SEXY_PED,
    // SCRIPT_DECISION
    TASK_GROUP_HASSLE_THREAT,
    // SCRIPT_DECISION
    TASK_GROUP_USE_MEMBER_DECISION,
    // SCRIPT_DECISION
    TASK_GROUP_EXIT_CAR,
    // SCRIPT_DECISION
    TASK_GROUP_ENTER_CAR,
    // SCRIPT_DECISION
    TASK_GROUP_ENTER_CAR_AND_PERFORM_SEQUENCE,
    // SCRIPT_DECISION
    TASK_GROUP_RESPOND_TO_LEADER_COMMAND,
    // SCRIPT_DECISION
    TASK_GROUP_HAND_SIGNAL,
    // SCRIPT_DECISION
    TASK_GROUP_DRIVEBY,
    // SCRIPT_DECISION
    TASK_GROUP_HASSLE_THREAT_PASSIVE,
    // SCRIPT_DECISION

    // phone / goggles tasks
    TASK_COMPLEX_USE_MOBILE_PHONE = 1600,
    TASK_SIMPLE_PHONE_TALK,
    TASK_SIMPLE_PHONE_IN,
    TASK_SIMPLE_PHONE_OUT,
    TASK_COMPLEX_USE_GOGGLES,
    TASK_SIMPLE_GOGGLES_ON,
    TASK_SIMPLE_GOGGLES_OFF,

    // inform friends
    TASK_SIMPLE_INFORM_RESPECTED_FRIENDS = 1700,
    // SCRIPT_DECISION

    // brain tasks
    TASK_COMPLEX_USE_SCRIPTED_BRAIN = 1800,
    TASK_SIMPLE_FINISH_BRAIN,
    /*
    // test tasks
    TASK_COMPLEX_A,
    TASK_COMPLEX_B,
    TASK_COMPLEX_C,
    TASK_COMPLEX_D,
    TASK_COMPLEX_E,
    */
    MAX_NUM_TASK_TYPES
};

inline std::optional<const char*> EnumToString(eTaskType taskType) {
#define ECASE(tt) case tt: return #tt
    switch (taskType) {
    ECASE(TASK_SIMPLE_PLAYER_ON_FOOT);
    ECASE(TASK_SIMPLE_PLAYER_IN_CAR);
    ECASE(TASK_COMPLEX_MEDIC_TREAT_INJURED_PED);
    ECASE(TASK_COMPLEX_TREAT_ACCIDENT);
    ECASE(TASK_SIMPLE_GIVE_CPR);
    ECASE(TASK_COMPLEX_COP_ARREST_PED);
    ECASE(TASK_COMPLEX_COP_HASSLE_PED);
    ECASE(TASK_COMPLEX_HASSLED_BY_COP);
    ECASE(TASK_COMPLEX_PRESENT_ID_TO_COP);
    ECASE(TASK_COMPLEX_DRIVE_FIRE_TRUCK);
    ECASE(TASK_COMPLEX_USE_SWAT_ROPE);
    ECASE(TASK_COMPLEX_USE_WATER_CANNON);
    ECASE(TASK_COMPLEX_EXTINGUISH_FIRE_ON_FOOT);
    ECASE(TASK_NONE);
    ECASE(TASK_SIMPLE_UNINTERRUPTABLE);
    ECASE(TASK_SIMPLE_PAUSE);
    ECASE(TASK_SIMPLE_STAND_STILL);
    ECASE(TASK_SIMPLE_SET_STAY_IN_SAME_PLACE);
    ECASE(TASK_SIMPLE_GET_UP);
    ECASE(TASK_COMPLEX_GET_UP_AND_STAND_STILL);
    ECASE(TASK_SIMPLE_FALL);
    ECASE(TASK_COMPLEX_FALL_AND_GET_UP);
    ECASE(TASK_COMPLEX_FALL_AND_STAY_DOWN);
    ECASE(TASK_SIMPLE_JUMP);
    ECASE(TASK_COMPLEX_JUMP);
    ECASE(TASK_SIMPLE_DIE);
    ECASE(TASK_SIMPLE_DROWN);
    ECASE(TASK_SIMPLE_DIE_IN_CAR);
    ECASE(TASK_COMPLEX_DIE_IN_CAR);
    ECASE(TASK_SIMPLE_DROWN_IN_CAR);
    ECASE(TASK_COMPLEX_DIE);
    ECASE(TASK_SIMPLE_DEAD);
    ECASE(TASK_SIMPLE_TIRED);
    ECASE(TASK_SIMPLE_SIT_DOWN);
    ECASE(TASK_SIMPLE_SIT_IDLE);
    ECASE(TASK_SIMPLE_STAND_UP);
    ECASE(TASK_COMPLEX_SIT_DOWN_THEN_IDLE_THEN_STAND_UP);
    ECASE(TASK_COMPLEX_OBSERVE_TRAFFIC_LIGHTS);
    ECASE(TASK_COMPLEX_OBSERVE_TRAFFIC_LIGHTS_AND_ACHIEVE_HEADING);
    ECASE(TASK_NOT_USED);
    ECASE(TASK_COMPLEX_CROSS_ROAD_LOOK_AND_ACHIEVE_HEADING);
    ECASE(TASK_SIMPLE_TURN_180);
    ECASE(TASK_SIMPLE_HAIL_TAXI);
    ECASE(TASK_COMPLEX_HIT_RESPONSE);
    ECASE(TASK_COMPLEX_HIT_BY_GUN_RESPONSE);
    ECASE(TASK_UNUSED_SLOT);
    ECASE(TASK_COMPLEX_USE_EFFECT);
    ECASE(TASK_COMPLEX_WAIT_AT_ATTRACTOR);
    ECASE(TASK_COMPLEX_USE_ATTRACTOR);
    ECASE(TASK_COMPLEX_WAIT_FOR_DRY_WEATHER);
    ECASE(TASK_COMPLEX_WAIT_FOR_BUS);
    ECASE(TASK_SIMPLE_WAIT_FOR_BUS);
    ECASE(TASK_SIMPLE_WAIT_FOR_PIZZA);
    ECASE(TASK_COMPLEX_IN_AIR_AND_LAND);
    ECASE(TASK_SIMPLE_IN_AIR);
    ECASE(TASK_SIMPLE_LAND);
    ECASE(TASK_COMPLEX_BE_IN_GROUP);
    ECASE(TASK_COMPLEX_SEQUENCE);
    ECASE(TASK_SIMPLE_CALL_FOR_BACKUP);
    ECASE(TASK_COMPLEX_USE_PAIRED_ATTRACTOR);
    ECASE(TASK_COMPLEX_USE_ATTRACTOR_PARTNER);
    ECASE(TASK_COMPLEX_ATTRACTOR_PARTNER_WAIT);
    ECASE(TASK_COMPLEX_USE_SCRIPTED_ATTRACTOR);
    ECASE(TASK_COMPLEX_ON_FIRE);
    ECASE(TASK_SIMPLE_BE_DAMAGED);
    ECASE(TASK_SIMPLE_TRIGGER_EVENT);
    ECASE(TASK_SIMPLE_RAGDOLL);
    ECASE(TASK_SIMPLE_CLIMB);
    ECASE(TASK_SIMPLE_PLAYER_ON_FIRE);
    ECASE(TASK_COMPLEX_PARTNER);
    ECASE(TASK_COMPLEX_STARE_AT_PED);
    ECASE(TASK_COMPLEX_USE_CLOSEST_FREE_SCRIPTED_ATTRACTOR);
    ECASE(TASK_COMPLEX_USE_EFFECT_RUNNING);
    ECASE(TASK_COMPLEX_USE_EFFECT_SPRINTING);
    ECASE(TASK_COMPLEX_USE_CLOSEST_FREE_SCRIPTED_ATTRACTOR_RUN);
    ECASE(TASK_COMPLEX_USE_CLOSEST_FREE_SCRIPTED_ATTRACTOR_SPRINT);
    ECASE(TASK_SIMPLE_CHOKING);
    ECASE(TASK_SIMPLE_IK_CHAIN);
    ECASE(TASK_SIMPLE_IK_MANAGER);
    ECASE(TASK_SIMPLE_IK_LOOK_AT);
    ECASE(TASK_COMPLEX_CLIMB);
    ECASE(TASK_COMPLEX_IN_WATER);
    ECASE(TASK_SIMPLE_TRIGGER_LOOK_AT);
    ECASE(TASK_SIMPLE_CLEAR_LOOK_AT);
    ECASE(TASK_SIMPLE_SET_CHAR_DECISION_MAKER);
    ECASE(TASK_SIMPLE_IK_POINT_R_ARM);
    ECASE(TASK_SIMPLE_IK_POINT_L_ARM);
    ECASE(TASK_COMPLEX_BE_STILL);
    ECASE(TASK_COMPLEX_USE_SEQUENCE);
    ECASE(TASK_SIMPLE_SET_KINDA_STAY_IN_SAME_PLACE);
    ECASE(TASK_COMPLEX_FALL_TO_DEATH);
    ECASE(TASK_WAIT_FOR_MATCHING_LEADER_AREA_CODES);
    ECASE(TASK_SIMPLE_LOOK_AT_ENTITY_OR_COORD);
    ECASE(TASK_SIMPLE_SAY);
    ECASE(TASK_SIMPLE_SHAKE_FIST);
    ECASE(TASK_SIMPLE_FACIAL);
    ECASE(TASK_COMPLEX_CHAINED_FACIAL);
    ECASE(TASK_COMPLEX_FACIAL);
    ECASE(TASK_SIMPLE_AFFECT_SECONDARY_BEHAVIOUR);
    ECASE(TASK_SIMPLE_HOLD_ENTITY);
    ECASE(TASK_SIMPLE_PICKUP_ENTITY);
    ECASE(TASK_SIMPLE_PUTDOWN_ENTITY);
    ECASE(TASK_COMPLEX_GO_PICKUP_ENTITY);
    ECASE(TASK_SIMPLE_DUCK_WHILE_SHOTS_WHIZZING);
    ECASE(TASK_SIMPLE_ANIM);
    ECASE(TASK_SIMPLE_NAMED_ANIM);
    ECASE(TASK_SIMPLE_TIMED_ANIM);
    ECASE(TASK_SIMPLE_HIT_BACK);
    ECASE(TASK_SIMPLE_HIT_FRONT);
    ECASE(TASK_SIMPLE_HIT_LEFT);
    ECASE(TASK_SIMPLE_HIT_RIGHT);
    ECASE(TASK_SIMPLE_HIT_BY_GUN_BACK);
    ECASE(TASK_SIMPLE_HIT_BY_GUN_FRONT);
    ECASE(TASK_SIMPLE_HIT_BY_GUN_LEFT);
    ECASE(TASK_SIMPLE_HIT_BY_GUN_RIGHT);
    ECASE(TASK_SIMPLE_HIT_WALL);
    ECASE(TASK_SIMPLE_COWER);
    ECASE(TASK_SIMPLE_HANDS_UP);
    ECASE(TASK_SIMPLE_HIT_BEHIND);
    ECASE(TASK_SIMPLE_DUCK);
    ECASE(TASK_SIMPLE_CHAT);
    ECASE(TASK_COMPLEX_SUNBATHE);
    ECASE(TASK_SIMPLE_SUNBATHE);
    ECASE(TASK_SIMPLE_DETONATE);
    ECASE(TASK_SIMPLE_USE_ATM);
    ECASE(TASK_SIMPLE_SCRATCH_HEAD);
    ECASE(TASK_SIMPLE_LOOK_ABOUT);
    ECASE(TASK_SIMPLE_ABSEIL);
    ECASE(TASK_SIMPLE_ANIM_LOOPED_MIDDLE);
    ECASE(TASK_SIMPLE_HANDSIGNAL_ANIM);
    ECASE(TASK_COMPLEX_HANDSIGNAL_ANIM);
    ECASE(TASK_SIMPLE_DUCK_FOREVER);
    ECASE(TASK_SIMPLE_START_SUNBATHING);
    ECASE(TASK_SIMPLE_IDLE_SUNBATHING);
    ECASE(TASK_SIMPLE_STOP_SUNBATHING);
    ECASE(TASK_SIMPLE_HIT_HEAD);
    ECASE(TASK_SIMPLE_EVASIVE_STEP);
    ECASE(TASK_COMPLEX_EVASIVE_STEP);
    ECASE(TASK_SIMPLE_EVASIVE_DIVE);
    ECASE(TASK_COMPLEX_EVASIVE_DIVE_AND_GET_UP);
    ECASE(TASK_COMPLEX_HIT_PED_WITH_CAR);
    ECASE(TASK_SIMPLE_KILL_PED_WITH_CAR);
    ECASE(TASK_SIMPLE_HURT_PED_WITH_CAR);
    ECASE(TASK_COMPLEX_WALK_ROUND_CAR);
    ECASE(TASK_COMPLEX_WALK_ROUND_BUILDING_ATTEMPT);
    ECASE(TASK_COMPLEX_WALK_ROUND_OBJECT);
    ECASE(TASK_COMPLEX_MOVE_BACK_AND_JUMP);
    ECASE(TASK_COMPLEX_EVASIVE_COWER);
    ECASE(TASK_COMPLEX_DIVE_FROM_ATTACHED_ENTITY_AND_GET_UP);
    ECASE(TASK_COMPLEX_WALK_ROUND_FIRE);
    ECASE(TASK_COMPLEX_STUCK_IN_AIR);
    ECASE(TASK_COMPLEX_INVESTIGATE_DEAD_PED);
    ECASE(TASK_COMPLEX_REACT_TO_GUN_AIMED_AT);
    ECASE(TASK_COMPLEX_WAIT_FOR_BACKUP);
    ECASE(TASK_COMPLEX_GET_OUT_OF_WAY_OF_CAR);
    ECASE(TASK_COMPLEX_EXTINGUISH_FIRES);
    ECASE(TASK_COMPLEX_ENTER_CAR_AS_PASSENGER);
    ECASE(TASK_COMPLEX_ENTER_CAR_AS_DRIVER);
    ECASE(TASK_COMPLEX_STEAL_CAR);
    ECASE(TASK_COMPLEX_DRAG_PED_FROM_CAR);
    ECASE(TASK_COMPLEX_LEAVE_CAR);
    ECASE(TASK_COMPLEX_LEAVE_CAR_AND_DIE);
    ECASE(TASK_COMPLEX_LEAVE_CAR_AND_FLEE);
    ECASE(TASK_COMPLEX_LEAVE_CAR_AND_WANDER);
    ECASE(TASK_COMPLEX_SCREAM_IN_CAR_THEN_LEAVE);
    ECASE(TASK_SIMPLE_CAR_DRIVE);
    ECASE(TASK_COMPLEX_CAR_DRIVE_TO_POINT);
    ECASE(TASK_COMPLEX_CAR_DRIVE_WANDER);
    ECASE(TASK_COMPLEX_ENTER_CAR_AS_PASSENGER_TIMED);
    ECASE(TASK_COMPLEX_ENTER_CAR_AS_DRIVER_TIMED);
    ECASE(TASK_COMPLEX_LEAVE_ANY_CAR);
    ECASE(TASK_COMPLEX_ENTER_BOAT_AS_DRIVER);
    ECASE(TASK_COMPLEX_LEAVE_BOAT);
    ECASE(TASK_COMPLEX_ENTER_ANY_CAR_AS_DRIVER);
    ECASE(TASK_COMPLEX_ENTER_CAR_AS_PASSENGER_WAIT);
    ECASE(TASK_SIMPLE_CAR_DRIVE_TIMED);
    ECASE(TASK_COMPLEX_SHUFFLE_SEATS);
    ECASE(TASK_COMPLEX_CAR_DRIVE_POINT_ROUTE);
    ECASE(TASK_COMPLEX_CAR_OPEN_DRIVER_DOOR);
    ECASE(TASK_SIMPLE_CAR_SET_TEMP_ACTION);
    ECASE(TASK_COMPLEX_CAR_DRIVE_MISSION);
    ECASE(TASK_COMPLEX_CAR_DRIVE);
    ECASE(TASK_COMPLEX_CAR_DRIVE_MISSION_FLEE_SCENE);
    ECASE(TASK_COMPLEX_ENTER_LEADER_CAR_AS_PASSENGER);
    ECASE(TASK_COMPLEX_CAR_OPEN_PASSENGER_DOOR);
    ECASE(TASK_COMPLEX_CAR_DRIVE_MISSION_KILL_PED);
    ECASE(TASK_COMPLEX_LEAVE_CAR_AS_PASSENGER_WAIT);
    ECASE(TASK_COMPLEX_GO_TO_CAR_DOOR_AND_STAND_STILL);
    ECASE(TASK_SIMPLE_CAR_ALIGN);
    ECASE(TASK_SIMPLE_CAR_OPEN_DOOR_FROM_OUTSIDE);
    ECASE(TASK_SIMPLE_CAR_OPEN_LOCKED_DOOR_FROM_OUTSIDE);
    ECASE(TASK_SIMPLE_BIKE_PICK_UP);
    ECASE(TASK_SIMPLE_CAR_CLOSE_DOOR_FROM_INSIDE);
    ECASE(TASK_SIMPLE_CAR_CLOSE_DOOR_FROM_OUTSIDE);
    ECASE(TASK_SIMPLE_CAR_GET_IN);
    ECASE(TASK_SIMPLE_CAR_SHUFFLE);
    ECASE(TASK_SIMPLE_CAR_WAIT_TO_SLOW_DOWN);
    ECASE(TASK_SIMPLE_CAR_WAIT_FOR_DOOR_NOT_TO_BE_IN_USE);
    ECASE(TASK_SIMPLE_CAR_SET_PED_IN_AS_PASSENGER);
    ECASE(TASK_SIMPLE_CAR_SET_PED_IN_AS_DRIVER);
    ECASE(TASK_SIMPLE_CAR_GET_OUT);
    ECASE(TASK_SIMPLE_CAR_JUMP_OUT);
    ECASE(TASK_SIMPLE_CAR_FORCE_PED_OUT);
    ECASE(TASK_SIMPLE_CAR_SET_PED_OUT);
    ECASE(TASK_SIMPLE_CAR_QUICK_DRAG_PED_OUT);
    ECASE(TASK_SIMPLE_CAR_QUICK_BE_DRAGGED_OUT);
    ECASE(TASK_SIMPLE_CAR_SET_PED_QUICK_DRAGGED_OUT);
    ECASE(TASK_SIMPLE_CAR_SLOW_DRAG_PED_OUT);
    ECASE(TASK_SIMPLE_CAR_SLOW_BE_DRAGGED_OUT);
    ECASE(TASK_SIMPLE_CAR_SET_PED_SLOW_DRAGGED_OUT);
    ECASE(TASK_COMPLEX_CAR_SLOW_BE_DRAGGED_OUT);
    ECASE(TASK_COMPLEX_CAR_SLOW_BE_DRAGGED_OUT_AND_STAND_UP);
    ECASE(TASK_COMPLEX_CAR_QUICK_BE_DRAGGED_OUT);
    ECASE(TASK_SIMPLE_BIKE_JACKED);
    ECASE(TASK_SIMPLE_SET_PED_AS_AUTO_DRIVER);
    ECASE(TASK_SIMPLE_GO_TO_POINT_NEAR_CAR_DOOR_UNTIL_DOOR_NOT_IN_USE);
    ECASE(TASK_SIMPLE_WAIT_UNTIL_PED_OUT_CAR);
    ECASE(TASK_COMPLEX_GO_TO_BOAT_STEERING_WHEEL);
    ECASE(TASK_COMPLEX_GET_ON_BOAT_SEAT);
    ECASE(TASK_SIMPLE_CREATE_CAR_AND_GET_IN);
    ECASE(TASK_SIMPLE_WAIT_UNTIL_PED_IN_CAR);
    ECASE(TASK_SIMPLE_CAR_FALL_OUT);
    ECASE(TASK_SIMPLE_GO_TO_POINT);
    ECASE(TASK_COMPLEX_GO_TO_POINT_SHOOTING);
    ECASE(TASK_SIMPLE_ACHIEVE_HEADING);
    ECASE(TASK_COMPLEX_GO_TO_POINT_AND_STAND_STILL);
    ECASE(TASK_COMPLEX_GO_TO_POINT_AND_STAND_STILL_AND_ACHIEVE_HEADING);
    ECASE(TASK_COMPLEX_FOLLOW_POINT_ROUTE);
    ECASE(TASK_COMPLEX_FOLLOW_NODE_ROUTE);
    ECASE(TASK_COMPLEX_SEEK_ENTITY);
    ECASE(TASK_COMPLEX_FLEE_POINT);
    ECASE(TASK_COMPLEX_FLEE_ENTITY);
    ECASE(TASK_COMPLEX_SMART_FLEE_POINT);
    ECASE(TASK_COMPLEX_SMART_FLEE_ENTITY);
    ECASE(TASK_COMPLEX_WANDER);
    ECASE(TASK_COMPLEX_FOLLOW_LEADER_IN_FORMATION);
    ECASE(TASK_COMPLEX_FOLLOW_SEXY_PED);
    ECASE(TASK_COMPLEX_GO_TO_ATTRACTOR);
    ECASE(TASK_COMPLEX_LEAVE_ATTRACTOR);
    ECASE(TASK_COMPLEX_AVOID_OTHER_PED_WHILE_WANDERING);
    ECASE(TASK_COMPLEX_GO_TO_POINT_ANY_MEANS);
    ECASE(TASK_COMPLEX_WALK_ROUND_SHOP);
    ECASE(TASK_COMPLEX_TURN_TO_FACE_ENTITY);
    ECASE(TASK_COMPLEX_AVOID_BUILDING);
    ECASE(TASK_COMPLEX_SEEK_ENTITY_ANY_MEANS);
    ECASE(TASK_COMPLEX_FOLLOW_LEADER_ANY_MEANS);
    ECASE(TASK_COMPLEX_GO_TO_POINT_AIMING);
    ECASE(TASK_COMPLEX_TRACK_ENTITY);
    ECASE(TASK_SIMPLE_GO_TO_POINT_FINE);
    ECASE(TASK_COMPLEX_FLEE_ANY_MEANS);
    ECASE(TASK_COMPLEX_FLEE_SHOOTING);
    ECASE(TASK_COMPLEX_SEEK_ENTITY_SHOOTING);
    ECASE(TASK_UNUSED1);
    ECASE(TASK_COMPLEX_FOLLOW_PATROL_ROUTE);
    ECASE(TASK_COMPLEX_GOTO_DOOR_AND_OPEN);
    ECASE(TASK_COMPLEX_SEEK_ENTITY_AIMING);
    ECASE(TASK_SIMPLE_SLIDE_TO_COORD);
    ECASE(TASK_COMPLEX_INVESTIGATE_DISTURBANCE);
    ECASE(TASK_COMPLEX_FOLLOW_PED_FOOTSTEPS);
    ECASE(TASK_COMPLEX_FOLLOW_NODE_ROUTE_SHOOTING);
    ECASE(TASK_COMPLEX_USE_ENTRYEXIT);
    ECASE(TASK_COMPLEX_AVOID_ENTITY);
    ECASE(TASK_SMART_FLEE_ENTITY_WALKING);
    ECASE(TASK_COMPLEX_KILL_PED_ON_FOOT);
    ECASE(TASK_COMPLEX_KILL_PED_ON_FOOT_MELEE);
    ECASE(TASK_COMPLEX_KILL_PED_ON_FOOT_ARMED);
    ECASE(TASK_COMPLEX_DESTROY_CAR);
    ECASE(TASK_COMPLEX_DESTROY_CAR_MELEE);
    ECASE(TASK_COMPLEX_DESTROY_CAR_ARMED);
    //CASE_FOR(TASK_COMPLEX_FIGHT);
    //CASE_FOR(TASK_SIMPLE_FIRE_RANGED);
    //CASE_FOR(TASK_SIMPLE_FIRE_RANGED_CROUCHED);
    //CASE_FOR(TASK_SIMPLE_FIRE_RELOAD);
    //CASE_FOR(TASK_SIMPLE_FIRE_SNIPER);
    //CASE_FOR(TASK_COMPLEX_ATTACK_RANGED);
    //CASE_FOR(TASK_SIMPLE_AIM_GUN);
    //CASE_FOR(TASK_SIMPLE_FIGHT_IDLE);
    //CASE_FOR(TASK_SIMPLE_FIGHT_SHUFFLE);
    //CASE_FOR(TASK_SIMPLE_ATTACK_MELEE);
    //CASE_FOR(TASK_SIMPLE_FIRE_PROJECTILE);
    //CASE_FOR(TASK_SIMPLE_ATTACK_UNARMED);
    //CASE_FOR(TASK_COMPLEX_THROW_PROJECTILE);
    //CASE_FOR(TASK_SIMPLE_THROW_WEAPON);
    ECASE(TASK_COMPLEX_REACT_TO_ATTACK);
    ECASE(TASK_SIMPLE_BE_KICKED_ON_GROUND);
    ECASE(TASK_SIMPLE_BE_HIT);
    ECASE(TASK_SIMPLE_BE_HIT_WHILE_MOVING);
    ECASE(TASK_COMPLEX_SIDE_STEP_AND_SHOOT);
    ECASE(TASK_SIMPLE_DRIVEBY_SHOOT);
    ECASE(TASK_SIMPLE_DRIVEBY_WATCH_FOR_TARGET);
    ECASE(TASK_COMPLEX_DO_DRIVEBY);
    ECASE(TASK_KILL_ALL_THREATS);
    ECASE(TASK_KILL_PED_GROUP_ON_FOOT);
    ECASE(TASK_SIMPLE_FIGHT);
    ECASE(TASK_SIMPLE_USE_GUN);
    ECASE(TASK_SIMPLE_THROW_PROJECTILE);
    ECASE(TASK_SIMPLE_FIGHT_CTRL);
    ECASE(TASK_SIMPLE_GUN_CTRL);
    ECASE(TASK_SIMPLE_THROW_CTRL);
    ECASE(TASK_SIMPLE_GANG_DRIVEBY);
    ECASE(TASK_COMPLEX_KILL_PED_ON_FOOT_TIMED);
    ECASE(TASK_COMPLEX_KILL_PED_ON_FOOT_STAND_STILL);
    ECASE(TASK_UNUSED2);
    ECASE(TASK_KILL_PED_ON_FOOT_WHILE_DUCKING);
    ECASE(TASK_SIMPLE_STEALTH_KILL);
    ECASE(TASK_COMPLEX_KILL_PED_ON_FOOT_STEALTH);
    ECASE(TASK_COMPLEX_KILL_PED_ON_FOOT_KINDA_STAND_STILL);
    ECASE(TASK_COMPLEX_KILL_PED_AND_REENTER_CAR);
    ECASE(TASK_COMPLEX_ROAD_RAGE);
    ECASE(TASK_KILL_PED_FROM_BOAT);
    ECASE(TASK_SIMPLE_SET_CHAR_IGNORE_WEAPON_RANGE_FLAG);
    ECASE(TASK_SEEK_COVER_UNTIL_TARGET_DEAD);
    ECASE(TASK_SIMPLE_ARREST_PED);
    ECASE(TASK_COMPLEX_ARREST_PED);
    ECASE(TASK_SIMPLE_BE_ARRESTED);
    ECASE(TASK_COMPLEX_POLICE_PURSUIT);
    ECASE(TASK_COMPLEX_BE_COP);
    ECASE(TASK_COMPLEX_KILL_CRIMINAL);
    ECASE(TASK_COMPLEX_COP_IN_CAR);
    ECASE(TASK_SIMPLE_INFORM_GROUP);
    ECASE(TASK_COMPLEX_GANG_LEADER);
    ECASE(TASK_COMPLEX_PARTNER_DEAL);
    ECASE(TASK_COMPLEX_PARTNER_GREET);
    ECASE(TASK_COMPLEX_PARTNER_CHAT);
    ECASE(TASK_COMPLEX_GANG_HASSLE_VEHICLE);
    ECASE(TASK_COMPLEX_WALK_WITH_PED);
    ECASE(TASK_COMPLEX_GANG_FOLLOWER);
    ECASE(TASK_COMPLEX_WALK_ALONGSIDE_PED);
    ECASE(TASK_COMPLEX_PARTNER_SHOVE);
    ECASE(TASK_COMPLEX_SIGNAL_AT_PED);
    ECASE(TASK_COMPLEX_PASS_OBJECT);
    ECASE(TASK_COMPLEX_GANG_HASSLE_PED);
    ECASE(TASK_COMPLEX_WAIT_FOR_PED);
    ECASE(TASK_SIMPLE_DO_HAND_SIGNAL);
    //CASE_FOR(TASK_COMPLEX_THROW_OBJECT_BEING_HELD);
    ECASE(TASK_COMPLEX_BE_IN_COUPLE);
    ECASE(TASK_COMPLEX_GOTO_VEHICLE_AND_LEAN);
    ECASE(TASK_COMPLEX_LEAN_ON_VEHICLE);
    ECASE(TASK_COMPLEX_CHAT);
    ECASE(TASK_COMPLEX_GANG_JOIN_RESPOND);
    ECASE(TASK_ZONE_RESPONSE);
    ECASE(TASK_SIMPLE_TOGGLE_PED_THREAT_SCANNER);
    ECASE(TASK_FINISHED);
    ECASE(TASK_SIMPLE_JETPACK);
    ECASE(TASK_SIMPLE_SWIM);
    ECASE(TASK_COMPLEX_SWIM_AND_CLIMB_OUT);
    ECASE(TASK_SIMPLE_DUCK_TOGGLE);
    ECASE(TASK_WAIT_FOR_MATCHING_AREA_CODES);
    ECASE(TASK_SIMPLE_ON_ESCALATOR);
    ECASE(TASK_COMPLEX_PROSTITUTE_SOLICIT);
    ECASE(TASK_INTERIOR_USE_INFO);
    ECASE(TASK_INTERIOR_GOTO_INFO);
    ECASE(TASK_INTERIOR_BE_IN_HOUSE);
    ECASE(TASK_INTERIOR_BE_IN_OFFICE);
    ECASE(TASK_INTERIOR_BE_IN_SHOP);
    ECASE(TASK_INTERIOR_SHOPKEEPER);
    ECASE(TASK_INTERIOR_LIE_IN_BED);
    ECASE(TASK_INTERIOR_SIT_ON_CHAIR);
    ECASE(TASK_INTERIOR_SIT_AT_DESK);
    ECASE(TASK_INTERIOR_LEAVE);
    ECASE(TASK_INTERIOR_SIT_IN_RESTAURANT);
    ECASE(TASK_INTERIOR_RESERVED2);
    ECASE(TASK_INTERIOR_RESERVED3);
    ECASE(TASK_INTERIOR_RESERVED4);
    ECASE(TASK_INTERIOR_RESERVED5);
    ECASE(TASK_INTERIOR_RESERVED6);
    ECASE(TASK_INTERIOR_RESERVED7);
    ECASE(TASK_INTERIOR_RESERVED8);
    ECASE(TASK_GROUP_FOLLOW_LEADER_ANY_MEANS);
    ECASE(TASK_GROUP_FOLLOW_LEADER_WITH_LIMITS);
    ECASE(TASK_GROUP_KILL_THREATS_BASIC);
    ECASE(TASK_GROUP_KILL_PLAYER_BASIC);
    ECASE(TASK_GROUP_STARE_AT_PED);
    ECASE(TASK_GROUP_FLEE_THREAT);
    ECASE(TASK_GROUP_PARTNER_DEAL);
    ECASE(TASK_GROUP_PARTNER_GREET);
    ECASE(TASK_GROUP_HASSLE_SEXY_PED);
    ECASE(TASK_GROUP_HASSLE_THREAT);
    ECASE(TASK_GROUP_USE_MEMBER_DECISION);
    ECASE(TASK_GROUP_EXIT_CAR);
    ECASE(TASK_GROUP_ENTER_CAR);
    ECASE(TASK_GROUP_ENTER_CAR_AND_PERFORM_SEQUENCE);
    ECASE(TASK_GROUP_RESPOND_TO_LEADER_COMMAND);
    ECASE(TASK_GROUP_HAND_SIGNAL);
    ECASE(TASK_GROUP_DRIVEBY);
    ECASE(TASK_GROUP_HASSLE_THREAT_PASSIVE);
    ECASE(TASK_COMPLEX_USE_MOBILE_PHONE);
    ECASE(TASK_SIMPLE_PHONE_TALK);
    ECASE(TASK_SIMPLE_PHONE_IN);
    ECASE(TASK_SIMPLE_PHONE_OUT);
    ECASE(TASK_COMPLEX_USE_GOGGLES);
    ECASE(TASK_SIMPLE_GOGGLES_ON);
    ECASE(TASK_SIMPLE_GOGGLES_OFF);
    ECASE(TASK_SIMPLE_INFORM_RESPECTED_FRIENDS);
    ECASE(TASK_COMPLEX_USE_SCRIPTED_BRAIN);
    ECASE(TASK_SIMPLE_FINISH_BRAIN);
    //CASE_FOR(TASK_COMPLEX_A);
    //CASE_FOR(TASK_COMPLEX_B);
    //CASE_FOR(TASK_COMPLEX_C);
    //CASE_FOR(TASK_COMPLEX_D);
    //CASE_FOR(TASK_COMPLEX_E);
    default:
        return std::nullopt;
    }
#undef CASE_FOR
}
