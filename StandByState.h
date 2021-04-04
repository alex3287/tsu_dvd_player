//
// Created by Александр Мангазеев on 05.04.2021.
//

#ifndef TSU_DVD_PLAYER_STANDBYSTATE_H
#define TSU_DVD_PLAYER_STANDBYSTATE_H

#include <iostream>
#include "State.h"
#include "MoviePlayingState.h"

class StandByState: public State {
public:
    void menu() override;
    void play() override;
};


#endif //TSU_DVD_PLAYER_STANDBYSTATE_H
