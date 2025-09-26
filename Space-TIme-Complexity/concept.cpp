// Time and Space Complexity Concepts

/*
Time Complexity: Time complexity is not about the actual time taken to execute a program,
but it's about the number of operations the program performs. It's a way of representing
how the runtime of a program scales with the size of the input.

Space Complexity: Space complexity refers to the total amount of memory used by an
algorithm/program, including the space of input values for execution. Like time complexity,
it's also about how the memory usage scales with the size of the input.

Big O Notation: It is used to describe the upper bound of an algorithm's running time.
It gives the worst-case time complexity.

Some common time complexities are:
O(1) - Constant Time: The execution time does not change with the size of the input.
    Example: Accessing an array element by its index.

O(log n) - Logarithmic Time: The execution time grows logarithmically with the input size.
    This is common in algorithms that divide the problem into smaller pieces in each step, like binary search.

O(n) - Linear Time: The execution time is directly proportional to the input size.
    Example: Traversing an array or a linked list.

O(n log n) - Linearithmic Time: This is common for sorting algorithms like Merge Sort and Heap Sort.

O(n^2) - Quadratic Time: The execution time is proportional to the square of the input size.
    This often happens with nested loops. Example: Bubble Sort, Insertion Sort.

O(2^n) - Exponential Time: The execution time doubles with each addition to the input data set.
    This is often seen in recursive algorithms that solve a problem of size n by recursively solving two or more smaller problems of size n-1.

O(n!) - Factorial Time: The execution time grows factorially with the input size.
    Example: Traveling Salesman Problem using brute-force.

*/

#include <iostream>
#include <vector>
using namespace std;

// O(1) - Constant Time Complexity
void constant_time(vector<int>& arr) {
    if (!arr.empty()) {
        cout << "First element: " << arr[0] << endl;
    }
}

// O(n) - Linear Time Complexity
void linear_time(vector<int>& arr) {
    for (int val : arr) {
        cout << val << " ";
    }
    cout << endl;
}

// O(n^2) - Quadratic Time Complexity
void quadratic_time(int n) {
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            cout << "* ";
        }
        cout << endl;
    }
}

// O(log n) - Logarithmic Time complexity (example with binary search idea)
int binary_search_example(int n) {
    int count = 0;
    for (int i = 1; i < n; i = i * 2) {
        count++;
    }
    return count;
}


int main() {
     vector<int> my_vector = {1, 2, 3, 4, 5};

     cout << "Constant Time Example:" <<  endl;
    constant_time(my_vector);

     cout << "\nLinear Time Example:" <<  endl;
    linear_time(my_vector);

     cout << "\nQuadratic Time Example (for n=3):" <<  endl;
    quadratic_time(3);
    
     cout << "\nLogarithmic Time Example (iterations for n=16): " << binary_search_example(16) <<  endl;

    return 0;
}