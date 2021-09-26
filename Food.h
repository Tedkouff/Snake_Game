#ifndef SNAKE_GAME_FOOD_H
#define SNAKE_GAME_FOOD_H

#include <windows.h>
#include <cstdio>

#define WIDTH 50
#define HEIGHT 25

class Food
{
    private:
        COORD pos;

    public:
        void gen_food();

        COORD get_pos() const;
};

#endif //SNAKE_GAME_FOOD_H
