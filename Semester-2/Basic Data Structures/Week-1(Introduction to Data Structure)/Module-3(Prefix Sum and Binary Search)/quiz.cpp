// Q-1: What is the purpose of a prefix sum algorithm?
// Ans: Calculating the cumulative sum of elements in an array



// Q-2: What is the time complexity of calculating a prefix sum using a loop?
// Ans: O(n)
#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> v(n);

    for (int i = 0; i < n; i++) cin >> v[i];

    vector<int> pre(n);
    pre[0] = v[0];

    for (int i = 1; i < n; i++) {   // O(n)
        pre[i] = pre[i-1] + v[i];
    }

    cout << "Prefix sum array: ";
    for (int x : pre) cout << x << " ";
    cout << endl;

    return 0;
}


// Q-3: What is the time complexity of calculating a range based sum from L to R after calculating prefix sum array?
// Ans: O(1)
#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int a[n], prefix[n];

    for (int i = 0; i < n; i++) 
        cin >> a[i];

    // Build prefix sum array
    prefix[0] = a[0];
    for (int i = 1; i < n; i++) {
        prefix[i] = prefix[i - 1] + a[i];
    }

    // Input range
    int L, R;
    cin >> L >> R;

    // Calculate range sum
    int sum;
    if (L == 0)
        sum = prefix[R];
    else
        sum = prefix[R] - prefix[L - 1];

    cout << "Sum = " << sum << endl;

    return 0;
}


// Q-4: What is the time complexity of binary search in the worst case?
// Ans: O(log N)
#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, val, flag = 0;
    cin >> n;

    int a[n];
    for (int i = 0; i < n; i++)
        cin >> a[i];

    // Target value to search
    cin >> val; 
    int l = 0, r = n - 1;

    // Binary Search loop (O(log n))
    while (l <= r) {
        int mid = (l + r) / 2; 

        if (a[mid] == val) {   
            flag = 1;
            break;
        }
        else if (a[mid] > val)   r = mid - 1;
        else                    l = mid + 1;
    }

    // Print result
    if (flag == 1) cout << "found" << endl;
    else cout << "not found" << endl;

    return 0;
}

// Q-5: Binary search can be applied to which of the following?
// Ans: sorted array


// Q-6: In binary search, what is the index of the middle element in each iteration?
// Ans: (start + end) / 2



// Q-7: In binary search, what is the condition for terminating the search if the target element is not found?
// Ans: When the start index becomes greater than the end index.
// left > right ------> target element array-তে নেই, তাই search terminate হবে।


// Q-8: In prefix sum, what is the value of the last element in the prefix sum array?
// Ans: The sum of all elements in the original array


// Q-9: How can you tell if you found the target value in binary search?
// Ans: Check if the middle element is equal to the target value in every iteration.