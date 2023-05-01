// Homework.cpp : Bu dosya 'main' işlevi içeriyor. Program yürütme orada başlayıp biter.
//
#include <string>
#include <iostream>
#include "planet.h"
#include "spaceship.h"

using namespace std;












int main()
{
    Planet planets[9];

    planets[0].setName("Mercury");
    planets[0].setDistance(57.91);
    planets[0].setDiameter(4879.4);

    planets[1].setName("Venus");
    planets[1].setDistance(108.2);
    planets[1].setDiameter(12104);

    planets[2].setName("Earth");
    planets[2].setDistance(149.6);
    planets[2].setDiameter(12756.2);

    planets[3].setName("Mars");
    planets[3].setDistance(227.9);
    planets[3].setDiameter(6792.4);

    planets[4].setName("Jupiter");
    planets[4].setDistance(778.5);
    planets[4].setDiameter(142984);

    planets[5].setName("Saturn");
    planets[5].setDistance(1433.5);
    planets[5].setDiameter(120536);

    planets[6].setName("Uranus");
    planets[6].setDistance(2872.5);
    planets[6].setDiameter(51118);

    planets[7].setName("Neptune");
    planets[7].setDistance(4495.1);
    planets[7].setDiameter(49528);

    planets[8].setName("Pluto");
    planets[8].setDistance(5906.4);
    planets[8].setDiameter(2370);
    std::cout << "Hello World!\n";



    string name;
    cout << "Enter the spaceship's name:";
    cin >> name;
    double fuel;
    cout << "Enter initial fuel:";
    cin >> fuel;


    Spaceship ship(name, fuel);

    ship.displayInfo();



    int choices;
    bool exitGame = false;


    while (!exitGame)
    {
        cout << "\n Select a planet to travel to (enter 0 to exit): \n";
        for (int i = 0; i < 9; i++)
        {
            cout << i + 1 << ". " << planets[i].getName() << endl;
        }
        cin >> choices;
        if (choices == 0)
        {
            exitGame = true;
        }
        else if (choices >= 1 && choices <= 9)
        {  
            Planet destination = planets[choices - 1];
            double fuelPerDistance = 0.1;   // we setted a constant "fuel per distance" value
            ship.travel(destination, fuelPerDistance);
            ship.displayInfo();
        }
        else
        {
            cout << "Invalid choice, please choose 0-9." << endl;
        }
    }
    return 0;
}
 