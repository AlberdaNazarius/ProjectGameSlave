#include <iostream>
class Character
{
public:
    static void ChangeHungerLevel(int food);
    static void ChangeThirstLevel(int water);
    static void ChangeWarmthLevel(int warmth);
    static void ChangeEnergyLevel(int energy);
    static void ChangeConditionLevel(int points);
private:
    int static hunger,
        thirst,
        warmth,
        energy,
        condition;
};



