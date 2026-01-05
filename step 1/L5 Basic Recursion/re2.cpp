#include<bits/stdc++.h>
using namespace std;

void printName(int i , int n){
    if(i>n) return;
    cout<<"Aryan "<<endl;
    printName(i+1 , n);
}

void print1toN(int i , int n){
    if(i>n) return;
    cout<<i<<" ";
    print1toN(i+1 , n);
}

void printNto1(int i , int n){
    if(i<1) return;
    cout<<i<<" ";
    printNto1(i-1 , n);
}

int main(){
    printName(1 , 5);
    print1toN(1,10);
    cout<<endl;
    printNto1(10,10);
    return 0;
}