#include<bits/stdc++.h>
using namespace std;

int sumofN(int n){
    if(n == 0) return 0;
    else return n + sumofN(n-1);
}

int factorial(int n){
    if(n == 0) return 1;
    return (n * factorial(n-1));
}

int main(){
    cout<<sumofN(5)<<endl;
    cout<<factorial(5)<<endl;
    return 0;
}

