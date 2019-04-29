#include <iostream>
#include "Guesser.hpp"
#pragma once
namespace bullpgia{
class SmartGuesser:public bullpgia::Guesser{
public:
string guess() override;
void startNewGame(uint length) override;
void learn(string reply) override;

};
}