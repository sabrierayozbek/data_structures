/**
* @file Node2.cpp
* @description İkinci düğümün kaynak kodları burada tanımlanmıştır.
* @course 1A
* @assignment 3.Odev
* @date 21 Aralık ‎2018
* @author Sabri Eray Özbek - sabri.ozbek@ogr.sakarya.edu.tr
*/



#include "Node2.hpp"

Node2::Node2() {
	data = 0;
	left = NULL;
	right = NULL;
}

int Node2::getData() {
	return data;
}

void Node2::changeData(int x) {
	data = x;
}

Node2 * &Node2::nextLeft() {
	return left;
}

Node2 * &Node2::nextRight() {
	return right;
}

void Node2::changeRight(Node2 * x) {
	right = x;
}

void Node2::changeLeft(Node2 * x) {
	left = x;
}




