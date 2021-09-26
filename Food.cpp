#include "Food.h"

void Food::gen_food()
{
    pos.X = rand() % (WIDTH - 3) + 1; //-3 because positions 0, width-1, width 
    pos.Y = rand() % (HEIGHT - 3) + 1;
}

COORD Food::get_pos() const { return pos; }
