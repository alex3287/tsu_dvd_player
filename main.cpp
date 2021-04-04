//
// Created by Александр Мангазеев on 04.04.2021.
//

#include <iostream>
#include "State.h"
#include "Player.h"
#include "StandByState.h"



int main (){
    Player *player = new Player(new StandByState());
    player->play();
    player->menu();
    player->play();
    player->menu();
    player->play();
    player->menu();
    player->play();

    return 0;
}
