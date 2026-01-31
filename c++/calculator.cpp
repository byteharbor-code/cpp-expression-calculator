#include <iostream>
using namespace std;

int main () {
    double a, b;
    char op;

    cout << "enter first number: ";
    cin >> a;

    cout << "enter operator (+ - * /): ";
    cin >> op; 

    cout << "enter second number: "; 
    cin >> b; 

    if (op == '+') { 
        cout << "result: " << a + b << endl;
    }
    else if (op == '-') {
        cout << "result: " << a - b  << endl;
    }
     else if (op == '*') {
        cout << "result: " << a * b << endl;
    }
    else if (op == '/') {
        if (b == 0 )
        cout << "error: Division by zero" << endl;
        else 
        cout << "result: " << a / b << endl;
    }
       else {
          cout << "invalid operator" << endl; 
       }

       return 0;
    }
