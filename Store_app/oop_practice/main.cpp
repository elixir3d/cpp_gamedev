#include <iostream>
#include "player.h"
#include "new_player.h"

int main()
{

    Player myPlayer = Player(100, "Mitch");
    myPlayer.GetValue();
    myPlayer.SetValue(200);
    myPlayer.GetValue();

    NewPlayer myNewPlayer = NewPlayer(100, "Banu", 123.f);

    return 0;
}