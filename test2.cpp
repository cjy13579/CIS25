#include <iostream>
using namespace std;

int main() {    
    float n1, n2, n3;

    cout << "Enter three numbers: ";
    cin >> n1 >> n1 >> n3;
    
    float largest = n1;
    
    //Nested if 
    if (n2 > largest) {
        largest = n2;

        if (n3 > largest) {
            largest = n3;
        }
    } else {
        if (n3 > largest) {
            largest = n3;
        }
    }
    cout << "Largest number: " << largest;

    return 0;
}
