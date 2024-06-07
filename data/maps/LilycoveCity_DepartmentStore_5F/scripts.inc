.set LOCALID_WOMAN, 7

LilycoveCity_DepartmentStore_5F_MapScripts::
	map_script MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE, LilycoveCity_DepartmentStore_5F_OnWarp
	.byte 0

@ During the abnormal weather from Kyogre/Groudon awakening the dept store rooftop is inaccessible
@ Likely done to avoid dealing with showing the weather. Technically the rooftop is indoors
LilycoveCity_DepartmentStore_5F_OnWarp:
	map_script_2 VAR_SOOTOPOLIS_CITY_STATE, 1, LilycoveCity_DepartmentStore_5F_EventScript_BlockRoofStairs
	map_script_2 VAR_SOOTOPOLIS_CITY_STATE, 2, LilycoveCity_DepartmentStore_5F_EventScript_BlockRoofStairs
	map_script_2 VAR_SOOTOPOLIS_CITY_STATE, 3, LilycoveCity_DepartmentStore_5F_EventScript_BlockRoofStairs
	.2byte 0

LilycoveCity_DepartmentStore_5F_EventScript_BlockRoofStairs::
	setobjectxy LOCALID_WOMAN, 16, 2
	turnobject LOCALID_WOMAN, DIR_NORTH
	end

LilycoveCity_DepartmentStore_5F_EventScript_ClerkFarLeft::
	lock
	faceplayer
	message gText_HowMayIServeYou
	waitmessage
	pokemart LilycoveCity_DepartmentStore_5F_Pokemart_Dolls
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
	release
	end

	.align 2
LilycoveCity_DepartmentStore_5F_Pokemart_Dolls:
	.2byte ITEM_ADAMANT_MINT
	.2byte ITEM_BOLD_MINT
	.2byte ITEM_BRAVE_MINT
	.2byte ITEM_CALM_MINT
	.2byte ITEM_CAREFUL_MINT
	.2byte ITEM_GENTLE_MINT
	.2byte ITEM_HASTY_MINT
	.2byte ITEM_IMPISH_MINT
	.2byte ITEM_JOLLY_MINT
	.2byte ITEM_LAX_MINT
	.2byte ITEM_LONELY_MINT
	.2byte ITEM_MILD_MINT
	.2byte ITEM_MODEST_MINT
	.2byte ITEM_NAIVE_MINT
	.2byte ITEM_NAUGHTY_MINT
	.2byte ITEM_QUIET_MINT
	.2byte ITEM_RASH_MINT
	.2byte ITEM_RELAXED_MINT
	.2byte ITEM_SASSY_MINT
	.2byte ITEM_SERIOUS_MINT
	.2byte ITEM_TIMID_MINT
	.2byte ITEM_NONE
	release
	end

LilycoveCity_DepartmentStore_5F_EventScript_ClerkMidLeft::
	lock
	faceplayer
	message gText_HowMayIServeYou
	waitmessage
	pokemart LilycoveCity_DepartmentStore_5F_Pokemart_Cushions
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
	release
	end

	.align 2
LilycoveCity_DepartmentStore_5F_Pokemart_Cushions:
	.2byte ITEM_X_ACCURACY
	.2byte ITEM_X_ATTACK
	.2byte ITEM_X_SP_ATK
	.2byte ITEM_X_DEFENSE
	.2byte ITEM_X_SP_DEF
	.2byte ITEM_X_SPEED
	.2byte ITEM_PP_MAX
	.2byte ITEM_NONE
	release
	end

LilycoveCity_DepartmentStore_5F_EventScript_ClerkMidRight::
	lock
	faceplayer
	message gText_HowMayIServeYou
	waitmessage
	pokemart LilycoveCity_DepartmentStore_5F_Pokemart_Posters
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
	release
	end

	.align 2
LilycoveCity_DepartmentStore_5F_Pokemart_Posters:
	.2byte ITEM_POKE_BALL
	.2byte ITEM_GREAT_BALL
	.2byte ITEM_ULTRA_BALL
	.2byte ITEM_FAST_BALL
	.2byte ITEM_LEVEL_BALL
	.2byte ITEM_LURE_BALL
	.2byte ITEM_HEAVY_BALL
	.2byte ITEM_LOVE_BALL
	.2byte ITEM_FRIEND_BALL
	.2byte ITEM_MOON_BALL
	.2byte ITEM_NET_BALL
	.2byte ITEM_DIVE_BALL
	.2byte ITEM_NEST_BALL
	.2byte ITEM_REPEAT_BALL
	.2byte ITEM_TIMER_BALL
	.2byte ITEM_DUSK_BALL
	.2byte ITEM_QUICK_BALL
	.2byte ITEM_LUXURY_BALL
	.2byte ITEM_NONE
	release
	end

LilycoveCity_DepartmentStore_5F_EventScript_ClerkFarRight::
	lock
	faceplayer
	message gText_HowMayIServeYou
	waitmessage
	pokemart LilycoveCity_DepartmentStore_5F_Pokemart_Mats
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
	release
	end

	.align 2
LilycoveCity_DepartmentStore_5F_Pokemart_Mats:
	.2byte ITEM_AGUAV_BERRY
	.2byte ITEM_FIGY_BERRY
	.2byte ITEM_IAPAPA_BERRY
	.2byte ITEM_MAGO_BERRY
	.2byte ITEM_WIKI_BERRY
	.2byte ITEM_ORAN_BERRY
	.2byte ITEM_BERRY_JUICE
	.2byte ITEM_SITRUS_BERRY
	.2byte ITEM_LEPPA_BERRY
	.2byte ITEM_ENIGMA_BERRY
	.2byte ITEM_LUM_BERRY
	.2byte ITEM_APICOT_BERRY
	.2byte ITEM_CUSTAP_BERRY
	.2byte ITEM_GANLON_BERRY
	.2byte ITEM_KEE_BERRY
	.2byte ITEM_LIECHI_BERRY
	.2byte ITEM_MICLE_BERRY
	.2byte ITEM_PETAYA_BERRY
	.2byte ITEM_SALAC_BERRY
	.2byte ITEM_NONE	
	release
	end

LilycoveCity_DepartmentStore_5F_EventScript_PokefanF::
	msgbox LilycoveCity_DepartmentStore_5F_Text_PlaceFullOfCuteDolls, MSGBOX_NPC
	end

LilycoveCity_DepartmentStore_5F_EventScript_Woman::
	lockall
	applymovement LOCALID_WOMAN, Common_Movement_FacePlayer
	waitmovement 0
	goto_if_eq VAR_SOOTOPOLIS_CITY_STATE, 0, LilycoveCity_DepartmentStore_5F_EventScript_WomanNormal
	goto_if_ge VAR_SOOTOPOLIS_CITY_STATE, 4, LilycoveCity_DepartmentStore_5F_EventScript_WomanNormal
	goto LilycoveCity_DepartmentStore_5F_EventScript_WomanLegendaryWeather
	end

LilycoveCity_DepartmentStore_5F_EventScript_WomanNormal::
	msgbox LilycoveCity_DepartmentStore_5F_Text_SellManyCuteMatsHere, MSGBOX_DEFAULT
	closemessage
	releaseall
	end

LilycoveCity_DepartmentStore_5F_EventScript_WomanLegendaryWeather::
	msgbox LilycoveCity_DepartmentStore_5F_Text_ClosedRooftopForWeather, MSGBOX_DEFAULT
	closemessage
	applymovement LOCALID_WOMAN, Common_Movement_WalkInPlaceFasterUp
	waitmovement 0
	releaseall
	end

LilycoveCity_DepartmentStore_5F_EventScript_LittleGirl::
	msgbox LilycoveCity_DepartmentStore_5F_Text_GettingDollInsteadOfPokemon, MSGBOX_NPC
	end

LilycoveCity_DepartmentStore_5F_Text_PlaceFullOfCuteDolls:
	.string "This place is my go to for BERRIES.\p"
	.string "POKeMON usually to eat them in battle,\n"
	.string "but they make for good treats!$"

LilycoveCity_DepartmentStore_5F_Text_GettingDollInsteadOfPokemon:
	.string "I'm not big enough to raise POKéMON,\n"
	.string "so I can't use a lot of the stuff here.$"

LilycoveCity_DepartmentStore_5F_Text_SellManyCuteMatsHere:
	.string "They sell many POKeBALLs here.\p"
	.string "I wonder which one I should get?\n"
	.string "Maybe I'll buy them all…$"

LilycoveCity_DepartmentStore_5F_Text_ClosedRooftopForWeather:
	.string "I think they closed the rooftop\n"
	.string "because the weather is wild today.$"
