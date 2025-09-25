#include "src/raining.hpp"
#include <iostream>
#include <string>
#include <vector>

int main() {
    vector<string> businessNames; // Store all business names here.
    string name; // The business name entered by the user.
    string another; // The answer if the user wants to add another name.

    cout << "Welcome to the Business Sorting Program!" << endl << endl;

    while (true) {
        // Ask the user for a business name.
        cout << "Please enter the name of a business:   "; //space isn't showing when running program??
        getline(cin, name); // This allows spaces in the name.

        // Add the name to our list.
        businessNames.push_back(name);

        // Sort the list alphabetically.
        sortBusinessNames(businessNames);

        // Show the list of businesses so far.
        if (businessNames.size() == 1) {
            cout << endl << "Your business is:" << endl << endl;
        } else {
            cout << endl << "Your businesses are:" << endl << endl;
        }

        // Print each business name.
        for (size_t i = 0; i < businessNames.size(); i++) {
            cout << "    " << businessNames[i] << endl;
        }
        cout << endl;

        // Ask the user if they want to add another business.
        cout << "Another business?   "; //space isn't showing when running program??
        getline(cin, another);

        // If the user does not type y/Y/yes/Yes, exit the loop.
        if (userWantsToContinue(another) == false) {
            break; // End the loop.
        }

        cout << endl; // Blank line before the next loop iteration.
    }

    cout << endl << "Thank you for using the Business Sorting Program!" << endl;

    return 0;
}
