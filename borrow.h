#pragma once
#include "transaction.h"
class Borrow : public Transaction
{
public:

	Borrow();                 // constructor
	~Borrow();                // destructor
	static const char MyType = 'B';           // static identifier for the class
	virtual void processCommands(CustomerManager&, InventoryDatabase&); // process Transaction
protected:

	void borrowMovie(Customer*, Movie*);   // borrowed movie for customer
};


