#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cout<<"Array Length:"<<" ";
    cin>>n;
    int a[n];
    cout<<"Array Input:"<<" ";
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    
    sort(a,a+n);
    for(int i=n;i>=0;i--){
        if(a[i-1]!=a[i] && a[i]!=a[i+1]){
            cout<<a[i]<<" ";
        }
    }

    return 0;
}