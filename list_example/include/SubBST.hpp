/**
* @file SubBST.hpp
* @description Alt ağacın header dosyası burada tanımlanmıştır.
* @course 1A
* @assignment 3.Odev
* @date 21 Aralık ‎2018
* @author Sabri Eray Özbek - sabri.ozbek@ogr.sakarya.edu.tr
*/


#ifndef SUBBST_HPP
#define SUBBST_HPP

#include "Node2.hpp"
#include <iostream>
#include <cmath>
#include <time.h>
#include <string>
#include <algorithm>

class SubBST {
	
	private:

    Node2 * root;
	
	void Add(Node2 *&root, const int &x);
	void Inorder(Node2 * root) const;
	void Preorder(Node2 * root) const;
	void Postorder(Node2 * root) const;
	void Levelorder(Node2 * root, int level)const;
	bool Delete(Node2 *&root, const int &x);
	bool DeleteNode(Node2 * &root);
	void Maximum2(Node2 *&);
	void Minimum2(Node2 *&);
	int Height(Node2 *)const;

	public:

	SubBST();
	bool isEmpty() const;
	void Add(const int x);
	void Delete(const int &);
	void Inorder() const;
	void Preorder() const;
	void Postorder() const;
	void Levelorder() const;
	void Clear() const;
	int Height()const;
	void Maximum2();
	void Minimum2();
	
	~SubBST();
	

};


#endif // !SUBBST_HPP