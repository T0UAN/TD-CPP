#ifndef TRAINERCARD_H
#define TRAINERCARD_H   
#include "Card.h"
class TrainerCard : public Card
{
    private:
        std::string trainerEffect;
    public:
        TrainerCard( std::string trainereffect) : Card("Trainer"), trainerEffect(trainereffect) {}
        std::string getTrainerEffect() { return trainerEffect; }
        void heal_all_your_action_pokemon();
};