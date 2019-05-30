#pragma once
#include "transaction.h"
class Return : public Transaction 
{
public:

	Return();                 // constructor
	~Return();                // destructor
	static const char MyType = 'R';           // static identifier for the class
	virtual void processCommands(CustomerManager&, InventoryDatabase&); // process Transaction
protected:

	void returnMovie(Customer*, Movie*);   // borrowed movie for customer
};


