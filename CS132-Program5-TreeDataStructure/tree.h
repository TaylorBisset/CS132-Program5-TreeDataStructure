// tree.h

#ifndef TREE_H
#define TREE_H

#include <iostream>

class Tree 
{
public:
    class Node 
    {
    public:
        Node() : left(nullptr), right(nullptr), data(0) {}
        Node(int val) : left(nullptr), right(nullptr), data(val) {}
        int data;
        Node* left;
        Node* right;
    };

    Tree() : count(0), root(nullptr) {}
    bool insert(int newVal);
    friend std::ostream& operator<<(std::ostream& str, const Tree& tree); // calls print and outputs count

private:
    void print(std::ostream& ostr, Node* curNode) const;  // recursive function
    Node* root;
    int count;
};

#endif  // TREE_H
