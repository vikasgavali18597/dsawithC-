#include<iostream>
using namespace std;

int main() {
    int a = 4;
    int b = 6;
    int ad = a & b;
    int o = a | b;
    int x = a ^ b;
    cout<<"a & b = "<< ad <<endl;
    cout<<"a | b = "<< o <<endl;
   // cout<<"a ~ b "<< a ~ b <<endl;
    cout<<"a ^ b = "<< x <<endl;
    return 0;
}