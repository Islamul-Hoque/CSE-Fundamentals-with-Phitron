#include <bits/stdc++.h>
using namespace std;

int main(){

    // Type-1
    vector<int> v;   // 0 size 
    cout << "V1 size: " << v.size() << endl;

    // Type-2
    vector<int> v2(5);  // 5 size
    cout << "V2 size: " << v2.size() << endl;

    // Type-3
    vector<int> v3(5, 2);  // 5 size & All value = 2
    cout << "V3 contents: ";
    for (int i = 0; i <v3.size(); i++)
        cout << v3[i] << " ";

    cout << endl;

    // Type-4 (vector copy ==> vector to vector) 
    vector<int> v4(5, 3);
    vector<int> v5(v4);

    cout << "V5 copied from V4: ";
    for (int i = 0; i <v5.size(); i++)
        cout << v5[i] << " ";

    cout << endl;

    // Type-5 (vector copy ==> array to vector)
    int a[5] = {1 , 2, 3, 4, 5};
    vector<int> v6(a, a+5);

    cout << "Array a copied into V6: ";
    for (int i = 0; i <v6.size(); i++)
        cout << v6[i] << " ";

    cout << endl;

    // Type-6 (array copy)
    vector<int> v7 = {1 , 2, 3, 4, 5};
    cout << "Array a copied into V7: ";
    for (int i = 0; i <v7.size(); i++)
        cout << v7[i] << " ";

    return 0;
}