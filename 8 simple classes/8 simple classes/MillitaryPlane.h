#pragma once
using namespace std;
class MilitaryPlane
{
    struct Pilot //Pilot of the plane
    {
        char Name[20]; //Name of pilot
        int Age; //Age of pilot
    };

    struct Weapon       //Weapon of the plane
    {
        char Type[20]; //Name of weapon
        int Damage; //Damage weapon deals
        int Ammunition; //Amount of attack that weapon can perform without need for resupply
    };

public:
    char PlaneType[20];//Type of plane
    int Durability;//Durability of plane
    Weapon Weapon;//Weapon of the plane
    Pilot Pilot;//Pilot of the plane
    MilitaryPlane();//Creation of ordinary plane
    MilitaryPlane(char* planeType,  int durability, char* weaponType, int weaponDamage, int weaponAmmunition, char* pilotName, int PilotAge); //Creation of required plane
    void info(); //Information about plane
    void EjectPilot(); //Ejection of pilot
    void AttackTarget(MilitaryPlane* target); //Attack of different plane
    void RestockAmmo(int amount); //Ammo resupply
};