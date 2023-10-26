#include "FlightManager.h"
#include "Flight.h"
#include <iostream>
#include <vector>
#include <string>

using namespace std;

vector<string> FlightManager::Split(string str, string token)
{
	return vector<string>();
}

Flight FlightManager::GetFlight(int id)
{
	for (int i = 0; i < m_Flights.size(); i++) {
		if (m_Flights[i].getID() == id) {
			return m_Flights[i];
		}
	}
	return Flight();
}

vector<Flight> FlightManager::GetFlights(string lastName)
{
	return vector<Flight>();
}

void FlightManager::AddFlight(Flight Flight)
{
}

void FlightManager::SaveFlights(ostream& out)
{
}

void FlightManager::LoadFlights(istream& in)
{
}

int FlightManager::NumberOfFlights(void)
{
	return 0;
}
