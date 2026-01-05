#include<bits/stdc++.h>
using namespace std;

void print1(int n){
    if(n==5){
        return;
    }
    cout<<n<<endl;
    n++;
    print1(n);
}

int main(){
    int n = 0;
    print1(n);


    return 0;
}