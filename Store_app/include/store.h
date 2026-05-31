#pragma once

#include <iostream>
#include "item.h"
#include <unordered_map>

class Store
{

public:
    Store(size_t ID, std::string &NAME, std::unordered_map<std::string, Item*> &ITEMS);

    virtual void GetAllItems() const = 0;
    virtual void AddItem(std::string &item_name, Item* item) = 0;

protected:
    size_t m_id;
    std::string m_name;
    std::unordered_map<std::string, Item*> m_items;
};