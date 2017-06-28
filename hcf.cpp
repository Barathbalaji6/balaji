
#include<iostream>
using namespace std;

int main() {
    int firstNum,secondNum;
    cin>>firstNum>>secondNum;
    int  hcf;
    for(int i=1;i<=firstNum&&i<=secondNum;i++){
        if(firstNum%i==0 && secondNum%i == 0 ){
                         hcf=i;
        }
    }
    cout<<"GCD = "<<hcf<<endl;
    return 0;
}
