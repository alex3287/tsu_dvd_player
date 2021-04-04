//
// Created by Александр Мангазеев on 04.04.2021.
//

#include <iostream>
#include "State.h"
#include "Player.h"
#include "MoviePlayingState.h"
#include "MoviePausedState.h"



int main (){
    std::cout<<"hello world"<<std::endl;

    Player *player = new Player(new MoviePlayingState());
    player->play();
    player->play();

    return 0;
}
