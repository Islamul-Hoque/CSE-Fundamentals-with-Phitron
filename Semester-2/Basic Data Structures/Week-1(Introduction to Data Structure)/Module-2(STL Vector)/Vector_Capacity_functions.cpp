// #include <bits/stdc++.h>
// using namespace std;

// int main(){

//     // 1.size()
//     vector<int> v;
//     cout << "Size = 0 " << "Capacity = " << v.capacity() << endl;  // capacity = 0

//     v.push_back(10);
//     cout << "Size = 1 " << "Capacity = " << v.capacity() << endl;  // capacity = 1

//     v.push_back(20);
//     cout << "Size = 2 " << "Capacity = " << v.capacity() << endl;  // capacity = 2

//     // Size = 3
//     v.push_back(30);
//     cout << "Size = 3 " << "Capacity = " << v.capacity() << endl;  // capacity = 4

//     cout << "-------- Divider --------" << endl;

//     // Size = 4
//     v.push_back(40);
//     cout << "Size = 4 " << "Capacity = " << v.capacity() << endl;  // capacity = 4

//     // Size = 5
//     v.push_back(50);
//     cout << "Size = 5 " << "Capacity = " << v.capacity() << endl;  // capacity = 8
//     // Size = 6
//     v.push_back(60);
//     cout << "Size = 6 " << "Capacity = " << v.capacity() << endl;  // capacity = 8

//     cout << "-------- Divider --------" << endl;

//     cout << "Size: " << v.size() << endl;

//     // 2. clear()
//     // Clears the vector elements. Do not delete the memory, only clear the value.
//     // v.clear();
//     cout << "Size after clear(): " << v.size() << endl;

//     cout << "-------- Divider --------" << endl;

//     cout << "Values after clear(): " << endl;
//     cout << v[0] << endl;
//     cout << v[1] << endl;
//     cout << v[2] << endl;
//     cout << v[3] << endl;
//     cout << v[4] << endl;
//     cout << v[5] << endl;

//     cout << "-------- Divider --------" << endl;

//     // 3.empty()
//     if(v.empty()) cout << "vector is empty" << endl;
//     else cout << "vector in not empty" << endl;

//     cout << "-------- Divider --------" << endl;

//     // 4. Resize func
//     cout << "Before resize: " << v.size() << endl;

//     // Size Decrease
//     v.resize(4);                                    // O(k=6-4) ==> O(2)
//     cout << "After decrease size: " << v.size() << endl;

//     cout << "Value After resize(3): " ;
//     for (int i = 0; i < v.size(); i++)
//         cout << v[i] << " ";

//     cout << endl << "-------- Divider --------" << endl;

//     // Size Increase
//     v.resize(8, 100);                                    // O(k=6-4) ==> O(2)
//     cout << "After increase size: " << v.size() << endl;

//     cout << "Value After resize(3): " ;
//     for (int i = 0; i < v.size(); i++)
//         cout << v[i] << endl;

//     cout << "-------- Divider --------" << endl;
//     return 0;
// }