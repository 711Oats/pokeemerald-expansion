SeafloorCavern_Room3_MapScripts::
	.byte 0

SeafloorCavern_Room3_EventScript_Shelly::
	trainerbattle_single TRAINER_SHELLY_SEAFLOOR_CAVERN, SeafloorCavern_Room3_Text_ShellyIntro, SeafloorCavern_Room3_Text_ShellyDefeat
	msgbox SeafloorCavern_Room3_Text_ShellyPostBattle, MSGBOX_AUTOCLOSE
	end

SeafloorCavern_Room3_EventScript_Grunt5::
	trainerbattle_single TRAINER_GRUNT_SEAFLOOR_CAVERN_5, SeafloorCavern_Room3_Text_Grunt5Intro, SeafloorCavern_Room3_Text_Grunt5Defeat
	msgbox SeafloorCavern_Room3_Text_Grunt5PostBattle, MSGBOX_AUTOCLOSE
	end

SeafloorCavern_Room3_Text_ShellyIntro:
	.string "whhhAAAt?!\p"
	.string "How did you manage to get here without\n"
	.string "a submarine?\l"
	.string "Are your lungs that big!\p"
	.string "ummm Anyways uhh.\n"
	.string "You shouldn't be here.\p"
	.string "CASSIE said we're nearing our plan\n"
	.string "finishing and stuff…\p"
	.string "So nowwww prepare for a battle!\n"
	.string "Yeah man I'm gonna GET YOU!$"

SeafloorCavern_Room3_Text_ShellyDefeat:
	.string "oof ummm\p"
	.string "I'm gonna need some BRISK$"

SeafloorCavern_Room3_Text_ShellyPostBattle:
	.string "Well uhh!\n"
	.string "Idk what to do now.\p"
	.string "I think cashlawg should be done\n"
	.string "prettyy soon.\p"
	.string "Have you met ashlawg yet?\n"
	.string "We were supposed to get some\l"
	.string "food and stuff…$"

SeafloorCavern_Room3_Text_Grunt5Intro:
	.string "For our dream to become real, we need\n"
	.string "the power of POKéMON.\p"
	.string "But meddlers like you use the power of\n"
	.string "POKéMON to mess with us even at\l"
	.string "a place like this!\p"
	.string "Life just doesn't work the way we\n"
	.string "need it to!$"

SeafloorCavern_Room3_Text_Grunt5Defeat:
	.string "Gwah!$"

SeafloorCavern_Room3_Text_Grunt5PostBattle:
	.string "You know, we don't dare question\n"
	.string "the motives of our leader.\p"
	.string "But here you are, just some punk,\n"
	.string "going up against our BOSS.\p"
	.string "Maybe…\n"
	.string "You must be something…$"

