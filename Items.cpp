#include "Items.h"

int listSize = 0; //makes it easier to assign vector position of item

//global vector list to allow menu creation
vector<string> menuName;
vector<double> menuPrice;

//functions for menuName and menuPrice
int getListSize(){
    return listSize;

}

void createMenu(){
    cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n";
    for(int i = 0; i < listSize; i++){
        cout << i + 1 << ") " << menuName.at(i) << "\t\t\t$"  << menuPrice.at(i) << "\n";
        cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n";

    }

}

//CONSTRUCTOR
Items::Items(string newItem = "default", double newPrice = 0){

    listSize++;
    itemName = newItem;
    itemPrice = newPrice;
    itemNumber = listSize;

    //adds itemName and itemPrice to global vector lists.
    menuName.push_back(itemName);
    menuPrice.push_back(itemPrice);

}

//DESTRUCTOR
Items::~Items(){
    //insert code here

}

//itemName functions
string Items::getItemName(){
    return itemName;

}

void Items::changeName(string newName){
    itemName = newName;

}

//itemPrice functions
double Items::getItemPrice(){
    return itemPrice;

}

void Items::changePrice(double newPrice){
    itemPrice = newPrice;

}

//ITEMNUMBER FUNCTIONS
int Items::getItemNumber(){
    return itemNumber;

}