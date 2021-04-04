//
// Created by Александр Мангазеев on 04.04.2021.
//

#ifndef TSU_DVD_PLAYER_PLAYER_H
#define TSU_DVD_PLAYER_PLAYER_H

#include "State.h"

class Player {
private:
    State *state;
public:
    Player(State* state1);
    void setState(State *state1);
    void play();
    void menu();
};


#endif //TSU_DVD_PLAYER_PLAYER_H
