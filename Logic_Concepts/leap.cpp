#include<bits/stdc++.h>
using namespace std;

void checkLeap(int year){
    if((year % 400 == 0) || (year % 4 == 0 && year % 100 != 0)){
        cout<<"Leap year"<<endl;
    }else{
        cout<<"Not Leap Year"<<endl;
    }
}

int main(){
   checkLeap(1900);
   return 0;
}