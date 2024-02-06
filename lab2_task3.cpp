#include <iostream>
using namespace std;
 
void checkForComment(const char* input) {
    bool inComment = false;
 
    for (int i = 0; input[i] != '\0'; ++i) {
 
        if (input[i] == '/' && (input[i + 1] == '/' || input[i + 1] == '*')) {
            inComment = true;
            break;
        }
    }
 
 
    if (inComment) {
           cout << "Contains comment lines." << endl;
    } else {
            cout << "Does not contain comment lines." << endl;
    }
}
 
int main() {
    char input[100];
 
 
      cout << "Enter some text: ";
 
 
    char c;
    int i = 0;
    while ((c = cin.get()) != '\n' && i < 99) {
        input[i++] = c;
    }
    input[i] = '\0';
 
 
    checkForComment(input);
 
    return 0;
}