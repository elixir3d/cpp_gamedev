// Rebelway C++ coding for games

// Topic : Assignment 01 - Binary Search Tree
// Author : Elixir3d

#include <iostream>
#include <vector>

struct Node
{
    int val{0};
    Node* left = nullptr;
    Node* right = nullptr;
};

Node* createNode(int data);
Node* insertIntoTree(Node* root, int val);
void PrintTreeLeaves(Node* root);

int main()
{


    Node* root = createNode(10);

    std::vector<int> values = {9, 19, 92, 4, 1, 17};

    for (auto &val : values)
    {
        root = insertIntoTree(root, val);
    }

    PrintTreeLeaves(root);
    
    return 0;
}

Node *createNode(int data)
{
    Node* newNode = new Node();
    newNode->val = data;

    return newNode;
}

Node* insertIntoTree(Node *root, int val)
{
    if (root == nullptr)  return createNode(val);

    if (val < root->val)
    {
        root->left = insertIntoTree(root->left, val);

    }
    else if (val > root->val)
    {
        root->right = insertIntoTree(root->right, val);

    }

    return root;
}

void PrintTreeLeaves(Node *root)
{
    if (root == nullptr) return;
    PrintTreeLeaves(root->left);  
    if (root->left == nullptr && root->right == nullptr)
    {
        std::cout << root->val << " ";
    }
    PrintTreeLeaves(root->right);

}
