#include<bits/stdc++.h>
using namespace std;
void hanoi(char a,char b,char c,int n){
    if(n>0){
        hanoi(a,c,b,n-1);
        cout<<"Move disc "<<n<<" from "<<a<<" to "<<c<<endl;
        hanoi(b,a,c,n-1);
    }
}

int main(){
    int n;
    cin>>n;
    hanoi('A','B','C',n);
    return 0;
}