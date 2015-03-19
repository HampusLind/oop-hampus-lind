#pragma once
#include <iostream>
#include <vector>
#include <string>

using namespace std;

class ADTForGlosor
{
private:
	string language;
	string input;
	string output;
public:

	ADTForGlosor()
	{
		this->language = "";
		this->input= "";
		this->output = "";
	}

	ADTForGlosor(string language, string input, string output){
		this->language = language;
	}

	void Translation(string language, string input){
		if (language == "swe"){
			if (input == "hello"){
				this->output = "tjena fan";
			}
			else if (input == "bike"){
				this->output = "cykel";
			}
			else if (input == "goodbye"){
				this->output = "hej då";
			}
			else if (input == "öl"){
				this->output = "beer";
			}
			else
				cout << "du har valt ett ord som inte finns, skärp dig!" << endl;
		}

		if (language == "eng"){
			if (input == "hej"){
				this->output = "hi there";
			}

			else if (input == "hej då"){
				this->output = "goodbye";
			}
			else if (input == "cykel"){
				this->output = "bike";
			}
			else if (input == "beer"){
				this->output = "öl";
			}
			else
				this->output = "du har valt ett ord som inte finns, skärp dig!";
		}
	}

	void PrintTranslation(){
		cout << this->output << endl;
	}


	~ADTForGlosor()
	{
	}
};

