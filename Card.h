
#include <iostream>
using namespace std;
#ifndef CARD_H
#define CARD_H


class Card
{
    private:
        std::string cardName;
    public:
        Card( std::string& name) : cardName(name) {}
        std::string getName() { return cardName; }
        virtual void displayInfo() = 0;
};
#endif