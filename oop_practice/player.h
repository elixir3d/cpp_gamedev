#pragma once

#include <iostream>

class Player
{

public:
    
    Player(int u_value, std::string u_name);

    // getter
    void GetValue() { std::cout << m_value << "\n"; }
    // setter
    void SetValue(int u_value) { m_value = u_value; }

private:
    int m_value;
    std::string m_name;
};

