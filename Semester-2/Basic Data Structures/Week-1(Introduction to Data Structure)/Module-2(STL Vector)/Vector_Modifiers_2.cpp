// #include <bits/stdc++.h>
// using namespace std;

// int main(){

//     // 6.replace(v.begin(),v.end(),value,replace_value)

//     vector<int> v ={1, 2, 3, 2, 5, 6, 2, 2};
//     cout << "Original vector: ";
//     for(int x : v) cout << x << " ";

//     cout << endl  << endl << "-------- Divider --------" << endl;;

//     // Replace All 
//     replace(v.begin(), v.end(), 2, 100);
//     cout << "Replaced all 2 with 100: " << endl;
//     for(int x : v) cout << x << " ";


//     cout << endl  << endl << "-------- Divider --------" << endl;

//     // Range base replace 
//     replace(v.begin(), v.end()-1, 100, 2);
//     cout << "replace all 2 without last 100: " << endl;
//     for(int x : v)  cout << x << " ";

//     cout << endl  << endl << "-------- Divider --------" << endl;

//     // 7.find(v.begin(),v.end(),V)
//     vector<int> v1 ={1, 2, 3, 2, 5, 6, 2, 2};

//     // way-1
//     vector<int> ::iterator it = find(v1.begin(), v1.end(), 800);

//     // Way-2
//     auto it2 = find(v1.begin(), v1.end(), 2);

//     if(it2 == v1.end())  cout << "Not found" << endl;
//     else cout << "Found" << endl;

//     return 0;
// }