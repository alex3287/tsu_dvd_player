//
// Created by Александр Мангазеев on 05.04.2021.
//

#include "MoviePausedState.h"

void MoviePausedState::play() {
    std::cout<<"Start music"<<std::endl;
    player->setState(new MoviePlayingState());
}

void MoviePausedState::menu() {
    std::cout<<"Состояние переключено на MenuState"<<std::endl;

}
