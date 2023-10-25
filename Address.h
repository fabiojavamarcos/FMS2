#pragma once

#include <string>

using namespace std;

class Address
{
private:
    string m_streetAddress;
    string m_state;
    string m_zip;

public:
    Address(string streetAddress, string state, string zip);
    Address(const Address &copy);
    string ToString(void);
    string GetStreetAddress(void);
    string GetState(void);
    string GetZip(void);
    friend ostream& operator<<(ostream& out, Address& address);
    string FormatForSave(void);
};

