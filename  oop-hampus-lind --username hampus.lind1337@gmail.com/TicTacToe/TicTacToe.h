#pragma once
using namespace std;
class TicTacToe
{
private:
	char spelplan[3][3];
	int xmark, ymark;
	int tur = 0; 
	
public:
	TicTacToe();
	void RitaPlan();
	void FlyttaMark(char c);
	void SpelStatus();
	void SpelarTur(char c);
	~TicTacToe();
};

