#ifndef POKEMONCARD_H
#define POKEMONCARD_H
#include "Card.h"

class PokemonCard : public Card
{
    private:
     std::string pokemonType;
     std::string familyName;
     int evolutionLevel;
     int maxHP;
     int hp;
     vector<tuple<int,int,std::string,int>> attacks;
    
    public:
    PokemonCard( std::string cardName, std::string& pokemontype, std::string& familyname,int evolutionlevel,int maxhp,int hp, vector<tuple<int,int,std::string,int>> attacks) : Card(cardName), pokemonType(pokemontype), familyName(familyname), evolutionLevel(evolutionlevel), maxHP(maxhp), hp(hp), attacks(attacks) {}
    std::string getPokemonType() { return pokemonType; }
    std::string getFamilyName() { return familyName; }
    int getEvolutionLevel() { return evolutionLevel; }
    int getMaxHP() { return maxHP; }
    int getHP() { return hp; }
    std::vector<std::tuple<int,int,std::string,int>> getAttacks() { return attacks; }
    virtual void displayInfo() override;

};