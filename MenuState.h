//
// Created by Александр Мангазеев on 05.04.2021.
//

#ifndef TSU_DVD_PLAYER_MENUSTATE_H
#define TSU_DVD_PLAYER_MENUSTATE_H

#include <iostream>
#include "State.h"
#include "StandByState.h"

class MenuState: public State {
public:
    void menu() override;
    void play() override;
};


#endif //TSU_DVD_PLAYER_MENUSTATE_H
