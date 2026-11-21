HomelyTown_MapScripts::
	.byte 0

HomelyTown_EventScript_GiveStarter::
	lock
	faceplayer
	goto_if_set FLAG_SYS_POKEMON_GET, HomelyTown_EventScript_AlreadyHaveStarter
	givemon SPECIES_WEEDLE, 5, ITEM_NONE
	setflag FLAG_SYS_POKEMON_GET
	playfanfare MUS_OBTAIN_ITEM
	msgbox HomelyTown_Text_ReceivedStarter, MSGBOX_DEFAULT
	waitfanfare
	closemessage
	release
	end

HomelyTown_EventScript_AlreadyHaveStarter::
	msgbox HomelyTown_Text_TakeCareOfIt, MSGBOX_DEFAULT
	release
	end

HomelyTown_Text_ReceivedStarter:
	.string "{PLAYER} received a WEEDLE!$"

HomelyTown_Text_TakeCareOfIt:
	.string "Take good care of your new partner!$"
