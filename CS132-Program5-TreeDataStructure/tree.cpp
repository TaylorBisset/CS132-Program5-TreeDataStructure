// tree.cpp

/*
This file implements the Tree class and its member functions. 
It includes the insert, print, and operator<< implementations. 
Specifically, this implementation sorts the values through the tree
  by moving left or right until it reaches an open slot.
*/

#include "tree.h";

bool Tree::insert(int newVal)
{
	Node* newNode = new Node(newVal);
	if (!root)
	{
		root = newNode;
		count++;
		cout << "Inserting " << newVal << " into an empty tree.\n\n";	// debug output
		return true;
	}

	Node* current = root;
	cout << "Inserting " << newVal << ": \n";		// debug output
	while (current) 
	{
		if (newVal == current->data)
		{
			cout << "\tInserting " << newVal << " FALSE\n\t(duplicate value)\n";	// debug output
			delete newNode;		// delete the value because it is a duplicate
			return false;
		}
		if (newVal < current->data)
		{
			cout << "\t     going left.\n";	// debug output	
			if (!current->left)
			{
				current->left = newNode;	// insert left
				count++;
				cout << "\tInserting " << newVal << " TRUE\n";	// debug output
				return true;
			}
			current = current->left;
		}
		if (newVal > current->data)
		{
			cout << "\t     going right.\n";	// debug output
			if (!current->right)
			{
				current->right = newNode;	// insert right
				count++;
				cout << "\tInserting " << newVal << " TRUE\n";	// debug output
				return true;
			}
			current = current->right;
		}	
	}
}

void Tree::print(ostream& output, Node* currentNode) const
{
	if (currentNode)
	{
		print(output, currentNode->left);
		output << currentNode->data << " ";
		print(output, currentNode->right);
	}
}

ostream& operator<<(ostream& str, const Tree& tree)
{
	tree.print(str, tree.root);
	str << endl << "Count:       " << tree.count;
	return str;
}
