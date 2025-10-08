/*
Logic: 
s1: If number less than 2 then not a Prime Number
s2: if Number is == 2 then it's Prime.
s3: even Number Greater than 2 is not prime.
*/



#include<bits/stdc++.h>
using namespace std;

bool isPrime(int num){
    if(num <= 1) return false;

    if(num == 2) return true;

    if(num % 2 == 0) return false;

    for(int i = 3; i <= sqrt(num); i+=2){
        if(num % i == 0) return false;
    }
    return true;
}

// int main(){ 
//    int number;
//    cin>>number;

//    if(isPrime(number)){
//     cout<<"Prime Number";
//    }else{
//     cout<<"Not a Primer Number";
//    }
//    return 0;
// }


//Range based Print Prime Number

int main(){
    int start, end;

    cin>> start >> end;


    for(int i = start; i <= end; i++){
        if(isPrime(i)){
            cout<<i<<" ";
        }
    }
    return 0;
}