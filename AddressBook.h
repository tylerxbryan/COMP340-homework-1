#pragma once

#include <list>
#include <iostream>
#include "Entry.h"

class AddressBook
{
private:
	std::list<Entry*> entries;
	int choice;
	bool exitvar;
	std::string userInput;
	std::string dummy;
public:
	AddressBook();
	~AddressBook();

	void AddEntry(std::string firstName, std::string lastName, std::string phoneNumber, std::string address);
	void RemoveEntry(Entry* entry);
	void EditEntry(Entry* entry);
	Entry* SearchAddressBook(std::string name);
	void PrintAddressBook();
};

