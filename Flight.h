#pragma once

#include <string>
#include "Name.h"
#include "Equipment.h"

using namespace std;

class Flight
{
private:
    Name m_name; //company
    Equipment m_Equipment;
    string m_etd; //estimated time of departure
    int m_identifier;

public:
    static int m_totalCnt; // static variable

    Flight(Name &name, Equipment &Equipment, string etd);
    Flight(Name& name, Equipment& Equipment, string etd, bool setID);
    Flight(const Flight &copy);
    string ToString(void);
    string GetEtd(void);
    
    friend ostream& operator<<(ostream& out, Flight& Flight); // 
    
    int GetID(void);
    string GetFlightLastName();
    string FormatForSave(void);
};

