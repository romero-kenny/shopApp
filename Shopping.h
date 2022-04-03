#include <vector>
#include <iostream>
#include <string>

using namespace std;

class Shopping{
private:
    //shoppingCart and individualsPrice should both be in same vector position.
    vector<string> shoppingCart;
    vector<double> individualsPrice; //placeholder for item's price

    string clientName;
    double totalPrice;
    int vectorPosition;

public:
    //Constructor and Destructor
    Shopping(string newClient);
    ~Shopping();

    //basic fetch commands
    string getClientName();
    double getTotalPrice();
    int getVectorPosition(string item);

    //totalPrice commands
    void addPrice(double addPrice);
    void subPrice(double subPrice);

    //shoppingCart and individualsPrice Commands
    //they work together as they are both printed on same line, thus coincide.
    void addItems(string newItem, double itemPrice);
    void undoItem();
    void removeItem(string removedItem);
    void printReciept();
    


    
};