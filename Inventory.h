#ifndef INVENTORY_H
#define INVENTORY_H

#include <vector> 
#include "Item.h"

class Inventory{

protected:
    int size;
    vector<Item> inventory;

public:
    Inventory();
    Inventory(Item arr[], int s);
    void addItem(Item item);
    void addItemAt(int idx, Item element);
    void removeLastItem();
    void removeItem(int Idx);
    void printIems();
};

#endif