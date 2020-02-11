#pragma once

#include <string>

class Entry
{

private:
	std::string firstName;
	std::string lastName;
	std::string phoneNumber;
	std::string address;

public:
	Entry();
	Entry(std::string firstName, std::string lastName, std::string phoneNumber, std::string address);
	std::string GetFirstName();
	std::string GetLastName();
	std::string GetPhoneNumber();
	std::string GetAddress();
	void SetFirstName(std::string newFirstName);
	void SetLastName(std::string newLastName);
	void SetPhoneNumber(std::string newPhoneNumber);
	void SetAddress(std::string newAddress);
	std::string ToString();
	~Entry();
};

