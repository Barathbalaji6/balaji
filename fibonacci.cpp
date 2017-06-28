#include <iostream>
using namespace std;

int main() {
    int n,a=-1,b=1,f;
    cout<<"No of elements in the series: ";
    cin>>n;
    for(int i = 0;i<=n;i++){        
        f = a + b;
        a = b;
        b = f;
        if(f == 0)
            continue;        
        cout <<f<<" ";
    }
    return 0;
}
