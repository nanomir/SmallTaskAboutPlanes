#include "MillitaryPlane.h"
#include <iostream>
using namespace std;
MilitaryPlane::MilitaryPlane() //Constructor
{
    strcpy_s(PlaneType, "ORDINARY");
    Durability = 10;
    strcpy_s(Weapon.Type, "NONE");
    Weapon.Ammunition = 0;
    Weapon.Damage = 0;
    strcpy_s(Pilot.Name, "Steeve");
    Pilot.Age = 30;
}

MilitaryPlane::MilitaryPlane(char* planeType, int durability, char* weaponType, int weaponDamage, int weaponAmmunition, char* pilotName, int PilotAge) //Constructor
{
    strcpy_s(this->PlaneType, planeType);
    this->Durability = durability;

    strcpy_s(this->Weapon.Type, weaponType);
    this->Weapon.Damage = weaponDamage;
    this->Weapon.Ammunition = weaponAmmunition;

    strcpy_s(Pilot.Name, pilotName);
    this->Pilot.Age = PilotAge;
}

void MilitaryPlane::info() //Information about plane
{
    cout <<"TYPE:" << PlaneType << ",  DURABILITY:" << Durability <<"\n";
    cout << "WEAPON TYPE:" << Weapon.Type << ", AMMUNITION:" <<Weapon.Ammunition<< ", DAMAGE:" <<Weapon.Damage <<"\n";
    cout <<"NAME: "<< Pilot.Name << ", AGE:" << Pilot.Age << "\n\n";
}

void MilitaryPlane::EjectPilot() //Ejection of pilot
{
    strcpy_s(Pilot.Name, "NONE");
    Pilot.Age = 0;
    cout << "PILOT OF \""<<PlaneType<<"\" EJECTED" << "\n";
}

void MilitaryPlane::AttackTarget(MilitaryPlane* target) //Attacking of target
{
    if (Weapon.Type == "NONE")
    {
        cout << "PLANE HAVE NO WEAPON" << "\n";
    }
    else
    {
        if (target->Durability <= 0)
        {
            cout << "TARGET ALREADY DESTROYED" << "\n";
        }
        else
        {
            if (Weapon.Ammunition > 0)
            {
                Weapon.Ammunition--;
                target->Durability = target->Durability - Weapon.Damage;
                if (target->Durability > 0)
                {
                    cout << "ATTACK PERFORMED, TARGET ALIVE" << "\n";
                }
                else
                {
                    cout << "ATTACK PERFORMED, TARGET \"" << target->PlaneType << "\" DESTROYED" << "\n";
                    target->EjectPilot();                  
                }
            }
            else
            {
                cout << "INSUFFITIENT AMMUNITION" << "\n";
            }
        }
    }
}

void MilitaryPlane::RestockAmmo(int amount) //Restock ammo for weapon
{
    Weapon.Ammunition += amount;
    cout <<this->PlaneType <<" RESTOCKED "<<amount <<" AMMUNITION FOR " <<Weapon.Type<< "\n";
}