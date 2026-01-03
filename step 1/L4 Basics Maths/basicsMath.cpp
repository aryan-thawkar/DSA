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

int revNumber(int x){
    int rem = 0 ;
        long int rev = 0;
        bool isNegative = x < 0;
        if(isNegative){
            x = x * (-1);
        }
        while(x > 0){
            rem = x % 10;
            rev = (rev * 10) + rem;
            x = x / 10;
        }
        if(isNegative){
            rev = -rev;
        }
        return rev;
}

int main(){

    cout<<countDigits(123456789)<<endl;
    cout<<revNumber(1534236469)<<endl;
    return 0;
}