#pragma once
#define CART_H
#include "Item.h"
#include <iostream>
#include <fstream>
#include <string>
#include <iomanip>

using namespace std;

class Cart
{
public:
	Cart(string _cartName);
	void PrintTotal();
	bool purchase(Item item);
private:
	string cartName;
	int _count;
	Item _arr[100];
	double costOfCart;
};