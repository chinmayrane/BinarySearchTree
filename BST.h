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

		Node<T>* getNewNode(T);
		Node<T>* insertNode(Node<T>*, T);
		bool searchNode(Node<T>*, T);
		Node<T>* findMin(Node<T>*);
		Node<T>* deleteNode(Node<T>*, T);
		void print(Node<T>*); 
};



#endif