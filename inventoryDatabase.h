#pragma once
#include <iostream>

using namespace std;

class InventoryDatabase
{
public:
	void processInventory(ifstream& inventoryFile);            // process inventory
	Movie* getMovie(string movieInfo, char code);          // retrieve movie from BST
	void displayAll();	//Displays all genres of movies in their respective order
private:

	vector<string> errors;                      // error collector
	BST drama;                                  // BST for drama movies
	BST classics;                               // BST for classics movies
	BST comedy;                                 // BST for comedy movies
};


