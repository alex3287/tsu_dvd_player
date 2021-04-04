cmake_minimum_required(VERSION 3.17)
project(tsu_dvd_player)

set(CMAKE_CXX_STANDARD 14)

add_executable(tsu_dvd_player main.cpp Player.cpp Player.h State.cpp State.h
        MoviePlayingState.cpp MoviePlayingState.h MoviePausedState.cpp MoviePausedState.h)