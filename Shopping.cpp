#include "Shopping.h"

//CONSTRUCTOR
Shopping::Shopping(string newClient){
    clientName = newClient;
    totalPrice = 0;

}

//DESTRUCTOR
Shopping::~Shopping(){
    cout << "Thanks for shopping with us!";

}

//BASIC FETCH COMMAND FUNCTIONS
string Shopping::getClientName(){
    return clientName;

}

double Shopping::getTotalPrice(){
    return totalPrice;

}

int Shopping::getVectorPosition(string item){
    for(int i = 0; i < shoppingCart.size(); i++){
        if(item == shoppingCart.at(i)){
            vectorPosition = i;
            return vectorPosition;
        }
    }
    cout << "Not in shopping cart";
    vectorPosition = -1;
    return vectorPosition;

}

//TOTAL PRICE COMMAND FUNCTIONS
void Shopping::addPrice(double addPrice){
    totalPrice += addPrice;

}

void Shopping::subPrice(double subPrice){
    totalPrice -= subPrice;

}

//SHOPPING CART COMMAND
void Shopping::addItems(string newItem, double itemPrice){
    shoppingCart.push_back(newItem);
    individualsPrice.push_back(itemPrice);
    addPrice(itemPrice);

}

void Shopping::undoItem(){
    shoppingCart.pop_back();
    individualsPrice.pop_back();

}

void Shopping::removeItem(string removedItem){
    int vectorPosition = getVectorPosition(removedItem);
    shoppingCart.at(vectorPosition) = "Removed";
    individualsPrice.at(vectorPosition) = 0;

}

void Shopping::printReciept(){
    for(int i = 0; i < shoppingCart.size(); i++){
        cout << individualsPrice.at(i) << "\t\t" << shoppingCart.at(i) << "\n";
    }
    cout << totalPrice << "\t\t:Total\n";
}
