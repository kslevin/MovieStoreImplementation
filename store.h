/*
 * Store Class Header File  @file store.h
 *
 * [Class Description]
 *
 *
 * For further specifications see README.txt
 *
 * @Author: 	Krystle S Levin -kslevin@uw.edu
 * @Purpose:	Course Assignment 4 for CSS 343
 *				i.e. Data Structures, Algorithms and Discrete Mathematics
 *
 * @Created on:			May 6, 2019
 * 				
 * @last Modification:	May 14, 2019
 *
 */
#pragma once
#include <iostream>

using namespace std;
class Store
{

public:
	// builds store by creating movie database and customer database objects
	void buildStore(ifstream& customerList, ifstream& inventoryList);

	void commandsReader(ifstream& commandsList);             // process command lines

private:

	CustomerDatabase allCustomers;                     // Customer Database object
	InventoryDatabase allInventory;                   // Inventory Database object
	Transactions allTransactions;                     // Transactions object
};


