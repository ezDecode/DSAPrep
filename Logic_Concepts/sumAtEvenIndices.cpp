#include<bits/stdc++.h>
using namespace std;

int sumAtEvenIndices(const vector<int>& nums){
    int sum = 0;
    for(int i = 0; i < nums.size(); ++i){
        if(i % 2 == 0){
            sum += nums[i];
        }
    }
    return sum;
}

int main(){
   vector<int> numbers = {10, 20, 30, 40, 50, 60};
   int result = sumAtEvenIndices(numbers);
   cout<< result << endl;
   return 0;
}