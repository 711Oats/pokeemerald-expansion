LilycoveCity_DepartmentStore_3F_MapScripts::
	.byte 0

LilycoveCity_DepartmentStore_3F_EventScript_ClerkLeft::
	lock
	faceplayer
	message gText_HowMayIServeYou
	waitmessage
	pokemart LilycoveCity_DepartmentStore_3F_Pokemart_Vitamins
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
	release
	end

	.align 2
LilycoveCity_DepartmentStore_3F_Pokemart_Vitamins:
	.2byte ITEM_ABILITY_CAPSULE
	.2byte ITEM_ABILITY_PATCH
	.2byte ITEM_AIR_BALLOON
	.2byte ITEM_ASSAULT_VEST
	.2byte ITEM_BINDING_BAND
	.2byte ITEM_BIG_ROOT
	.2byte ITEM_BLACK_BELT
	.2byte ITEM_BLACK_SLUDGE
	.2byte ITEM_BRIGHT_POWDER
	.2byte ITEM_CHOICE_BAND
	.2byte ITEM_CHOICE_SCARF
	.2byte ITEM_CHOICE_SPECS
	.2byte ITEM_DAMP_ROCK
	.2byte ITEM_HEAT_ROCK
	.2byte ITEM_SMOOTH_ROCK
	.2byte ITEM_ICY_ROCK
	.2byte ITEM_EJECT_BUTTON
	.2byte ITEM_EJECT_PACK
	.2byte ITEM_EVIOLITE
	.2byte ITEM_EXPERT_BELT
	.2byte ITEM_FLAME_ORB
	.2byte ITEM_NONE
	release
	end

LilycoveCity_DepartmentStore_3F_EventScript_ClerkRight::
	lock
	faceplayer
	message gText_HowMayIServeYou
	waitmessage
	pokemart LilycoveCity_DepartmentStore_3F_Pokemart_StatBoosters
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
	release
	end

	.align 2
LilycoveCity_DepartmentStore_3F_Pokemart_StatBoosters:
	.2byte ITEM_FOCUS_SASH
	.2byte ITEM_HEAVY_DUTY_BOOTS
	.2byte ITEM_LEEK
	.2byte ITEM_LEFTOVERS
	.2byte ITEM_LIFE_ORB
	.2byte ITEM_LIGHT_BALL
	.2byte ITEM_LIGHT_CLAY
	.2byte ITEM_METRONOME
	.2byte ITEM_MUSCLE_BAND
	.2byte ITEM_POWER_HERB
	.2byte ITEM_ROCKY_HELMET
	.2byte ITEM_SHED_SHELL
	.2byte ITEM_SHELL_BELL
	.2byte ITEM_TERRAIN_EXTENDER
	.2byte ITEM_THROAT_SPRAY
	.2byte ITEM_WEAKNESS_POLICY
	.2byte ITEM_WHITE_HERB
	.2byte ITEM_WIDE_LENS
	.2byte ITEM_WISE_GLASSES
	.2byte ITEM_ZOOM_LENS
	.2byte ITEM_NONE
	release
	end

LilycoveCity_DepartmentStore_3F_EventScript_TriathleteM::
	msgbox LilycoveCity_DepartmentStore_3F_Text_ItemsBestForTougheningPokemon, MSGBOX_NPC
	end

LilycoveCity_DepartmentStore_3F_EventScript_PokefanM::
	msgbox LilycoveCity_DepartmentStore_3F_Text_WantMoreEndurance, MSGBOX_NPC
	end

LilycoveCity_DepartmentStore_3F_EventScript_Woman::
	msgbox LilycoveCity_DepartmentStore_3F_Text_GaveCarbosToSpeedUpMon, MSGBOX_NPC
	end

LilycoveCity_DepartmentStore_3F_Text_ItemsBestForTougheningPokemon:
	.string "Woah these competitive,\n"
	.string "items are the best!\p"
	.string "Try to come up with,\n"
	.string "unique strategies with them.$"

LilycoveCity_DepartmentStore_3F_Text_WantMoreEndurance:
	.string "If I wanted my POKeMON to\n"
	.string "last longer...\p"
	.string "then I should let them hold a\n"
	.string "LEFTOVERS.$"

LilycoveCity_DepartmentStore_3F_Text_GaveCarbosToSpeedUpMon:
	.string "I heard the ELITE 4 use,\n"
	.string "these items in battle.$"

