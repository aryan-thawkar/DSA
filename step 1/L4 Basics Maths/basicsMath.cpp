#include<bits/stdc++.h>
using namespace std;

int countDigits(int n){
    int digits = 0;
    while (n > 0){
        n = n /10;
        digits++;
    }
    return digits;
}

int main(){

    cout<<countDigits(123456789);
    return 0;
}