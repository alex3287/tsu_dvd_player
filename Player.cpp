//
// Created by Александр Мангазеев on 04.04.2021.
//

#include "Player.h"

Player::Player(State *state1): state(nullptr) {
    setState(state1);
}

void Player::setState(State *state1) {
    if (state != nullptr)
        delete state;
    state = state1;
    state->setPlayer(this);
}

void Player::play() {
    state->play();
}

void Player::menu() {
    state->menu();
}
