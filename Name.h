#pragma once

#include <string>

using namespace std;

class Name
{
private:
    string m_lastName;
    string m_firstName;
    string m_middleName;

public:
    Name(string lastName, string firstName, string middleName);
    Name(const Name &copy);
    string ToString(void);
    string GetFirstName(void);
    string GetLastName(void);
    string GetMiddleName(void);
    friend ostream& operator<<(ostream& out, Name& name);
    string FormatForSave(void);
};
