#include <iostream>
#include <string>
using namespace std;
string duplicatecharacters(const string &str) {
    int n= str.length();
    string final=" "; 
    for (int i=0; i<n; i++) {
       final += str[i];
        final += str[i];
    } 
    return final;
} int main () {
    string str ="cofe";
    string duplicatestring = duplicatecharacters(str);
    cout<<duplicatestring<<endl;
    return 0; 
} 