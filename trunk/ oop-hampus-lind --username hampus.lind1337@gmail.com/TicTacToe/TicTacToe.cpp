#include "TicTacToe.h"
#include<iostream>
#include "Console.h"


using namespace std;
using namespace Course;

TicTacToe::TicTacToe()
{
	int x, y;
	for (x = 0; x < 3; x++){
		for (y = 0; y < 3; y++){
			this->spelplan[x][y] = '_';
		}
	}
	this->xmark = 0;
	this->ymark = 0;

}

void TicTacToe::RitaPlan(){
	int x, y;
	for (x = 0; x < 3; x++){
		for (y = 0; y < 3; y++){
			Console::gotoxy(x * 3, y * 3);
			cout << this->spelplan[x][y];
		}
	}
}

void TicTacToe::SpelStatus(){ //Kollar efter vinnare
	for (int x = 0; x < 3; x++){
		if (this->spelplan[x][0] == 'o' && this->spelplan[x][1] == 'o' && this->spelplan[x][2] == 'o' || this->spelplan[x][0] == 'x' && this->spelplan[x][1] == 'x' && this->spelplan[x][2] == 'x') { //Kollar vinnare horisontellt
			if (tur == 0){
				Console::gotoxy(0, 10);
				cout << "ringar vann!";
			}
			else{
				Console::gotoxy(0, 10);
				cout << "kryss vann!";
			}
		}
		}
	for (int y = 0; y < 3; y++){ //Kollar vinnare vertikalt
		if (this->spelplan[0][y] == 'o' && this->spelplan[1][y] == 'o' && this->spelplan[2][y] == 'o' || this->spelplan[0][y] == 'x' && this->spelplan[1][y] == 'x' && this->spelplan[2][y] == 'x') { //Kollar vinnare vertikalt
			if (tur == 0){
				Console::gotoxy(0, 10);
				cout << "ringar vann";
			}
			else{
				Console::gotoxy(0, 10);
				cout << "kryss vann";
				
			}

		}

	}

		if (this->spelplan[0][0] == 'o' && this->spelplan[1][1] == 'o' && this->spelplan[2][2] == 'o' || this->spelplan[0][0] == 'x' && this->spelplan[1][1] == 'x' && this->spelplan[2][2] == 'x'){ //Kollar vinnare diagonalt
			if (tur == 0){
				Console::gotoxy(0, 10);
				cout << "ringar vann";
			}
			else{
				Console::gotoxy(0, 10);
				cout << "kryss vann";
			}
		}
		if (this->spelplan[2][0] == 'o' && this->spelplan[1][1] == 'o' && this->spelplan[0][2] == 'o' || this->spelplan[2][0] == 'x' && this->spelplan[1][1] == 'x' && this->spelplan[0][2] == 'x'){
			if (tur == 0){
				Console::gotoxy(0, 10);
				cout << "ringar vann";
			}
			else{
				Console::gotoxy(0, 10);
				cout << "kryss vann";
			}
		}
	}

void TicTacToe::FlyttaMark(char c){ //Flytta mark (markör)
	if (c == 'w' && this->ymark>0)
		this->ymark -= 1;
	else if (c == 's' && this->ymark<2)
		this->ymark += 1;
	else if (c == 'a' && this->xmark > 0)
		this->xmark -= 1;
	else if (c == 'd'&&xmark < 2)
		this->xmark += 1;
	Console::gotoxy(this->xmark*3, this->ymark*3);
}

void TicTacToe::SpelarTur(char c){ //vilken spelares tur är det
	if (c == '\r'){
		if (this->tur == 0 && this->spelplan[this->xmark][this->ymark] == '_'){
			this->spelplan[this->xmark][this->ymark] = 'x';
			tur = 1;
		}
		else if (this->tur == 1 && this->spelplan[this->xmark][this->ymark] == '_'){
			this->spelplan[this->xmark][this->ymark] = 'o'; 
			tur = 0;
		}
		else {
			Console::gotoxy(0, 10);

		}
	}
	
}


TicTacToe::~TicTacToe()
{
}
