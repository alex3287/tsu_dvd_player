//
// Created by Александр Мангазеев on 05.04.2021.
//

#include "MenuState.h"

void MenuState::play() {

}

void MenuState::menu() {
    std::cout<<"Состояние переключено на MenuState StandByState(PlayButton)"<<std::endl;
    player->setState(new StandByState());
}
