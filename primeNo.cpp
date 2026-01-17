#include <iostream>
using namespace std;
int main()
{
    bool isPrime= true ;
    int n;
    cout<<"Enter a number to be checked:";
    cin>>n;
    for(int i=2;i<=n-1;i++)
    {
        if(n%i==0){
            isPrime=false;
            break;
        }
    }
    if(isPrime==true){   
        cout<<"Prime";
    }
    else{
        cout<<"Not prime";
    }
    return 0;
}