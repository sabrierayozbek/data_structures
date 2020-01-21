/**
* @file Node.hpp
* @description İkinci düğümün header dosyası burada tanımlanmıştır.
* @course 1A
* @assignment 3.Odev
* @date 21 Aralık ‎2018
* @author Sabri Eray Özbek - sabri.ozbek@ogr.sakarya.edu.tr
*/


#ifndef NODE2_HPP
#define NODE2_HPP

#include <iostream>

class Node2 {
private:

Node2 * left;
Node2 * right;
int data;

public:

Node2();
int getData();
void changeData(int);
Node2 * &nextLeft();
Node2 * &nextRight();
void changeRight(Node2 *);
void changeLeft(Node2 *);

};


#endif 