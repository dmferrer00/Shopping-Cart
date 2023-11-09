#include <iostream>
#include <fstream>
#include <string>
#include <iomanip>
#include "Item.h"

using namespace std;

Item::Item() 
{
	itemName = "";
	itemCost = 0.0;
}

Item::Item(string _itemName, double _itemCost)
{
	itemName = _itemName;
	itemCost = _itemCost;
}

string Item::getItemName()
{
	return itemName;
}

void Item::setItemName(string _itemName)
{
	itemName = _itemName;
}

double Item::getItemCost()
{
	return itemCost;
}

void Item::setItemCost(double _itemCost)
{
	itemCost = _itemCost;
}