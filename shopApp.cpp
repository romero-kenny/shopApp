#include "shopApp.h"
using namespace std;


//initiates a client, as it acts as a shopping bag as well
//we can only handle 1 custoemr at a time wtih this app, sadly...
//wanted to finish it in 24 hour period
Shopping client("Customer");

//initiates menu items to be manipulated with
Items blackCoffee("Black Coffee", 2.35);
Items latte("Latte", 3.35);
Items scones("Scone", 1.15);

//temp variable for userInput
string userInput;
bool done = false;

//creates vectors of menuPrice and menuItems
int main(){

    cout << "WELCOME TO KENNY'S COFFEE SHOP!\n";
    cout << "Currently we are under remodel but we have three items on our menu!\n";
    cout << "SO... What would you like to order?\n";

    //prompts client item and how many they want
    while(done == false){
        createMenu(); //creates menu

        //prompts user for input
        cout << "Please type the corresponding menu item number: \n";
        cin >> userInput;

        errorChecker(userInput);
        cout << "Good Choice!\n";

        //Asks how many would you like, adding multiples of the same item at once.
        if (stoi(userInput) == blackCoffee.getItemNumber()){

            cout << "How many would you like?\n";
            cin >> userInput;

            for(int i = 0; i < stoi(userInput); i++){
                client.addItems(blackCoffee.getItemName(), blackCoffee.getItemPrice());
            }
        }

        if (stoi(userInput) == blackCoffee.getItemNumber()){

            cout << "How many would you like?\n";
            cin >> userInput;

            for(int i = 0; i < stoi(userInput); i++){
                client.addItems(blackCoffee.getItemName(), blackCoffee.getItemPrice());
            }
        }

            if (stoi(userInput) == blackCoffee.getItemNumber()){

            cout << "How many would you like?\n";
            cin >> userInput;

            for(int i = 0; i < stoi(userInput); i++){
                client.addItems(blackCoffee.getItemName(), blackCoffee.getItemPrice());
            }
        }

        cout << "And will that be all?\n";
        cout << "type 1 for Yes, 2 for No\n";
        cin >> userInput;

        errorChecker(userInput);

        if (stoi(userInput) == 2){
            done = false;
            cout << "What else would you like?\n";
        }
        else if (stoi(userInput) == 1){
            done = true;
            cout << "Alright let me print you your receipt real quick.\n";
            client.printReciept();

        }
    }
}