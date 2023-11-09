#pragma once
#define ITEM_H
#include <iostream>
#include <fstream>
#include <string>
#include <iomanip>

using namespace std;

class Item
{
public:
	Item();
	Item(string _itemName, double _itemCost);
	string getItemName();
	void setItemName(string _itemName);
	double getItemCost();
	void setItemCost(double _itemCost);
private:
	string itemName;
	double itemCost;

};