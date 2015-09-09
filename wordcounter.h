//#ifndef _wordcounter_H
//#define _wordcounter_H
using namespace std;
#include <iostream>
#include <map>
#include <cstdlib>
#include <string>
#include <fstream>
#include <iterator>

class Wordcounter{

public:

	Wordcounter();

	void readIn(string inFile);

	bool inList(string testString);

	void printMap();
private:
	std::map<string,int> wCount;
};
//#endif