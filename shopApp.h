#include "Items.h"
#include "Shopping.h"

//ERROR CHECKERS FOR USER INPUT
//false means no error, true means error
bool integerChecker(string userInput){ //integer checker

    try{

        if(isdigit(stoi(userInput))){
        }

        return false;
    }

    catch(std::invalid_argument){

         return true;

    }
}

bool onMenu(string userInput){

    if (integerChecker(userInput) == false){

        if (stoi(userInput) > 0 && stoi(userInput) <= getListSize() ){
            return false;

        }
    }

    return true;

}

void errorChecker(string userInput){

    while(onMenu(userInput) == true){
        
        cout << "What are you doing? Just give the right input.\n";
        cin >> userInput;

    }    
}