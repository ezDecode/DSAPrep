#include<bits/stdc++.h>
using namespace std;

void checkEvenOdd(int num){
    if(num % 2 == 0){
        cout<< "Even"<<endl;
    }else{
        cout<< "Odd"<<endl;
    }
}


int main(){
   checkEvenOdd(5);
   return 0;
}