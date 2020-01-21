#include "BST.hpp"

using namespace std;

BST::BST() {
	root = NULL;
	// head = NULL;
	// iter = NULL;
	// listLength = 0;
}

void BST::Add(Node *&root, const int &x) {

	// if(listLength == 0) {
	// 	head = new Node();
	// 	iter = head;
	// 	head->andata = x;
	// 	listLength++;
	// }

	// else {
	// 	iter->next = NULL;
	// 	iter = iter->next;
	// }

	if (root == NULL) {
		root = new Node();
		root->data = x;
		// iter->andata = x;
		// listLength++;
	}

	else if (x <= root->data) {
		// iter->andata = x;
		Add(root->left, x);
		// listLength++;
	}
	else if (x >= root->data) {
		// iter->andata = x;
		Add(root->right, x);
		// listLength++;
	}
    
	else return;

}

// int BST::length() {
// 	return listLength;
// }

// void BST::PrintEveryTree() {
// 	iter = head;
// 	for(int i = 0; i < listLength; i++) {
// 		cout<<iter->data;
// 		iter = iter->next;
// 	}
// }

void BST::Inorder(Node * root) const {
	if (root != NULL) {
		Inorder(root->left);
		cout << root->data << " ";
		Inorder(root->right);
	}
}

void BST::Preorder(Node * root) const {
	if (root != NULL) {
		cout << root->data << " ";
		Preorder(root->left);
		Preorder(root->right);
	}
}

void BST::Postorder(Node * root) const {
	if (root != NULL) {
		Preorder(root->left);
		Preorder(root->right);
		cout << root->data << " ";
	}
}

void BST::Levelorder(Node * root, int level) const {
	if(root == NULL) return;
			if(level == 0) cout<<root->data<<" ";
			else{
				Levelorder(root->left,level-1);
				Levelorder(root->right,level-1);
			}
}


bool BST::isEmpty()const {
	return root == NULL;
}

void BST::Add(const int x) {
	Add(root, x);
}

void BST::Inorder()const {
	Inorder(root);
}

void BST::Preorder()const {
	Preorder(root);
}

void BST::Postorder()const {
	Postorder(root);
}

void BST::Levelorder()const {
	int h = Height();
	for(int level = 0;level<=h;level++) {
		Levelorder(root,level);
	}
}

// Node * BST::NewLinkNode() {
// 	head = new Node();
// 	return head;
// }

int BST::Height(Node * root)const {
	if (root == NULL) return -1; 
	return 1 + max(Height(root->left), Height(root->right));
}

int BST::Height()const {
	return Height(root);
}


void BST::Clear()const {
	while (!isEmpty()) return;
}

BST::~BST() {
	Clear();
}

