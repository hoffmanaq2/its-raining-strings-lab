#include "../src/raining.hpp"
#include <algorithm>
#include <cctype>

using namespace std;

// This function sorts the list of business names alphabetically.
void sortBusinessNames(vector<string> &names) {
    sort(names.begin(), names.end());
}

// This function checks if the user typed "y" or "yes" (case-insensitive).
bool userWantsToContinue(const string &answer) {
    string lowerAnswer = "";

    // Convert answer to all lowercase.
    for (size_t i = 0; i < answer.size(); i++) {
        lowerAnswer += tolower(static_cast<unsigned char>(answer[i]));
    }

    // Return true if the answer is "y" or "yes".
    if (lowerAnswer == "y" || lowerAnswer == "yes") {
        return true;
    } else {
        return false;
    }
}
