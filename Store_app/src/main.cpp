#include "item.h"
#include "book.h"
#include "book_store.h"
#include <unordered_map>

int main()
{
    size_t id = 10;
    float weight = 123.f;
    float height = 65.f;
    std::string name = "LoTR";
    std::string type = "book";
    std::string publisher = "Penguin";
    std::string author = "JRR Tolkien";

    Book Book1 = Book(id, weight, height, name, type, publisher, author);

    size_t b_id = 12;
    std::string b_name = "Hatchards";
    std::unordered_map<std::string, Item*> b_items;
    std::string b_book_type = "Fantasy Book";

    BookStore book_store1 = BookStore(b_id, b_name, b_items, b_book_type);
    std::string name_to_add = "Lord of the rings";
    book_store1.AddItem(name_to_add, &Book1);
    book_store1.GetAllItems();

    return 0;
}