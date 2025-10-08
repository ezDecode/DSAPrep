#include<bits/stdc++.h>
using namespace std;

int main(){
   int n = 6987;
   int revNum = 0;

   while(n > 0){
    int lastDigit = n % 10;
    n /= 10;
    revNum = (revNum * 10) + lastDigit;
   }
   cout<< revNum << endl;
   return 0;
}