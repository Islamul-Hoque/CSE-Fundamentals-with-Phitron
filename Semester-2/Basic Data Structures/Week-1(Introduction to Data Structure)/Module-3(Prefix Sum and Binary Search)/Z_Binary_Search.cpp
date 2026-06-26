// // Brute force approach O(n*q)
// #include <bits/stdc++.h>
// using namespace std;

// int main(){
//     int n, q;
//     cin >> n >> q;

//     int a[n];
//     for (int  i = 0; i <n; i++)
//         cin >> a[i];

//     while (q--) {   // O(q)
//         int x, flag=0;
//         cin >> x;

//         for (int i = 0; i < n; i++) {  // O(n)
//             if(a[i] == x) {
//                 flag =1;
//             }
//         }
//         if(flag == 1) cout << "found" << endl;
//         else cout << "not found" << endl;
//     }

//     return 0;
// }



// // Optimized approach using Binary Search (O(q*log(n)))
// #include <bits/stdc++.h>
// using namespace std;

// int main(){
//     int n, q;
//     cin >> n >> q;

//     int a[n];
//     for (int  i = 0; i <n; i++)
//         cin >> a[i];

//     sort(a, a+n);  // O(n*log(n))
//     while (q--) {   // O(q)
//         int l=0, r =n-1, val, flag=0;
//         cin >> val;

//         while (l<=r){  // O(log(n))
//             int mid = (l+r)/2;
//             if(a[mid] == val) {
//                 flag =1;
//                 break;
//             }
//             else if(a[mid] > val) r = mid-1;
//             else l = mid+1;
//         }
//         if(flag == 1) cout << "found" << endl;
//         else cout << "not found" << endl;
//     }

//     return 0;
// }

// /*
// --------------------------------------------------------------------
//                 Total time complexity   = O(n*log(n)) +(O(q) * O(log(n))) 
//                                         ==> (O(q*log(n)))
// */
