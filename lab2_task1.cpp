#include <iostream>
using namespace std;

    
    
 
bool isNumericConstant(const char* input) {
    while (*input != '\0') {
        if (*input < '0' || *input > '9') {
            return false; 
        }
        ++input;
    }
 
    return true; 
}
 
int main() {
    const int bufferSize = 100;
    char input[bufferSize];
 
    cout << "Enter a value: ";
    cin.getline(input, bufferSize);
 
    if (isNumericConstant(input)) {
        cout << "Numeric constant" <<endl;
    } else {
    cout << "Not numeric" <<endl;
    }
 
    return 0;
}
}
