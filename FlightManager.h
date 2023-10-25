#pragma once

#include <vector>
#include "Flight.h"

using namespace std;

class FlightManager
{
private:
    vector<Flight> m_Flights;
    vector<string> Split(string str, string token);

public:
    Flight GetFlight(int id);
    vector<Flight> GetFlights(string lastName);
    void AddFlight(Flight Flight);
    void SaveFlights(ostream &out);
    void LoadFlights(istream &in);
    int NumberOfFlights(void);
};
