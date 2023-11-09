#include <iostream>
#include <fstream>
#include <string>
#include <iomanip>
#include "Cart.h"

using namespace std;

Cart::Cart(string _cartName)
{
	cartName = _cartName;
	_count = 0;
}

void Cart::PrintTotal()
{
	double sum = 0.0;
	for (int i = 0; i < _count; i++)
	{
		sum += _arr[i].getItemCost();
	}
	costOfCart = sum;
	cout << "The total cost of the purchase is: " << setprecision(2) << fixed << costOfCart << endl;
}

bool Cart::purchase(Item item)
{
	if (_count < 100)
	{
		_arr[_count] = item;
		_count++;
		return true;
	}
	return false;
}