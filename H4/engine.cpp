#include "engine.h"

Engine::Engine() {}

Engine::Engine(int hp, double disp) : horsepower(hp), dispalcement(disp) {}

int Engine::getHorsepower() const{
    return horsepower;
}

void Engine::setHorsepower(int hp){
    horsepower =hp;
}

double Engine::getDisplacement() const{
    return dispalcement;
}

void Engine::setDisplacement(double disp){
    dispalcement = disp;
}
