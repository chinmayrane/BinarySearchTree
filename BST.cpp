#include "BST.h"
#include <iostream>

using namespace std;

// Default Constructor
template <typename T>
BST<T>::BST(){
	root = NULL;
}

// Default Destructor
template <typename T>
BST<T>::~BST(){

}


// Init a new Node
template <typename T>
Node<T>* BST<T>::getNewNode(T v){
	Node<T>* temp = new Node<T>();
	temp->data = v;
	temp->left = temp->right = NULL;
	return temp;
}

// Insert a Node
template <typename T>
Node<T>* BST<T>::insertNode(Node<T>* root, T v){
	if(root == NULL){
		root = getNewNode(v);
	}else if(v <= root->data){
		root->left = insertNode(root->left, v);
	}else{
		root->right = insertNode(root->right, v);
	}
	return root;
} 

// Search a Node
template <typename T>
bool BST<T>::searchNode(Node<T>* root, T v){
	if(root == NULL){
		return false;
	}else if(root->data == v){
		return true;
	}else if(v <= root->data){
		return searchNode(root->left, v);
	}else{
		return searchNode(root->right, v);
	}
}

// find Minium
template <typename T>
Node<T>* BST<T>::findMin(Node<T>* root){
	while(root->left != NULL) root = root->left;
	return root;
}

// Delete a Node
template <typename T>
Node<T>* BST<T>::deleteNode(Node<T>* root, T v){
	if(root == NULL) return root;
	else if(v < root->data) root->left = deleteNode(root->left, v);
	else if(v > root->data) root->right = deleteNode(root->right, v);
	else{
		if(root->left == NULL && root->right == NULL){
			delete root;
			root = NULL;
		}else if(root->left == NULL){
			Node<T>* temp = root;
			root = root->right;
			delete temp;
		}else if(root->right == NULL){
			Node<T>* temp = root;
			root = root->left;
			delete temp;
		}else{
			// Two Children

			Node<T>* temp = findMin(root->right);
			root->data = temp->data;
			root->right = deleteNode(root->right,temp->data);
		}
	}
	return root;
}

// Print the Tree - Pre Order Traversal
template <typename T>
void BST<T>::print(Node<T>* root){
		if(root == NULL) return;
		cout<<root->data<<" ";
		print(root->left);
		print(root->right);
}
