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

int reverse(int x) {
        int rem = 0;
        int rev = 0;  
        while (x != 0) {
            rem = x % 10;

           
            if ((rev > INT_MAX / 10) || (rev < INT_MIN / 10)) {
                return 0;
            }

            rev = rev * 10 + rem;
            x = x / 10;
        }
        
        return rev;
    }


    bool isPalindrome(int x) {
        int n = x;
        int rev = 0;
        int rem = 0;
        while ( n > 0 ){
            rem = n % 10;
            if ((rev > INT_MAX / 10) || (rev < INT_MIN /10)){
                return 0;
            }
            rev = (rev * 10) + rem;
            n = n / 10;
        }
        if(rev == x){
            return true;
        }else {
            return false;
        }
    }

int main(){

    cout<<countDigits(123456789)<<endl;
    cout<<reverse(1534469)<<endl;
    cout<<isPalindrome(0)<<endl;
    return 0;
}