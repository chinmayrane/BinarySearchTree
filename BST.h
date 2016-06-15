#ifndef __BST__
#define __BST__

#include <iostream>
using namespace std;

template <class T>
struct Node{
	T data;
	Node<T>* left;
	Node<T>* right;
};

template <typename T>
class BST{
	protected: 
		Node<T>	*root;

	public:
		BST();
		~BST();

		// Create New Node
		// Params: Node Value
		// Returns: Node
		Node<T>* getNewNode(T);
		
		// Insertion
		// Params: Root Node, Node Value
		// Returns: Root Node
		Node<T>* insertNode(Node<T>*, T);

		// Search
		// Params: Root Node, Node Value
		// Returns: True | False depending on Node found or not/
		bool searchNode(Node<T>*, T);

		// Find Minimum
		// Params: Root Node
		// Returns: Minimum Node (Left Most in a Binary Search Tree)
		Node<T>* findMin(Node<T>*);

		// Deletion
		// Params: Root Node, Node Value
		// Returns: Root Node
		Node<T>* deleteNode(Node<T>*, T);

		// Check if tree is symmetric or not
		// Params: Root Node
		// Overloaded Params: Left Subtree Root, Right Subtree Root
		// Returns: True | False
		bool isSymmetric(Node<T>*);

		bool isSymmetric(Node<T>*, Node<T>*);
		


		// Print
		// Params: Root Node
		// Returns: void | prints the Tree in preOrder fashion
		void print(Node<T>*); 
};



#endif