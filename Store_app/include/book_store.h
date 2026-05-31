#pragma once

#include "store.h"
#include "item.h"
#include <iostream>

class BookStore : public Store
{
public:
    BookStore(size_t ID, std::string &NAME, std::unordered_map<std::string, Item*> &ITEMS, std::string &BOOK_TYPES);

    void GetAllItems() const override;
    virtual void AddItem(std::string &item_name, Item* item) override;
private:

    std::string m_book_types;
};