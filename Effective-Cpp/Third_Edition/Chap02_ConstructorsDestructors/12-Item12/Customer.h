#include <string>

void logCall(const std::string& funcName)
{
}

class Customer
{
public:
	Customer() : name("stevepro") {}

	Customer(const Customer& rhs);
	Customer& operator=(const Customer& rhs);

private:
	std::string name;
};


// Customer.cpp
// #include "Customer.h"

// Copy constructor	copy rhs data.
Customer::Customer(const Customer& rhs) :
	name(rhs.name)
{
	logCall("Customer copy constructor");
}

// Copy assignment operator	copy rhs data.
Customer& Customer::operator=(const Customer& rhs)
{
	logCall("Customer copy assignment operator");

	name = rhs.name;
	return *this;
}