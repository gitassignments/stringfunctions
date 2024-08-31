#include <iostream>
using namespace std;

int longestWordLength(const char* str) {
    int longestword = 0, currentsize = 0;

    while (*str != '\0') { 
        if (*str == ' ') {
            if (currentsize > longestword) {
                longestword = currentsize;
            }
            currentsize = 0;  
        } else {
            currentsize++; 
        }
        str++; 
    }
    if (currentsize > longestword) {
        longestword = currentsize;
    }

    return longestword;
}

int main() {
    const char f[] = "Shut up!";
    cout << "The length of the longest word is: " << longestWordLength(f) << endl;

    return 0;
}