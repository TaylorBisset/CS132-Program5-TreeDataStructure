// tree.cpp

#include "tree.h";

bool Tree::insert(int newVal)
{
	Node* newNode = new Node(newVal);
	if (!root)
	{
		root = newNode;
		count++;
		cout << "insert in empty tree\n";	// debug output
		return true;
	}

	Node* current = root;
	while (current) 
	{
		cout << "going ";		// debug output

		if (newVal < current->data)
		{
			cout << "left\n";	// debug output		"going left"
			if (!current->left)
			{
				current->left = newNode;	// insert left
				count++;
				cout << "inserting TRUE\n";	// debug output
				return true;
			}
			current = current->left;
		}
		else if (newVal > current->data)
		{
			cout << "right\n";	// debug output		"going right"
			if (!current->right)
			{
				current->right = newNode;	// insert right
				count++;
				cout << "inserting TRUE\n";	// debug output
				return true;
			}
			current = current->right;
		}
		else
		{
			cout << "inserting FALSE\n";	// debug output
			delete newNode;		// delete the value because it is a duplicate
			return false;
		}
	}
}
