//
// Created by Александр Мангазеев on 05.04.2021.
//

#ifndef TSU_DVD_PLAYER_MOVIEPAUSEDSTATE_H
#define TSU_DVD_PLAYER_MOVIEPAUSEDSTATE_H

#include <iostream>
#include "State.h"
#include "MoviePlayingState.h"

class MoviePlayingState;

class MoviePausedState: public State {
public:
    void menu() override;
    void play() override;
};


#endif //TSU_DVD_PLAYER_MOVIEPAUSEDSTATE_H
