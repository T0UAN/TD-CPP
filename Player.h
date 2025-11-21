#ifndef PLAYER_H
#define PLAYER_H

public class Player
{
    private:
        std::string playerName;
        vector<Card*> benchCards;
        vector<PokemonCard*> actionCards;
    public:
        Player( std::string name,vector<Card*> bench, vector<PokemonCard*> action) : playerName(name), benchCards(bench), actionCards(action) {}
        std::string getName() { return playerName; }
        vector<Card*> getBenchCards() { return benchCards; }
        vector<PokemonCard*> getActionCards() { return actionCards; }
};