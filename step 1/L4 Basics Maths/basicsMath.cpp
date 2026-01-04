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

bool isArmstrong(int x) {
    int n = x;
    int rem = 0;
    int sum = 0;
    while (n != 0 ){
        rem = n % 10;
        sum = sum + (rem * rem * rem );
        n = n / 10;
    }
    return (x == sum ) ?  true :  false;
}

void printAllDivisor(int x){
    for (int i = 1 ; i <= x ; i++){
        if (x % i == 0){
            cout<<i<<" ";
        }
    }
}

void printAllDivisorOptimized(int x){
    vector<int> ls;
    for(int i = 1 ; (i*i) <= x ; i++){
        if (x % i == 0){
            ls.push_back(i);
            if((x/i) != i){
                ls.push_back(x/i);
            }
        }
    }
    sort(ls.begin(), ls.end());
    for(auto it : ls) cout << it << " ";
}

bool isPrime(int x ){
    for (int i = 2 ; (i*i) <= x ; i++ ){
        if (x % i == 0){
            return false;
        }
    }
    return true;
}

int main(){

    cout<<countDigits(123456789)<<endl;
    cout<<reverse(1534469)<<endl;
    cout<<isPalindrome(0)<<endl;
    cout<<isArmstrong(153)<<endl;
    printAllDivisor(999);
    cout<<endl;
    printAllDivisorOptimized(999);
    cout<<endl;
    cout<<isPrime(18);
    return 0;
}