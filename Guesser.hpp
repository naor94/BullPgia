#include <iostream>
#include "calculate.hpp"
#pragma once
namespace bullpgia{
class Guesser
{

  
public:
unsigned  int length;


virtual string guess()=0;
virtual void startNewGame(unsigned int x){

};
virtual void learn(string y){
    
};


};
}
