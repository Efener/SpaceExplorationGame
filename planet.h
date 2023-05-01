#pragma once

#include <string>
#include <iostream>

using namespace std;

class Planet
{

private:
    string name;
    double distanceFromSun;
    double diameter;


public:
    Planet()
    {
        name = "unknown";
        distanceFromSun = 0;
        diameter = 0;
    }

    string getName()
    {
        return name;
    }
    void setName(string newname)
    {
        name = newname;
    }

    double getDistance()
    {
        return distanceFromSun;
    }
    void setDistance(double newDistance)
    {
        distanceFromSun = newDistance;
    }
    double getDiameter()
    {
        return diameter;
    }
    void setDiameter(double newDiameter)
    {
        diameter = newDiameter;
    }


    double distanceTo( Planet& destination)
    {
        return abs(distanceFromSun - destination.getDistance());
    }


};

