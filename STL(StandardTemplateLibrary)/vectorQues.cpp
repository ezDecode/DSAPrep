// Questions: Print all elements of {2,4,6,8} using a reverse iterator.

// #include<bits/stdc++.h>
// using namespace std;

// int main(){
//    vector<int> v = {2, 4, 6, 8};

//     for(auto x : v) cout<<x<<" ";
//     for(auto it = v.rbegin(); it != v.rend(); ++it){
//         cout<< *it << " ";
//     }
//    return 0;
// }

// 2: Use find() to check if 6 exists in the vector {1,3,5,7}.

// #include<bits/stdc++.h>
// using namespace std;

// int main(){
//    vector<int> v = {1,3,5,7};
//    //so to find we have to do something like this: find(start_it, end_it, value)

//    return 0;
// }

// 3. Modify every element of {1,2,3} by adding 10 using iterators.

// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {
//     vector<int> v = {1, 2, 3};

//     // with Iterators
//     //    for(auto it = v.begin(); it != v.end(); ++it){
//     //     *it += 10;
//     //    cout<<*it<<" ";
//     //    }

//     // without iterators
//     //  for(auto &x : v){
//     //      x += 10;
//     //      cout<<x<<" ";
//     //  }
//     return 0;
// }