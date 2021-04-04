//
// Created by Александр Мангазеев on 04.04.2021.
//

#ifndef TSU_DVD_PLAYER_STATE_H
#define TSU_DVD_PLAYER_STATE_H

#include "Player.h"

class Player;

class State {
protected:
    Player *player;
public:
    virtual ~State();
    void setPlayer(Player *player1);
    virtual void play() = 0;
    virtual void menu() = 0;
};


#endif //TSU_DVD_PLAYER_STATE_H
