#include "Reversi.h"
//#include"testGUI.h"
#include <ctime>
//#include "testGUI.h"
int main() {
	/* Normal code */
    srand((unsigned int)(time(nullptr)));
    Reversi reversi = Reversi();
    reversi.gameStart();
	system("pause");

	///* A simple GUI for test*/
	//Game test;
	//test.HumanGame(); 
	//test.AIGame(1); //humanColor = WHITE

	return 0;
}

