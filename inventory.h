#pragma once
class Inventory : public Transaction
{
public:

	Inventory();                 // constructor
	~Inventory();                // destructor
	static const char MyType = 'I';           // static identifier for the class
	virtual void processCommands(CustomerManager&, InventoryDatabase&); // process Transaction
};


