#include "BST.h"
#include "BST.cpp"
#include <iostream>

using namespace std;

int main()
{
	BST<int> b;

	Node<int>* root = NULL;
	root = b.insertNode(root, 15);
	root = b.insertNode(root, 13);
	root = b.insertNode(root, 17);
	root = b.insertNode(root, 12);
	root = b.insertNode(root, 14);
	root = b.insertNode(root, 16);
	root = b.insertNode(root, 19);

	b.print(root);
	cout<<"\n";

	int number;
	cout<<"Enter a node to be searched\n";
	cin>>number;

	if(b.searchNode(root, number) == true) cout<<"Node Found exists in the Tree!\n";
	else cout<<"Node NOT Found!\n";

	int deleteNumber;
	cout<<"Enter a node to be deleted\n";
	cin>>deleteNumber;

	b.deleteNode(root, deleteNumber);
	b.print(root);
	cout<<"\n";

	if(b.isSymmetric(root) == true) cout<<"The tree is symmetric\n";
	else cout<<"The tree is not Symmetric\n";

	// A Binary Search Tree can never be symmetric
	// A Binary Tree can be symmetric

	return 0;
}
