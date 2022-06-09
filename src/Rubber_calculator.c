#include <display_syscalls.h>
#include <keyboard_syscalls.h>
#include <keyboard.hpp>
#include <color.h>
//#include "ColorLib.h"
#include "tools.h"
#include "game.h"

void about(){
	int key;
		MsgBoxPush(5);
    	PrintXY(3,2,"  Rubber Calculator v0.1 ",TEXT_MODE_NORMAL, TEXT_COLOR_BLACK);
    	PrintXY(3,4,"       by Guidenevada88",TEXT_MODE_NORMAL, TEXT_COLOR_BLACK);
    	PrintXY(3,6,"     Press:[EXIT]",TEXT_MODE_NORMAL, TEXT_COLOR_BLACK);
		Bdisp_PutDisp_DD();
		GetKey(&key);	
		MsgBoxPop();
		Bdisp_PutDisp_DD();
}

int msg_ni(){
	
}


int main(void) {
	int key;
	while (1) {
		//LoadVRAM_1();
		//Bdisp_AllClr_VRAM();
		//CL_FillVRAM(bgcolor);
		StatusArea_sub();
		PrintXY(1,1,"  Rubber Calculator",0,0);
		func_menu1();
		GetKey(&key);
		switch (key) {
			case KEY_CTRL_F1: msg_ni(); break;
			default : break;
		}
		Bdisp_PutDisp_DD();
	}
	
	return (0);
}