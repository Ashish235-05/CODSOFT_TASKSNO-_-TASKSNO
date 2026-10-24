#include <iostream>
using namespace std;

int main () {
    float a , b ; 
    char op ; 

    cout << "Enter First Number :" ;
    cin >> a ;
    cout << "Enter operator ( +,-,*,/):";
    cin >> op ;
    cout << "Enter Second Number :" ;
    cin >> b ;

    switch(op) {
        case '+':
        cout << " Result = " << a + b ;
        break ; 

        case '-' :
        cout << "Result = " << a - b ; 
        break ;

        case '*' :
        cout << " Result = " << a * b ;
        break ;

        case '/' :
        if (b != 0 )
        cout << "Result = " << a / b ;
        else 
        cout << " Cannot divided by Zero! " ;
        break ;
        deafault:
        cout << "Invalid operator! " ;
    }

    return 0 ;
}