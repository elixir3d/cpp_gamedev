#include <iostream>
#include <array>
#include <vector>
#include <unordered_map>

void PrintArray(int nums[5]);
void PrintVector(std::vector<int> vec);
void PrintMap(std::unordered_map<std::string, int> map);

int main()
{
    // arrays
    int nums[5] = {10, 20, 30, 40, 50};
    PrintArray(nums);
    std::cout << "-------------------------------------" << "\n";
    // vectors
    std::vector<int> vec_nums = {60, 70, 80, 90, 100};
    PrintVector(vec_nums);
    std::cout << "-------------------------------------" << "\n";
    // maps
    std::unordered_map<std::string, int> my_map = {
        {"Mitch", 20},
        {"Banu", 30}
    };
    PrintMap(my_map);

    return 0;
}

// arrays are not dynamically allocated and cannot change size- managed on stack
void PrintArray(int nums[5])
{
    for (int i = 0; i <5; i++)
    {
        std::cout << nums[i] << "\n";
    }
}

// vectors are dynamically allocated and can change size at run time - managed on heap
void PrintVector(std::vector<int> vec)
{
    for (int x : vec)
    {
        std::cout << x << "\n";
    }
}
// access key value pairs with elemt.x and element.y etc. Maps are dynamically allocated on heap
void PrintMap(std::unordered_map<std::string, int> map)
{
    for (auto x : map)
    {
        std::cout << x.first << " " << x.second << "\n";
    }
}
