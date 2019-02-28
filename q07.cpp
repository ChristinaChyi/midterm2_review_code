#include <iostream>

#include <fstream>

using namespace std;

void numLines(string filename, char c){
	ifstream ifs;
	ifs.open(filename);
	if(ifs.fail()) return;
	string nextLine;
	int count = 0;
	while(true){
		getline(ifs, nextLine);
		if(nextLine == "") break;
		cout << nextLine << endl;
		if(nextLine.at(0) == c) count++;
	}
	cout << count << endl;
	ifs.close();
}

int main(){

	numLines("sample1.txt", 'A');

	return 0;
}
