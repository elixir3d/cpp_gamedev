#include "book.h"

Book::Book(size_t ID, 
    float WEIGHT, 
    float HEIGHT, 
    std::string &NAME, 
    std::string &TYPE, 
    std::string &PUBLISHER, 
    std::string &AUTHOR
) :
Item(ID, WEIGHT, HEIGHT, NAME, TYPE),
m_publisher(std::move(PUBLISHER)),
m_author(std::move(AUTHOR))
{
}

void Book::GetItemInfo() const
{
    std::cout << "The book name: " << m_name << "\n";
    std::cout << "The book author: " << m_author << "\n";
    
}