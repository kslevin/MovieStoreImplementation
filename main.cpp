
#include<iostream>
#include <fstream> 
#include "store.h" 


using namespace std;

int main()
{
	Store firstStore();
	ifstream infile1(“data4commands.txt”);
	ifstream infile2(“data4customers.txt”);
	ifstream infile3(“data4movies.txt”);
	firstStore.buildstore(infile2, infile3);
	firstStore.processCommands(infile1);
}
