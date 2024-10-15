
// UNFINISHED


#include<bits/stdc++.h>
using namespace std;
#define windows ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)

int main(){windows;
    int n;cin>>n;
    vector<int> a,b;
    for(int i=0;i<n;i++){
        int k,x;cin>>k>>x;
        a.push_back(k);
        b.push_back(x);
    }

    for(int i=0;i<n;i++){
        int mx=0;
        for(int j=a[i];j<=b[i];j++){
            string strj = to_string(j);
            int c=0;
            for(char k : strj){
                for(char l : strj){
                    if(k==l){
                        c++;
                        if(mx<c)mx=c;
                        break;
                    }
                }
            }
        }
        cout<<mx<<endl;
    }

    return 0;
}