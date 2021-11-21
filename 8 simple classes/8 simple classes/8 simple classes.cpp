// 8 simple classes.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "MillitaryPlane.h"
#include <iostream>

int main()
{
    MilitaryPlane ordinaryPlane;
    MilitaryPlane lightBomber((char*)"LIGHT BOMBER", 6, (char*)"SMALL BOMB", 10, 1, (char*)"John", 25);
    MilitaryPlane heavyBomber((char*)"HEAVY BOMBER", 12, (char*)"LARGE BOMB", 20, 6, (char*)"Peter", 40);
    MilitaryPlane fighter((char*)"FIGHTER", 15, (char*)"ASSAULT CANNON", 5, 25, (char*)"Ronald", 32);
    MilitaryPlane transportPlane((char*)"TRANSPORTER", 20, (char*)"NONE", 0, 0, (char*)"Henry", 50);
    ordinaryPlane.info();
    lightBomber.info();
    lightBomber.AttackTarget(&ordinaryPlane);
    ordinaryPlane.info();
    lightBomber.AttackTarget(&heavyBomber);
    lightBomber.RestockAmmo(1);
    lightBomber.info();
    return 0;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
