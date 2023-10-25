#include <string>
//#include <format>
#include <iostream>
#include "Flight.h"

int Flight::m_totalCnt = 0;

Flight::Flight(Name& name, Equipment& Equipment, string etd, bool setID) :
                    m_name(name), m_Equipment(Equipment)
{
    m_etd = etd;
    if (setID)
    {
        m_totalCnt ++;
        m_identifier = m_totalCnt;
    }
    else
    {
        m_identifier = 0;
    }
}

Flight::Flight(Name &name, Equipment &Equipment, string etd) :
                                m_name(name), m_Equipment(Equipment)
{
    m_etd = etd;
    m_identifier = 0;
}

Flight::Flight(const Flight& copy) :
                m_name(copy.m_name), m_Equipment(copy.m_Equipment)
{
    this->m_etd = copy.m_etd;
    this->m_identifier = copy.m_identifier;
}

string Flight::ToString(void)
{
    // return format("{}\n{}\n{}", m_name.ToString(), m_Equipment.ToString(), m_phone);
    return m_name.ToString() + " - " + m_Equipment.ToString() + " - " + m_etd;
}

string Flight::GetEtd(void)
{
    return m_etd;
}

ostream& operator<<(ostream& out, Flight& Flight)
{
    out << Flight.m_name << endl << Flight.m_Equipment << endl << Flight.GetEtd();
    return out;
}

int Flight::GetID(void)
{
    return m_identifier;
}

string Flight::GetFlightLastName()
{
    return m_name.GetLastName();
}

string Flight::FormatForSave(void)
{
    //return format("{},{},{}", m_name.FormatForSave(), m_Equipment.FormatForSave(), m_phone);
    return m_name.FormatForSave() + " - " + m_Equipment.FormatForSave() + " - " + m_etd;
}
