
#include <iostream>
#include <algorithm>
#include "FlightManager.h"

Flight FlightManager::GetFlight(int id)
{
    auto match = find_if(m_Flights.begin(), m_Flights.end(), [id](Flight& obj) {return obj.GetID() == id;});
    int index = distance(m_Flights.begin(), match);

    if (index >= m_Flights.size())
    {
        Name name("", "", "");
        Equipment equipment("", "", "");
        Flight Flight(name, equipment, "");
        return Flight;
    }
    else
    {
        return m_Flights[index];
    }
}

vector<Flight> FlightManager::GetFlights(string lastName)
{
    auto match = find_if(m_Flights.begin(), m_Flights.end(), [lastName](Flight& obj) {return obj.GetFlightLastName() == lastName; });
    vector<Flight> FlightList;
    while (match != m_Flights.end())
    {
        FlightList.push_back(*match);
        match = find_if(++ match, m_Flights.end(), [lastName](Flight& obj) {return obj.GetFlightLastName() == lastName; });
    }

    return FlightList;
}

void FlightManager::AddFlight(Flight flight)
{
    Flight newFlight(flight);
    m_Flights.push_back(newFlight);
}

int FlightManager::NumberOfFlights(void)
{
    return m_Flights.size();
}

void FlightManager::SaveFlights(ostream& out)
{
    for (auto cnt = 0; cnt < m_Flights.size(); cnt ++)
    {
        out << m_Flights[cnt].FormatForSave() << endl;
    }
}

void FlightManager::LoadFlights(istream& in)
{
    string line;
    while (getline(in, line))
    {
        auto parts = Split(line, ",");
        Name name(parts[0], parts[1], parts[2]);
        Equipment equipment(parts[3], parts[4], parts[5]);
        Flight Flight(name, equipment, parts[6], true);
        AddFlight(Flight);
    }
}

vector<string> FlightManager::Split(string str, string token)
{
    vector<string>result;
    while (str.size())
    {
        int index = str.find(token);
        if (index != string::npos)
        {
            result.push_back(str.substr(0, index));
            str = str.substr(index + token.size());
            if (str.size() == 0)
            {
                result.push_back(str);
            }
        }
        else
        {
            result.push_back(str);
            str = "";
        }
    }

    return result;
}
