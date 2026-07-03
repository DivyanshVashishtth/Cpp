#include <iostream>

using namespace std;

int main(){
    int a = 10;
    int b = 15;
    // Airthmatic Operator -->
    int sum = a + b;
    int multiply = a * b;
    int divide = a / b;
    int diffrence = a - b;

    // Bitwise Operator --->
    int rightShift = a >> b;
    int leftShift = a << b;
    int bitwiseOr = a | b;
    int bitwiseAnd = a & b;
    int bitwiseXor = a ^ b ;

    cout << "Sum of a and b is : " << sum << endl;
    cout << "Diffrence of a and b is : " << diffrence << endl;
    cout << "multiplication of a and b : " << multiply << endl;
    cout << "divison of a and b : " << divide << endl;
    cout << "right shift ( a >> b ) : " << rightShift << endl ;
    cout << "left shift ( a << b ) : " << leftShift << endl;
    cout << "bitwise OR ( a | b ) : " << bitwiseOr << endl;
    cout << "bitwise XOR ( a ^ b ) : " << bitwiseXor << endl ; 
    cout << "bitwise AND ( a & b ) : " << bitwiseAnd << endl ;

}