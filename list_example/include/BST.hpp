
#ifndef  BST_HPP
#define BST_HPP
#include "Node.hpp"
#include <iostream>
#include <cmath>
#include <time.h>
#include <string>
#include <algorithm>


class BST {

private:
	Node * root;
	Node * head;
	Node * iter;
	void Add(Node *&root, const int &x);
	void Inorder(Node * root) const;
	void Preorder(Node * root) const;
	void Postorder(Node * root) const;
	void Levelorder(Node * root, int level)const;

public:
    int listLength;
	BST();
	bool isEmpty() const;
	void Add(const int x);
	void Inorder() const;
	void Preorder() const;
	void Postorder() const;
	void Levelorder() const;
	void Clear() const;
	int Height(Node * root)const;
	int Height()const;
	// Node * NewLinkNode();
	int length();
	// void PrintEveryTree();
	
	~BST();

};

#endif // ! BST_HPP
