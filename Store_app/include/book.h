#pragma once

#include <iostream>
#include "item.h"

class Book : public Item
{
public:
    Book(
        size_t ID, 
        float WEIGHT,
        float HEIGHT,
        std::string &NAME,
        std::string &TYPE,
        std::string &PUBLISHER,
        std::string &AUTHOR       
    );
    virtual void GetItemInfo() const override;


private:
    std::string m_publisher;
    std::string m_author;

};