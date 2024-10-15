#include<bits/stdc++.h>
using namespace std;
#define windows ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)

int main(){windows;
    int n,c=1;cin>>n;
    char x[n];
    for(int i=0;i<n;i++)cin>>x[i];

    for(int i=1;i<n;i++){
        if(x[i]!=x[i-1])c++;
    }
    cout<<c;
    

    return 0;
}