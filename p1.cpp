#include <iostream>
using namespace std;
int main()
{
    int n=4;
    for(int i=0;i<n;i++){
        n=1;
        for(int j=i+1;j>0;j--){
            cout<<n;
        }
        cout<<'\n';
    }
    return 0;
}