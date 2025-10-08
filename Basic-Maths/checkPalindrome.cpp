#include<bits/stdc++.h>
using namespace std;

int checkPalindrome(int num){
    int orgNumber = num;
    int revNumber = 0;


    int temp = num;
    while(temp != 0){
        int lastDigit = temp % 10;
        revNumber = (revNumber * 10) + lastDigit; //Same concept and Implementation as the Reverse A Number!
        temp /= 10;  
    }
    return revNumber == orgNumber;
}

int main(){
   int number;
   cin>>number;

   if(checkPalindrome(number)){
    cout<<"Palindrome Number";
   }else{
    cout<<"Not a Plaindrome";
   }
   return 0;
}