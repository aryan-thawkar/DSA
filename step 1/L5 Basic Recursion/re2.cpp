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

void print1toNBacktrach(int i , int n){
    if(i<1) return;
    print1toNBacktrach(i-1 , n);
    cout<<i<<" ";
}

void printNto1Backtrack(int i , int n){
    if(i>n) return;
    printNto1Backtrack(i+1 , n);
    cout<<i<<" ";
}

int main(){
    printName(1 , 5);
    print1toN(1,10);
    cout<<endl;
    printNto1(10,10);
    cout<<endl;
    print1toNBacktrach(10,10);
    cout<<endl;
    printNto1Backtrack(1,10);
    return 0;
}