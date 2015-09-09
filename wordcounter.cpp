#include "wordcounter.h"
#include <iostream>
#include <map>
#include <cstdlib>
#include <string>
#include <fstream>
#include <iterator>

using namespace std;

//public functions

//constructer 
Wordcounter::Wordcounter(){
	std::map<string,int> wCount;
}
//takes in file and reads in the words, any repeat word are incramented by 1
//
void Wordcounter::readIn(string inFile){
	fstream file;
	file.open(inFile.c_str());
	string word;
	while (! file.eof())
	{
		file>> word;
		cout<< word <<"\n";
		if ( inList(word)){
			
			wCount[word]++;
			//cout<<"word incramented\n";

		}

		else {
			wCount[word] = 1;
			//cout<< "word added\n";
		}

	}
}
//searches map for repeat words, takes in a string, if found it returns true if not returns false
//
bool Wordcounter::inList( string testString){
	if(wCount.find(testString)== wCount.end()){
		//cout<< "not found\n";
		return false;
		
	}
	else{
		//cout<< "found\n";
		return true;
		
	}
}
//takes the map, iterats over it and writs the key and the vale to a file named testput
void Wordcounter::printMap(){
	fstream myFile;
	myFile.open("testput.txt");
	int mapSize = wCount.size();
	int iteration = 0;
	std::map<string, int>::iterator it = wCount.begin();

	while(iteration < mapSize){

		myFile << it->first << " => " << it->second << endl;
		advance(it, 1);
		iteration ++;
		//cout<<"writeing to file\n";
	}
	myFile.close();
	//cout<<"all done\n";
}
