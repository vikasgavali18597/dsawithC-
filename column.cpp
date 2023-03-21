#include<iostream>
using namespace std;

int main() {

/*
 printing this pattern 
  1 2 3 4
  1 2 3 4
  1 2 3 4
  1 2 3 4
*/
    int n = 5;
    int i = 1;

    while(i < n) {
        int j = 1;
        while(j < n) {
            cout<<j;
            j++;
        }
        cout<<endl;
        i++;
    }
    return 0;
}