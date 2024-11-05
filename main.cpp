// Name: Nathan O'Brien
// Program Name: Looping Lab
// Date: 11/5/24
// Extra: Checks if the user enters an incorrect value

#include <iostream>
#include <string>

using namespace std;

int main(){

    //program 1 - motivation loop

    //creates arrays for days and messages
    string days[7] = {"Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday", "Sunday"};
    string msgs[7];

    //goes through and asks user for each message
    for (int i = 0; i < 7; i++){
        cout << "Today is " << days[i] << ". Whats todays quote? ";
        getline(cin, msgs[i]);
    }

    //prints messages
    for (int i = 0; i < 7; i++){
        //for some reason you need to convert to c strings with printf, thanks google
        printf("%s: %s\n", days[i].c_str(), msgs[i].c_str());
    }

    //program 2 -zombie survival

    //variables
    int energy = 5;
    int supplies = 0;

    //goes through the loop
    while (energy > 0 && supplies < 10 && supplies >= 0){
        int choice;
        cout << "\nEnergy: " << energy << "\nSupplies: " << supplies << "\n1. Search for Supplies\n2. Rest\n";
        cin >> choice;

        //checks user choice
        if (choice == 1){
            energy -= 1;
            supplies += 1;
        } else if (choice == 2){
            energy += 2;
        //extra - error checks the input
        } else {
            cout << "Invalid Input. Taking 3 supplies.";
            supplies -= 3;
        }
    }

    //print message depending on if user made it
    if (energy <= 0){
        cout << "You died!" << endl;
    } else if (supplies >= 10){
        cout << "You made it!" << endl;
    }

    //program 3 - code the lock

    //number for code
    int code = 877;
    char choice;

    do {
        //gets user guess
        int guess;
        cout << "\nGuess the code btween 100-900: ";
        cin >> guess;
        //breaks loop if correct, so no else is needed
        if (guess == code){
            cout << "Correct!" << endl;
            break;
        }
        //if user wants to go again, will run.
        cout << "Incorrect! Want to go again (y/n)? ";
        cin >> choice;
    } while (choice != 'n');

    return 0;
}