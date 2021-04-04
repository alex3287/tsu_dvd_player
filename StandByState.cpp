//
// Created by Александр Мангазеев on 05.04.2021.
//

#include "StandByState.h"

void StandByState::play() {
    std::cout<<"Playing"<<std::endl;
    player->setState(new MoviePlayingState());
}

void StandByState::menu() {
    std::cout<<"Состояние переключено на MenuState MenuState(PlayButton)"<<std::endl;
}
