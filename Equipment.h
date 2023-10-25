#pragma once

#include <string>

using namespace std;

class Equipment
{
private:
    string m_aircraft;
    string m_state;
    string m_zip;

public:
    Equipment(string aircraft, string state, string zip);
    Equipment(const Equipment &copy);
    string ToString(void);
    string GetAircraft(void);
    string GetState(void);
    string GetZip(void);
    friend ostream& operator<<(ostream& out, Equipment& Equipment);
    string FormatForSave(void);
};

