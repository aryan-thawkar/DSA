#include<bits/stdc++.h>
using namespace std;

int sumofN(int n){
    if(n == 0) return 0;
    else return n + sumofN(n-1);
}

int main(){
    cout<<sumofN(5);
    return 0;
}

