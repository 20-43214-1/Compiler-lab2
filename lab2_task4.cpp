#include <iostream>
using namespace std;
 
bool isAlphabetOrUnderscore(char ch) {
    return (ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z') || (ch == '_');
}
 
bool isAlphaNumericOrUnderscore(char ch) {
    return isAlphabetOrUnderscore(ch) || (ch >= '0' && ch <= '9');
}
 
bool isIdentifier(const char* input) {

    if (!isAlphabetOrUnderscore(input[0])) {
        return false;
    }
 
 
    for (int i = 1; input[i] != '\0'; ++i) {
        if (!isAlphaNumericOrUnderscore(input[i])) {
            return false;
        }
    }
 
    return true;
}
 
int main() {
    const int bufferSize = 100;
    char input[bufferSize];
 

    cout << "Enter a potential identifier: ";
    cin >> input;
 

    if (isIdentifier(input)) {
        cout << "It is an identifier." << endl;
    } else {
        cout << "It is not an identifier." << endl;
    }
 
    return 0;
}





