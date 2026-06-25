// Q-1: 
// What will be the output of the v[3] of the following code snippet?
// int a[4] = {12,13,14,15};
// vector<int> v(a, a+4);

// #include <bits/stdc++.h>
// using namespace std;

// int main() {
//     int a[4] = {12, 13, 14, 15};
//     vector<int> v(a, a+4);

//     cout << "Original array elements: ";
//     for (int i = 0; i < 4; i++) cout << a[i] << " ";
//     cout << endl;

//     cout << "Vector elements: ";
//     for (int x : v) cout << x << " ";
//     cout << endl;

//     cout << "Value of v[3]: " << v[3] << endl;

//     return 0;
// }


// Q-2
// #include <bits/stdc++.h>
// using namespace std;

// int main() {
//     vector<int> v = {1, 2, 3, 4};

//     cout << "Original vector: ";
//     for (int x : v) cout << x << " ";
//     cout << endl;

//     // First resize down to 2
//     v.resize(2);
//     cout << "After resize(2): ";
//     for (int x : v) cout << x << " ";
//     cout << endl;

//     // Then resize up to 4
//     v.resize(4);
//     cout << "After resize(4): ";
//     for (int x : v) cout << x << " ";
//     cout << endl;

//     return 0;
// }



// Q-3
// #include <bits/stdc++.h>
// using namespace std;

// int main() {
//     vector<int> v = {10, 11, 12, 13, 14};

//     cout << "Original vector: ";
//     for (int x : v) cout << x << " ";
//     cout << endl;

//     // Insert 20 at index 3
//     v.insert(v.begin()+3, 20);

//     cout << "After inserting 20 at index 3: ";
//     for (int x : v) cout << x << " ";
//     cout << endl;

//     return 0;
// }


// Q-4
// #include <bits/stdc++.h>
// using namespace std;

// int main() {
//     vector<int> v = {1,2,3,4,5};

//     cout << "Original vector: ";
//     for (int x : v) cout << x << " ";
//     cout << endl;

//     v.erase(v.begin()+2, v.end());

//     cout << "After erase(v.begin()+2, v.end()): ";
//     for (int x : v) cout << x << " ";
//     cout << endl;

//     return 0;
// }

// Q-5
// #include <bits/stdc++.h>
// using namespace std;

// int main() {
//     vector<int> v = {10, 20, 30, 40, 50};

//     cout << "Original vector: ";
//     for (int x : v) cout << x << " ";
//     cout << endl;

//     // Way-1: Using v[v.size()-1]
//     cout << "Last element (using v[v.size()-1]): " << v[v.size()-1] << endl;

//     // Way-2: Using v.back()
//     cout << "Last element (using v.back()): " << v.back() << endl;

//     return 0;
// }


// #include <bits/stdc++.h>
// using namespace std;

// int main() {
//     vector<int> v = {10, 20, 30, 40, 50};

//     cout << "Iterating using range-based for loop: ";
//     for (int element : v) {
//         cout << element << " ";
//     }
//     cout << endl;

//     return 0;
// }