#include "player.h"

void Player::addCardToBench(Card* card) {
    bench.push_back(card);
}
void Player::activatePokemonCard(int index) {
    if (index < 0 || index >= benchCards.size()) {
        std::cout << "Invalid index to activate Pokemon Card." << std::endl;
        return;
    }
    PokemonCard* pCard = dynamic_cast<PokemonCard*>(benchCards[index]);
    if (pCard) {
        actionCards.push_back(pCard);
        benchCards.erase(benchCards.begin() + index);
        std::cout << "Activated Pokemon Card: " << pCard->getName() << std::endl;
    }

    void Player::displayBench() {
    std::cout << "Bench Cards:" << std::endl;
    for (size_t i = 0; i < benchCards.size(); ++i) {
        std::cout << i << ": ";
        benchCards[i]->displayInfo();
    }

void Player::displayAction() {
    std::cout << "Action Cards:" << std::endl;
    for (size_t i = 0; i < actionCards.size(); ++i) {
        std::cout << i << ": ";
        actionCards[i]->displayInfo();
    }
}
void Player::attachEnergyCard(int energyIndex, int pokemonIndex) {
    if (energyIndex < 0 || energyIndex >= benchCards.size()) {
        std::cout << "Invalid energy card index." << std::endl;
        return;
    }
    if (pokemonIndex < 0 || pokemonIndex >= actionCards.size()) {
        std::cout << "Invalid pokemon card index." << std::endl;
        return;
    }
    EnergyCard* eCard = dynamic_cast<EnergyCard*>(benchCards[energyIndex]);
    if (eCard) {
        // Assuming PokemonCard has a method to attach energy
        actionCards[pokemonIndex]->attachEnergy(eCard);
        benchCards.erase(benchCards.begin() + energyIndex);
        std::cout << "Attached Energy Card: " << eCard->getName() << " to Pokemon: " << actionCards[pokemonIndex]->getName() << std::endl;
    } else {
        std::cout << "Selected card is not an Energy Card." << std::endl;
    }
}
void Player::atatck(int attackerIndex, int attackIndex, Player& opponent, int opponentPokemonIndex) {
    if (attackerIndex < 0 || attackerIndex >= actionCards.size()) {
        std::cout << "Invalid attacker index." << std::endl;
        return;
    }
    if (opponentPokemonIndex < 0 || opponentPokemonIndex >= opponent.actionCards.size()) {
        std::cout << "Invalid opponent pokemon index." << std::endl;
        return;
    }
    PokemonCard* attacker = actionCards[attackerIndex];
    PokemonCard* defender = opponent.actionCards[opponentPokemonIndex];

  
    attacker->performAttack(attackIndex, *defender);
}
void Player::useTrainer(int trainerIndex) {
    if (trainerIndex < 0 || trainerIndex >= benchCards.size()) {
        std::cout << "Invalid trainer card index." << std::endl;
        return;
    }
    TrainerCard* tCard = dynamic_cast<TrainerCard*>(benchCards[trainerIndex]);
    if (tCard) {
        tCard->heal_all_your_action_pokemon(actionCards);
        benchCards.erase(benchCards.begin() + trainerIndex);
        std::cout << "Used Trainer Card: " << tCard->getName() << std::endl;
    } else {
        std::cout << "Selected card is not a Trainer Card." << std::endl;
    }
}
    }
