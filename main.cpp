#include <iostream>
#include <map>
#include "wordcounter.h"


int main (){
	  Wordcounter name;
	cout << "pleas put in file name\n";
 	string file;
 	getline(cin, file);
 	name.readIn(file);
 	name.printMap();
 	cout<<"done\n";
 	cout<<"file writen to file neamed testput.txt in the sam repository,\n"
 	cout<<" actually if it dosent work the first time try makeing the testput file and running again\n"
 	return 0;
}