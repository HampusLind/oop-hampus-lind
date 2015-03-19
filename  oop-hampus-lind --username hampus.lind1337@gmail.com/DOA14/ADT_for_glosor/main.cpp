#include <iostream>
#include "ADTForGlosor.h"

using namespace std;

int main(){
	string sprak;
	string WordToTranslate;
	ADTForGlosor a;
	while (1){
		cout << "welcome to translation program" << endl;
		cout << "select language to translate to (currently only swe or eng :( )" << endl;
		cin >> sprak;
		cout << "enter a word to translate:" << endl;
		cin >> WordToTranslate;
		a.Translation(sprak, WordToTranslate);
		cout << "translation:" << endl;
		a.PrintTranslation();
		system("PAUSE");
	}
	return 0;
}