//
// Created by Александр Мангазеев on 05.04.2021.
//

#include "MoviePlayingState.h"

void MoviePlayingState::play() {
    std::cout<<"Stop music"<<std::endl;
    player->setState(new MoviePausedState());
}

void MoviePlayingState::menu() {
    std::cout<<"Состояние переключено на MenuState"<<std::endl;
}
