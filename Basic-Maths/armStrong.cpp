/*
  Logic Breakdown
  1. Count the number of the Digit
  2. Extract the digit and raise it to the power of Digits
  3. Sum all the powered digits
  4. Compare the sum with original number 
 */ 


 #include<bits/stdc++.h>
 using namespace std;


 bool isArmStrong(int num){
    int OrgNumber = num;
    int sum = 0, digitCount = 0;

    //Step 1: Count the Digit
    int temp = num;
    while(temp != 0){
        digitCount++;
        temp /= 10;
    }

    //Step 2: Sum and Raise to the power:

    temp = num;
    while(temp != 0){
        int digit = temp % 10;
        sum += pow(digit, digitCount);
        temp /= 10;
    }
    return sum == OrgNumber;
 }
//  ==========This code is just to check a given number is Armstrong or not! ==========//
//  int main(){
//     int number;
//     cin>>number;

//     if(isArmStrong(number)){
//         cout<<"Armstrong Number";
//     }else{
//         cout<<"Not an Armstrong Number";
//     }
//     return 0;
//  }



 int main(){
    int start, end;
    cin>> start >> end;

    //This loop just runs through and ensure to check the Armstrong and then print's if Find one!
    for(int i = start; i <= end; i++){
        if(isArmStrong(i)){
            cout<<i<<" ";
        }
    }
    return 0;
 }