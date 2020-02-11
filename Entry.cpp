#include "Entry.h"

Entry::Entry()
{
	this->firstName = "";
	this->lastName = "";
	this->phoneNumber = "";
	this->address = "";
}

Entry::Entry(std::string firstName, std::string lastName, std::string phoneNumber, std::string address)
{
	this->firstName = firstName;
	this->lastName = lastName;
	this->phoneNumber = phoneNumber;
	this->address = address;
}

std::string Entry::GetFirstName()
{
	return this->firstName;
}

std::string Entry::GetLastName()
{
	return this->lastName;
}

std::string Entry::GetPhoneNumber()
{
	return this->phoneNumber;
}

std::string Entry::GetAddress()
{
	return this->address;
}

void Entry::SetFirstName(std::string newFirstName)
{
	this->firstName = newFirstName;
}

void Entry::SetLastName(std::string newLastName)
{
	this->lastName = newLastName;
}

void Entry::SetPhoneNumber(std::string newPhoneNumber)
{
	this->phoneNumber = newPhoneNumber;
}

void Entry::SetAddress(std::string newAddress)
{
	this->address = newAddress;
}

std::string Entry::ToString()
{
	return std::string(this->firstName + " " + this->lastName + " " + this->phoneNumber + " " + this->address);
}

Entry::~Entry()
{
}
