//
//  Mission11.func.c
//
//  Finite state machine function pointers for "Mission11" mission
//
//  This code was autogenerated from Mission11.kp by KAS2C Version 2.05sdl
//


#include "Mission11.h"  // prototypes and #includes for exposed game functions

// FSM init/watch function pointers.
const void* Mission11_FunctionPointers[] =
{
	(void*)Init_Mission11_FleetIntel,
	(void*)Watch_Mission11_FleetIntel,
	(void*)Init_Mission11_FleetIntel_FCIntro,
	(void*)Watch_Mission11_FleetIntel_FCIntro,
	(void*)Init_Mission11_FleetIntel_FIDefendTraders,
	(void*)Watch_Mission11_FleetIntel_FIDefendTraders,
	(void*)Init_Mission11_FleetIntel_FIResearchSuperHeavy,
	(void*)Watch_Mission11_FleetIntel_FIResearchSuperHeavy,
	(void*)Init_Mission11_FleetIntel_TradersThanks,
	(void*)Watch_Mission11_FleetIntel_TradersThanks,
	(void*)Init_Mission11_FleetIntel_TradersFirstWarning,
	(void*)Watch_Mission11_FleetIntel_TradersFirstWarning,
	(void*)Init_Mission11_FleetIntel_FICeaseFire,
	(void*)Watch_Mission11_FleetIntel_FICeaseFire,
	(void*)Init_Mission11_FleetIntel_TradersTellPlayer,
	(void*)Watch_Mission11_FleetIntel_TradersTellPlayer,
	(void*)Init_Mission11_FleetIntel_TradersPlayN08,
	(void*)Watch_Mission11_FleetIntel_TradersPlayN08,
	(void*)Init_Mission11_FleetIntel_TradersCouncilComin,
	(void*)Watch_Mission11_FleetIntel_TradersCouncilComin,
	(void*)Init_Mission11_FleetIntel_FIEngageHyperdrive,
	(void*)Watch_Mission11_FleetIntel_FIEngageHyperdrive,
	(void*)Init_Mission11_FleetIntel_FIIdle,
	(void*)Watch_Mission11_FleetIntel_FIIdle,
	(void*)Init_Mission11_Traders,
	(void*)Watch_Mission11_Traders,
	(void*)Init_Mission11_Traders_Flounder,
	(void*)Watch_Mission11_Traders_Flounder,
	(void*)Init_Mission11_Traders_FlyUpToPlayer,
	(void*)Watch_Mission11_Traders_FlyUpToPlayer,
	(void*)Init_Mission11_Traders_UnderAttackWatch,
	(void*)Watch_Mission11_Traders_UnderAttackWatch,
	(void*)Init_Mission11_Traders_TradersObliteratePlayer,
	(void*)Watch_Mission11_Traders_TradersObliteratePlayer,
	(void*)Init_Mission11_Traders_WaitToHyperspace,
	(void*)Watch_Mission11_Traders_WaitToHyperspace,
	(void*)Init_Mission11_Traders_HyperspaceOut,
	(void*)Watch_Mission11_Traders_HyperspaceOut,
	(void*)Init_Mission11_Traders_NullState,
	(void*)Watch_Mission11_Traders_NullState,
	(void*)Init_Mission11_Cruiser,
	(void*)Watch_Mission11_Cruiser,
	(void*)Init_Mission11_Cruiser_AttackTraders,
	(void*)Watch_Mission11_Cruiser_AttackTraders,
	(void*)Init_Mission11_Cruiser_DefendYourself,
	(void*)Watch_Mission11_Cruiser_DefendYourself,
	(void*)Init_Mission11_Cruiser_AttackPlayerMothership,
	(void*)Watch_Mission11_Cruiser_AttackPlayerMothership,
	(void*)Init_Mission11_Cruiser_NullState,
	(void*)Watch_Mission11_Cruiser_NullState,
	(void*)Init_Mission11,
	(void*)Watch_Mission11,
};

// Number of FSM init/watch function pointers.
const unsigned int Mission11_FunctionPointerCount = 52;