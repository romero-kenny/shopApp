#include <string>
#include <vector>
#include <iostream>

using namespace std;
int getListSize(); //displays how big the list is.
void createMenu(); //creates menu, can change how it looks.

class Items{
private:
    //variables for Items objects, with default values for error testing.
    string itemName;
    double itemPrice;
    int itemNumber;

public:
    //constructor and destructor, respectfully;
    Items(string newItem, double newPrice);
    ~Items();

    //itemName functions
    string getItemName();
    void changeName(string newName);

    //itemPrice functions
    double getItemPrice();
    void  changePrice(double newPrice);

    //itemNumber functions
    int getItemNumber(); //used to create a menu fast and easily. starts at 1

};