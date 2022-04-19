#include "unit.hpp"
#include "fishes.hpp"
#include "animate.hpp"
#pragma once
#ifndef HOOK_H
#define HOOK_H
class Hook : public Unit //Class for Hook
{
protected:
    int hookBool = 0; // to keep track of hook direction and if it needs to stop
    int move_speed = 0;

public:
    int moveHk = 0; // to keep track of hook direction and if it needs to stop
    int GetHookBool();
    Hook(SDL_Texture *tex);
    void updateHookRight(); // to keep hooks synced with boat
    void updateHookLeft();
    int moveHook();
    void update_speed(int);
    void reduce();
    int operator+(Anime *);
    int operator*(Fishes *); //These overloads perform tasks on collisions
};
#endif