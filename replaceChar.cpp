#include <iostream>
#include <string>
using namespace std;
void replaceCharactersWithNext(string &str, char ch) {
    int n=str.length();
    for (int i = 0; i < n; i++) {
        if (str[i] == ch) {
                str[i] = ch + 1;
            } 
            }
}
int main() {
    string str = "hello world";
    char ch = 'l';
    replaceCharactersWithNext(str, ch);
    cout << str << endl;

    return 0;
}