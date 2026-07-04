// #include <bits/stdc++.h>
// using namespace std;

// int main(){
//     int t;
//     cin >> t;

//     while (t--) {
//         int n, k, possible = 0;
//         cin >> n >> k;

//         vector<int> v(n);
//         for(int i=0; i<n; i++)
//             cin >> v[i];

//         for (int x = 0; x<=k; x++){
//             int red = x, blue = k-x, flag = 1;

//             for(int a: v){
//                 if(a> 0) {
//                     red +=a;
//                     blue -=a;
//                 }
//                 else if(a< 0) {
//                     red -= (-a);
//                     blue +=(-a);
//                 }
//                 if(red < 0 || blue < 0){
//                     flag = 0;
//                     break;
//                 }

//             }
//             if(flag == 1){
//                 possible = 1;
//                 break;
//             }
//         }

//         if(possible == 1) cout << "Yes" << endl;
//         else cout << "No" << endl;
//     }

//     return 0;
// }