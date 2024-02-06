#include <iostream>
using namespace std;
 bool isArithmeticOperator(char ch) {
    
    return ch == '+' || ch == '-' || ch == '*' || ch == '/' || ch == '%' || ch == '=';
}
 
int main() {
    const int bufferSize = 100;
    char input[bufferSize];
 
   
    cout << "Give your expression: ";
    char c;
    int i = 0;
 
  
    while ((c = cin.get()) != '\n' && i < bufferSize - 1) {
        input[i++] = c;
    }
 
    input[i] = '\0'; 
    cout << " found in the input:" << endl;
 
    for (int j = 0; input[j] != '\0'; ++j) {

        if (isArithmeticOperator(input[j])) {
            cout << "Operator: " << input[j] << endl;
        }
    }
 
    return 0;
}