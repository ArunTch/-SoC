#include<iostream>
using namespace std;
int main(){
    long long int a;
    cin>>a;
    long long int i=a;
    long long int j=a;
    int s=9;
    int l=0;
    for (; i >0; )
    {
        if (i%10>l)
        {
            l=i%10;
            i/=10;
        }else i/=10;
        
    }
     for (; j >0; )
    {
        if (j%10<s)
        {
            s=j%10;
            j/=10;
        }else j/=10;
        
    }
    cout<<(l-s);
    return 0;
}