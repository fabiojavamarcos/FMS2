
#include <string>
//#include <format>
#include <iostream>
#include "Equipment.h"

Equipment::Equipment(string aircraft, string state, string zip)
{
    m_aircraft = aircraft;
    m_state = state;
    m_zip = zip;
}

Equipment::Equipment(const Equipment& copy)
{
    this->m_aircraft = copy.m_aircraft;
    this->m_state = copy.m_state;
    this->m_zip = copy.m_zip;
}

string Equipment::ToString(void)
{
   // return format("{}\n{}   {}", m_aircraft, m_state, m_zip);
   return m_aircraft + " - " + m_state + " - " + m_zip;
}

string Equipment::GetAircraft(void)
{
    return m_aircraft;
}

string Equipment::GetState(void)
{
    return m_state;
}

string Equipment::GetZip(void)
{
    return m_zip;
}

ostream& operator<<(ostream& out, Equipment& Equipment)
{
    out << Equipment.GetAircraft() << endl << Equipment.GetState() << endl << Equipment.GetZip();
    return out;
}

string Equipment::FormatForSave(void)
{
    return m_aircraft + " - " + m_state + " - " + m_zip;
    //return format("{},{},{}", m_aircraft, m_state, m_zip);
}
