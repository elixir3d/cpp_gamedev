#include <iostream>
#include <vector>

void Func(std::string player)
{
    player += "_server";
}

void Func_ref(std::string& player)
{
    player += "_server";
}

std::string Func2(std::string& player)
{
    return player + "_new_server";
}

int main()
{
    std::string player1 {"One"};
    std::string player2 {"Two"};

    // same value - passing by copy as player1 never changed
    // it's destroyed on stack after the function call
    std::cout << player1 << "\n";
    Func(player1);
    std::cout << player1 << "\n";

    // value changes after the func call as value passed by reference
    // reference passing passes the address of the variable rather than a copy
    std::cout << player1 << "\n";
    Func_ref(player1);
    std::cout << player1 << "\n";

    return 0;

}