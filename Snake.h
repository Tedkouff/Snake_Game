#ifndef SNAKE_GAME_SNAKE_H
#define SNAKE_GAME_SNAKE_H

#include <windows.h>
#include <vector>

#define WIDTH 50
#define HEIGHT 25

using namespace std;

class Snake
{
private:
    COORD pos;
    int vel;
    char dir;
    int len;
    vector<COORD> body;

public:
    Snake(COORD pos, int vel);

    void grow();
    void move_snake();
    void direction(char dir);

    vector<COORD> get_body();

    bool collided() const;
    bool eaten(COORD food) const;

    COORD get_pos() const;
};

#endif //SNAKE_GAME_SNAKE_H
