// Digits:

#include <bits/stdc++.h>
using namespace std;

int main(){
    int n = 8876;
    // int count = 0;

    // while (n > 0){
    //     int lastDigit = n % 10;
    //     count += 1;
    //     n /= 10;
    // }

    //Or we can do this also: 

    int count = (int)(log10(n)+1); //Result will be same.

    cout<<count<<endl;
    return 0;
}