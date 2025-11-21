#ifndef ENERGYCARD_H
#define ENERGYCARD_H
#include "Card.h"

class EnergyCard : public Card
{
    private:
        std::string energyType;
    public:
        EnergyCard( std::string energytype) : Card("Energy"), energyType(energytype) {}
       virtual void displayInfo();
};