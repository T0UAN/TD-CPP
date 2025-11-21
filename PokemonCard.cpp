#include "PokemonCard.h"

void PokemonCard::displayInfo()
{
    std::cout << "Pokemon Type: " << pokemonType << std::endl;
    std::cout << "Family Name: " << familyName << std::endl;
    std::cout << "Evolution Level: " << evolutionLevel << std::endl;
    std::cout << "Max HP: " << maxHP << std::endl;
    std::cout << "Current HP: " << hp << std::endl;
    std::cout << "Attacks: " << std::endl;
    for (const auto& attack : attacks) {
        std::cout << "  Attack Name: " << std::get<2>(attack) 
                  << ", Damage: " << std::get<0>(attack) 
                  << ", Energy Cost: " << std::get<1>(attack) 
                  << ", Special Effect Value: " << std::get<3>(attack) 
                  << std::endl;
    }
}