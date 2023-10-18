#include<fstream>
#include<iostream>
#include<string>
using namespace std;

#define FILE_PATH "/home/debian"

int main(int argc, char* argv[]){
	//checks if user issued correct amount of command lines
	if(argc != 3){
		cout << endl;
		cout << "Usage is myCopier and name of files." << endl;
		cout << "e.g. myCopier textfile1.txt textfile2.txt" << endl << endl;
		return 2;
	}
	//creates string objects and passes the command line arguments
	string cmdr(argv[1]);
	string cmdw(argv[2]);

	//prints out contents of variable file path and messages of tasks
	cout << "The current file path is " << FILE_PATH << endl;
	cout << "Reading from file " << cmdr << endl;
	cout << "Writing to file " << cmdw << endl;
	
	// declares file stream objects and string object
	fstream fsr, fsw;
	string line;
	
	//create file names that concatenotes to the string file names
	string readName = "/"+cmdr;
	string writeName = "/"+cmdw;
	
	//declares strings and assign concatenation of file paths and file names
	string readPath = FILE_PATH + rName;
	string writePath = FILE_PATH + wName;
	
	//opens the files with the path names
	fsr.open((readPath).c_str(), fstream::in);
	fsw.open((writePath).c_str(), fstream::out);
	
	//loop to read file and to write file line by line
	while(getline(fsr,line)){
		fsw << line << endl;
	}

	//closes and exits the application
	fsw.close();
	fsr.close();
	return 0;
}
