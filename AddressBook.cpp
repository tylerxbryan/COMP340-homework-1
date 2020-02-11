#include "AddressBook.h"
#include <iostream>
#include <string>


AddressBook::AddressBook()
{
	this->choice = 0;
	this->exitvar = true;
	this->userInput = "";
	this->dummy = "";
}


AddressBook::~AddressBook()
{
	for (std::list<Entry*>::iterator currentEntry = this->entries.begin(); currentEntry != this->entries.end(); ++currentEntry) {
		delete((*currentEntry));
	}
}

void AddressBook::AddEntry(std::string firstName, std::string lastName, std::string phoneNumber, std::string address)
{
	this->entries.push_back(new Entry(firstName, lastName, phoneNumber, address));
}

void AddressBook::RemoveEntry(Entry* entry)
{
	entries.remove(entry);
}

void AddressBook::EditEntry(Entry* entry)
{
	while (exitvar != false) {
		std::cout << "*******************************\n";
		std::cout << " [1] Edit first name\n";
		std::cout << " [2] Edit last name\n";
		std::cout << " [3] Edit phone number\n";
		std::cout << " [4] Edit address\n";
		std::cout << " [5] exit\n";
		std::cout << " Enter your choice and press return: ";

		std::cin >> choice;

		switch (choice)
		{
		case 1:
			std::cout << "Enter new first name: ";
			std::cin >> userInput;
			entry->SetFirstName(userInput);
			break;
		case 2:
			std::cout << "Enter new last name: ";
			std::cin >> userInput;
			entry->SetLastName(userInput);
			break;
		case 3:
			std::cout << "Enter new phone number: ";
			std::cin >> userInput;
			entry->SetPhoneNumber(userInput);
			break;
		case 4:
			std::getline(std::cin, dummy);
			std::cout << "Enter new address: ";
			std::getline(std::cin, userInput);
			//std::cin >> userInput;
			entry->SetAddress(userInput);
			break;
		case 5:
			exitvar = false;
			break;
		default:
			std::cout << "Not a Valid Choice. \n";
			std::cout << "Choose again.\n";
			std::cin >> choice;
			break;
		}
	}
}

void AddressBook::SortBook()
{
	entries.sort([](Entry* lhs, Entry* rhs) {return lhs->GetFirstName() < rhs->GetFirstName(); });
}

void AddressBook::SaveBook(std::string filename)
{
}

void AddressBook::LoadBook(std::string filename)
{
}

Entry* AddressBook::SearchAddressBook(std::string name)
{
	for (std::list<Entry*>::iterator currentEntry = this->entries.begin(); currentEntry != this->entries.end(); ++currentEntry) {
		if ((*currentEntry)->GetFirstName().compare(name) == 0) {
			//std::cout << (*currentEntry)->ToString() << std::endl;
			return (*currentEntry);
		}
	}
}

void AddressBook::PrintAddressBook()
{
	for (std::list<Entry*>::iterator currentEntry = this->entries.begin(); currentEntry != this->entries.end(); ++currentEntry) {
		std::cout << (*currentEntry)->ToString() << std::endl;
	}
}
