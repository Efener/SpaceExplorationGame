#pragma once

#include <string>
#include <iostream>
#include "planet.h"


using namespace std;



class Spaceship
{
private:
    string name;
    double fuel;
    Planet* currentLocation;

public:
    Spaceship(string Name, double Fuel)
    {
        name = Name;
        fuel = Fuel;
        currentLocation = nullptr;
    }

    string getName()
    {
        return name;
    }
    void setName(string newname)
    {
        name = newname;
    }
    double getFuel()
    {
        return fuel;
    }
    void setFuel(double newFuel)
    {
        fuel = newFuel;
    }
    Planet* getLocation()
    {
        return currentLocation;
    }
    void setLocation(Planet* newLocation)
    {
        currentLocation = newLocation;
    }

    void  travel(Planet& destination, double fuelPerDistance)
    {
        double distance ;
        if (currentLocation == nullptr)
        { 
            distance = destination.getDistance();
            
            
        }
        else
        {
            distance = currentLocation->distanceTo(destination);
        }


        double fuelNeeded = distance * fuelPerDistance;


        if (fuel >= fuelNeeded)
        {
            currentLocation = &destination;
            fuel -= fuelNeeded;
            cout << "Traveled to " << currentLocation->getName() << endl;
        }
        else
            cout << "Not enough fuel to travel" << endl;
    }



    inline void displayInfo()
    {
        cout << "Name:" << name << endl;
        cout << "Fuel:" << fuel << endl;
        if (currentLocation != nullptr)
        {
            cout << "Location:" << currentLocation->getName() << endl;
        }
        else
        {
            cout << "Location: unknown\n" << endl;
        }
    }

};
