#include <public.h>
#include <iostream>
#include <fstream>
#include <vector>
#include <string>
#include <list>
//user head file
#include <RSA.h>
//user macro 
#define KEYFILE  "data/key.txt"
#define INPUTFILE  "data/input.txt"
#define OUTPUTFILE "data/output.txt"
using namespace std;

int main(int argc,char *argv[])
{
	ifstream ifsKeydata(KEYFILE);			//key file
	ifstream ifsInputdata(INPUTFILE);		//in data file
	ofstream ofsOutputdata(OUTPUTFILE);		//out data file
	printf("main funs start\r\n");
	// judge file err
	if(!ifsKeydata){
		cout<<"key file open err"<<endl;
	}
	if(!ifsInputdata){
		cout<<"input file open err"<<endl;
	}
	if(!ofsOutputdata){
		cout<<"output file open err"<<endl;
	}


	// close files
	ifsKeydata.close();
	ifsInputdata.close();
	ofsOutputdata.close();
	return 0;
}



