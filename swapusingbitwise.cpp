#include<iostream>
#include<string>
using namespace std;

int main( )
{
    int x1,x2;
    cin>>x1>>x2;
    x1=x1^x2;
    x2=x1^x2;
    x1=x1^x2;
    cout<<"first number = "<<x1<<endl<<"second number = "<<x2;
    return 0;
}
