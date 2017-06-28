#include <iostream>
using namespace std;

int main() {
    int a1, a2, max;
    cout << "Enter two numbers: ";
    cin >> a1 >> a2;
    max = (a1 > a2) ? a1 : a2; 
    while(true){
        if (max%a1 == 0 && max%a2 == 0) {
            cout << "LCM = " << max;
            break;
        }
        else
            max+=1;
    }    
    return 0;
}
