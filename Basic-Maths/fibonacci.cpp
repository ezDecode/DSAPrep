// ====Easy Method====
/*
#include<bits/stdc++.h>
using namespace std;

int main(){
   int n; 
   cout<< "Enter the Range: ";
   cin>>n;

   int first = 0, second = 1, next;

   for(int i = 0; i < n; i++){
    if(i <= 1){
        next = i;
    }else{
        next = first + second;
        first = second;
        second = next;
    }
    cout<<next<<" ";
   }
   return 0;
}
*/


//++++Advanced Method(Recursive Method)++++


#include<bits/stdc++.h>
using namespace std;

int fibonacci(int n){
    if (n == 0) return 0;
    if (n == 1) return 1;

    return fibonacci(n-1) + fibonacci(n-2);
}

int main(){
   int n;
   cin>>n;

   for(int i = 0; i < n; i++){
    cout<<fibonacci(i)<<" ";
   }

   return 0;
}