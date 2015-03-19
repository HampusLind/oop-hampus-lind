#include <iostream>
#include <sstream>
#include <fstream>
#include "string.h"
#include "Person.h"


namespace dejt{
	
	void PrintaPar(Forward_List<Forward_List<Person>> ParLista)
	{
		for (int i = 0; i < ParLista.length(); i++)
		{
			for (int j = 0; j < ParLista[i].length(); j++)
			{
				ParLista[i][j].print();
			}
			std::cout << endl;
		}
	}

	
	int JamforIntresse(Person tjej, Person kille){
		int SammaIntresse = 0;
		for (int i = 0; i < tjej.getIntresse().length(); i++){
			
			for (int j = 0; j < kille.getIntresse().length(); j++){
				if (tjej.getIntresse()[i] == kille.getIntresse()[j]){
					SammaIntresse++;
				}

			}
		}
		return SammaIntresse;
	}

	
	void SkapaPar(Forward_List<Person>&tjejlista, Forward_List<Person>&killista, Forward_List<Forward_List<Person>>&parlista, int limit){
		Person tjej;
		Person kille;
		
		for (int i = 0; i < tjejlista.length(); i++){
			int maxMutualInterest = 0;
			tjej = tjejlista[i];
			for (int j = 0; j < killista.length(); j++){
				int matchValue = 0;
				
				matchValue = JamforIntresse(killista[j], tjejlista[i]);
				if (matchValue >= maxMutualInterest){
					maxMutualInterest = matchValue;
					kille = killista[j];

				}

			}

			if (maxMutualInterest >= limit){
				Forward_List<Person> par;
				par.push_front(kille);
				par.push_front(tjej);
				parlista.push_front(par);
				killista.remove(kille);
				tjejlista.remove(tjej);
			}

		}

	}

	
	void ReadFromFile(string fileName, Forward_List<Person>& list){
		list.clear();
		string str;
		ifstream fin;
		fin.open(fileName);
		if (!fin.good()){
			cout << "kunde inte öppna :( " << endl;
			return;
		}
		while (getline(fin, str)){
			istringstream iss(str);
			string word;
			iss >> word;
			Person p1(word);
			while (iss >> word){
				p1.AddIntresse(word);
			}

			list.push_front(p1);
		}

		fin.close();
	}

	
	void addToFolkLista(Forward_List<Person> tjejlista, Forward_List<Person>killista, Forward_List<Person>& folklista){
		for (int i = 0; i < tjejlista.length(); i++){
			folklista.push_front(tjejlista[i]);
		}
		for (int i = 0; i < killista.length(); i++){
			folklista.push_front(killista[i]);
		}
	}

}

int main(){
	
	Forward_List<Person>killista;
	Forward_List<Person>tjejlista;
	Forward_List<Person>personlista;

	
	Forward_List<Forward_List<Person>> parLista;

	
	killista.clear();
	tjejlista.clear();
	personlista.clear();
	parLista.clear();

	
	dejt::ReadFromFile("dudes.txt", killista);
	dejt::ReadFromFile("chicks.txt", tjejlista);

	
	dejt::addToFolkLista(tjejlista, killista, personlista);

	
	dejt::SkapaPar(tjejlista, killista, parLista, 4);

	
	cout << endl << "killar: " << endl;
	for (int i = 0; i < killista.length(); i++){
		killista[i].print();
	}

	
	cout << endl << "tjejer: " << endl;
	for (int i = 0; i < tjejlista.length(); i++){
		tjejlista[i].print();
	}

	
	cout << endl << "personer: " << endl;
	for (int i = 0; i < personlista.length(); i++){
		personlista[i].print();
	}

	
	cout << endl << "par: " << endl;
	dejt::PrintaPar(parLista);


	system("PAUSE");
	return 0;
}