/**
* @file SubBST.cpp
* @description Alt ağacımızın kaynak kodları burada tanımlanmıştır. 
* @course 1A
* @assignment 3.Odev
* @date 21 Aralık ‎2018
* @author Sabri Eray Özbek - sabri.ozbek@ogr.sakarya.edu.tr
*/


#include "SubBST.hpp"

using namespace std;

SubBST::SubBST() {
	root = NULL;
	// head = NULL;
	// iter = NULL;
	// listLength = 0;
}

void SubBST::Add(Node2 *&root, const int &x) {

	// if(listLength == 0) {
	// 	head = new Node2();
	// 	iter = head;
	// 	head->andata = x;
	// 	listLength++;
	// }

	// else {
	// 	iter->next = NULL;
	// 	iter = iter->next;
	// }

	if (root == NULL) {
		root = new Node2();
		root->changeData(x);
		// iter->andata = x;
		// listLength++;
	}

	else if (x <= root->getData()) {
		// iter->andata = x;
		Add(root->nextLeft(), x);
		// listLength++;
	}
	else if (x >= root->getData()) {
		// iter->andata = x;
		Add(root->nextRight(), x);
		// listLength++;
	}
    
	else return;

}

// int SubBST::length() {
// 	return listLength;
// }

// void SubBST::PrintEveryTree() {
// 	iter = head;
// 	for(int i = 0; i < listLength; i++) {
// 		cout<<iter->data;
// 		iter = iter->next;
// 	}
// }

void SubBST::Maximum2(Node2 *&root)
{
			if(root->nextRight() == NULL)
            { 
                cout<<"Max Deger: "<<root->getData();
                DeleteNode(root);
                return;
            }
			else
				Maximum2(root->nextRight());
}
void SubBST::Minimum2(Node2 *&root)
{
			if(root->nextLeft() == NULL)
            { 
                cout<<"Min Deger: "<<root->getData();
                DeleteNode(root);
                return;
            }
			else
				Minimum2(root->nextLeft());
}

void SubBST::Inorder(Node2 * root) const {
	if (root != NULL) {
		Inorder(root->nextLeft());
		cout << root->getData() << " ";
		Inorder(root->nextRight());
	}
}

void SubBST::Preorder(Node2 * root) const {
	if (root != NULL) {
		cout << root->getData() << " ";
		Preorder(root->nextLeft());
		Preorder(root->nextRight());
	}
}

void SubBST::Postorder(Node2 * root) const {
	if (root != NULL) {
		Preorder(root->nextLeft());
		Preorder(root->nextRight());
		cout << root->getData() << " ";
	}
}

bool SubBST::DeleteNode(Node2 * &root) {
	Node2 *deleteNode = root;
			
			if(root->nextRight() == NULL) root = root->nextLeft();
			else if(root->nextLeft() == NULL)root = root->nextRight();
			else{
				deleteNode = root->nextLeft();
				Node2 *iter = root;
				while(deleteNode->nextRight() != NULL){
					iter=deleteNode;
					deleteNode=deleteNode->nextRight();
				}

				root->changeData(deleteNode->getData());
				if(iter == root) root->nextLeft() = deleteNode->nextLeft();
				else iter->nextRight() = deleteNode->nextLeft();
			}
			delete deleteNode;
			return true;
}

void SubBST::Levelorder(Node2 * root, int level) const {
	if(root == NULL) return;
			if(level == 0) cout<<root->getData()<<" ";
			else{
				Levelorder(root->nextLeft(),level-1);
				Levelorder(root->nextRight(),level-1);
			}
}


bool SubBST::isEmpty()const {
	return root == NULL;
}

void SubBST::Add(const int x) {
	while(Height() != x)
                {
				    Add(root,rand()%100+1);
                }
	/*if(Height() == x)
		return;
	else
	{
		Add(root,rand()%100+1);
		Add(x-1);
	}*/
}

bool SubBST::Delete(Node2 *&root, const int &x) {
	if(root == NULL) return false; 
			if(root->getData() == x)
				return DeleteNode(root);
			else if(x < root->getData())
				return Delete(root->nextLeft(),x);
			else
				return Delete(root->nextRight(),x);
}


void SubBST::Inorder()const {
	Inorder(root);
}

void SubBST::Preorder()const {
	Preorder(root);
}

void SubBST::Postorder()const {
	Postorder(root);
}

void SubBST::Levelorder()const {
	int h = Height();
	for(int level = 0;level<=h;level++) {
		Levelorder(root,level);
	}
}


// Node2 * SubBST::NewLinkNode2() {
// 	head = new Node2();
// 	return head;
// }

int SubBST::Height(Node2 * root)const {
	if (root == NULL) return -1; 
	return 1 + max(Height(root->nextLeft()), Height(root->nextRight()));
}

int SubBST::Height()const {
	return Height(root);
}

void SubBST::Maximum2() {
	Maximum2(root);
}

void SubBST::Minimum2() {
	Minimum2(root);
}

void SubBST::Delete(const int &x) {
	Delete(root,x);
}

void SubBST::Clear()const {
	while (!isEmpty()) return;
}

SubBST::~SubBST() {
	Clear();
}

