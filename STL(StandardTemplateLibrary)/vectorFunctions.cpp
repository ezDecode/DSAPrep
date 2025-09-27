#include<bits/stdc++.h>
using namespace std;

int main() {
    vector<int> v;

    // ----------- Modifiers -----------
    v.push_back(10);       // add at end
    v.push_back(20);
    v.emplace_back(30);    // faster push_back
    v.insert(v.begin() + 1, 15); // insert at index 1
    v.erase(v.begin() + 2);      // erase element at index 2
    v.pop_back();           // remove last element
    // v.clear();            // remove all elements

    // ----------- Element Access -----------
    cout << "First element: " << v.front() << endl;
    cout << "Last element: " << v.back() << endl;
    cout << "Element at index 1: " << v.at(1) << endl;
    cout << "Using operator[] at index 0: " << v[0] << endl;

    // ----------- Capacity -----------
    cout << "Size: " << v.size() << endl;
    cout << "Is empty? " << (v.empty() ? "Yes" : "No") << endl;
    v.resize(5);  // resize vector to size 5 (new elements = 0)
    cout << "Resized size: " << v.size() << endl;

    // ----------- Iterators -----------
    cout << "Elements using begin/end: ";
    for (auto it = v.begin(); it != v.end(); ++it) {
        cout << *it << " ";
    }
    cout << endl;

    cout << "Elements using rbegin/rend: ";
    for (auto it = v.rbegin(); it != v.rend(); ++it) {
        cout << *it << " ";
    }
    cout << endl;

    // ----------- Extra: Algorithm usage -----------
    sort(v.begin(), v.end()); // sort vector
    cout << "Sorted elements: ";
    for (int x : v) cout << x << " ";
    cout << endl;

    return 0;
}
