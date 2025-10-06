#include <bits/stdc++.h>
using namespace std;

int main(){
    vector<int> v = {1, 2, 3, 4, 5, 6};

    // Accessing the elements using the iterators
    //    auto it = v.begin();
    //    vector<int>::iterator it = v.begin(); // So instead of writing the `vector<int>::iterator` we write the auto. Compiler will automatically figures out the type.
    //    cout<<*it<<endl;
    //    it++;
    //    cout<<*it<<endl;

    // Traversing the elements in the container.

    // Forward Traverse
    // for (auto it = v.begin(); it != v.end(); ++it){
    //     cout << *it << " ";
    // }

    // Backward Transition:
    // for(auto it = v.rbegin(); it != v.rend(); ++it){
    //     cout<< *it <<" ";
    // }


    // Using with STL Algorithms [sort, find, reverse]

    vector<int> srt = {2,5,4,3,1,6};
    sort(srt.begin(), srt.end());

    for(auto x : srt) cout<<x<<" ";
    
    
    return 0;
}