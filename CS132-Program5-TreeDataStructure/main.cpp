/*
 Name:          Taylor Bisset
 Section:       A
 Program Name:  CS132-Program5-TreeDataStructure

 Description:   This program is a simple and incomplete version 
                of the Binary Search Tree data structure that only
                includes 3 functions for the class. 

Repo:           https://github.com/TaylorBisset/CS132-Program5-TreeDataStructure
*/

// main.pp

#include <iostream>
#include "tree.h"

int main()
{
    Tree tree;

    int treeValues[] = { 6, 9, 3, 5, 5, 7, 2, 10, 4, 1, 8 };

    for (int value : treeValues)
    {
        tree.insert(value);
    }

    cout << "Sorted Data: " << tree << endl;

    return 0;
}

/*

OUTPUT: 

insert in empty tree
going right
inserting TRUE
going left
inserting TRUE
going left
going right
inserting TRUE
going left
going right
going inserting FALSE
going right
going left
inserting TRUE
going left
going left
inserting TRUE
going right
going right
inserting TRUE
going left
going right
going left
inserting TRUE
going left
going left
going left
inserting TRUE
going right
going left
going right
inserting TRUE
Sorted Data: Count: 10

*/

/*

Requirements:

- The insert member function should use loops to find the correct place for the new data 
(NOTE: duplicate numbers should not be added to the tree), 
and the print function must use recursion to print out the sorted data from the Tree.

- Inside the insert function you NEED to give the following “debug” output:

insert in empty tree        when this is the case
going left/right            when moving to the left or right down tree
inserting TRUE/FALSE        able to insert or not

{for an example look at the Program 6 Notes Tree.pdf in the Lecture section on Canvas}

- Insert the following numbers into the tree in this order:

                6   9    3    5    5   7   2   10   4   1   8

  ....and then output the data in sorted order and count from the list

  - turn in your main, the output, Tree.h, Tree.cpp, 
  and yes there should be a program header before main and a short class header before the Tree.h

*/