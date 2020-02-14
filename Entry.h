#pragma once

#include <string>
#include <boost/serialization/list.hpp>

class Entry
{

private:
	std::string firstName;
	std::string lastName;
	std::string phoneNumber;
	std::string address;
	friend class boost::serialization::access;
	template<typename Archive>
	void serialize(Archive& ar, const unsigned version) {
		ar& firstName & lastName & phoneNumber & address;
	}

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

