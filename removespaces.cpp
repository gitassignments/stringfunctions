#include <iostream>
#include <string>
using namespace std;
void removespaces(string &str) {
    int n= str.length();
    int f=0;
    for (int i =0; i<n; i++) {
        if(str[i] != ' ') {
            str[f] = str[i];
            f++;
        }
    } str.resize(f);
} int main () {
    string str =" Do not write without spaces, It looks ugly and confusing at the same time";
    removespaces(str);
    cout<<str<<endl;
    return 0;
}