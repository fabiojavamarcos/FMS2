
#include <string>
//#include <format>
#include <iostream>
#include "Name.h"

Name::Name(string lastName, string firstName, string middleName)
{
    m_lastName = lastName;
    m_firstName = firstName;
    m_middleName = middleName;
}

Name::Name(const Name& copy)
{
    this->m_lastName = copy.m_lastName;
    this->m_firstName = copy.m_firstName;
    this->m_middleName = copy.m_middleName;
}

string Name::ToString(void)
{
    //return format("{}, {} {}.", m_lastName, m_firstName, m_middleName.substr(0, 1));
    return m_lastName + " - "+  m_firstName + " - "+ m_middleName.substr(0, 1);
}

string Name::GetFirstName(void)
{
    return m_firstName;
}

string Name::GetLastName(void)
{
    return m_lastName;
}

string Name::GetMiddleName(void)
{
    return m_middleName;
}

ostream& operator<<(ostream& out, Name& name)
{
    out << name.GetFirstName() << endl << name.GetMiddleName() << endl << name.GetLastName();
    return out;
}

string Name::FormatForSave(void)
{
    //return format("{},{},{}", m_lastName, m_firstName, m_middleName);
    return m_lastName + " - "+  m_firstName + " - "+ m_middleName;
}
