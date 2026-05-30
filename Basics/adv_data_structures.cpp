#include <iostream>
#include <vector>

// structs
struct Dummy
{
    int val{0};
};

// more performant if you group same data types together
struct Test
{
    int num;
    std::string name;
    float f_num;
    Dummy dm;
};

// unions are structures holding different data types
union Holder
{
    std::int32_t num;
    // unsigneds cannot be negative
    std::uint16_t low_num;
    std::uint8_t really_low_num;
};

// enums
enum Levels
{
    FOREST, MOUNTAIN, HELL, SNOW
};

// linked lists
struct Node
{
    int value;
    Node* next;
};

void PrintList(Node* node)
{
    Node* current = node;
    while (current != nullptr)
    {
        std::cout << current->value << "\n";
        current = current->next;
    }
}

int main()
{
    // instantiates the struct
    Test myTest;
    Dummy myDm;
    // creates a copy
    myDm.val = 10;

    myTest.num = 23;
    myTest.name = "Mitch";
    myTest.f_num = 123.f;
    myTest.dm = myDm;

// -----------------------------------------------------------------
    Holder test;
    test.num = 10;
    test.low_num = 18;
    test.really_low_num = 2;
// -----------------------------------------------------------------
        // returns the index if printed
    enum Levels myLevel = HELL;
// -----------------------------------------------------------------

    Node head = Node();
    Node middle = Node();
    Node tail = Node();

    head.value = 10;
    head.next = &middle;

    middle.value = 20;
    middle.next = &tail;

    tail.value = 30;
    tail.next = nullptr;
    PrintList(&head);

    return 0;
}