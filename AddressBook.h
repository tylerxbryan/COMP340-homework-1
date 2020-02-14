#pragma once

#include <list>
#include <iostream>
#include "Entry.h"
#include <boost/serialization/list.hpp>
#include <boost/archive/binary_iarchive.hpp>
#include <boost/archive/binary_oarchive.hpp>
#include <fstream>

class AddressBook
{
private:
	friend class boost::serialization::access;
	std::list<Entry*> entries;
	int choice;
	bool exitvar;
	std::string userInput;
	std::string dummy;
	template<typename Archive>
	void serialize(Archive& ar, const unsigned version) {
		ar& entries;
	}
public:
	AddressBook();
	~AddressBook();

	void AddEntry(std::string firstName, std::string lastName, std::string phoneNumber, std::string address);
	void RemoveEntry(Entry* entry);
	void EditEntry(Entry* entry);
	void SortBook();
	void SaveBook(std::string filename);
	void LoadBook(std::string filename);
	Entry* SearchAddressBook(std::string name);
	void PrintAddressBook();
};

