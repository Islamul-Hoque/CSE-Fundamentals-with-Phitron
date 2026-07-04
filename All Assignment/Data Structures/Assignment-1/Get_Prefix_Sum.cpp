#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    vector<long long int> a(n);

    for (int i = 0; i <n; i++)
        cin >> a[i];

    vector<long long int> pre(n);
    pre[0] = a[0];

    for (int i = 1; i <n; i++)
        pre[i] =pre[i-1] + a[i];

    reverse(pre.begin(), pre.end());

    for(long long int x: pre)
        cout << x << " ";

    return 0;
}


/*

Question Analysis :
আমাকে একটা N সাইজের A নামক array দিবে। এই array কে prefix sum করে নতুন array বানাতে হবে। ওই নতুন array কে reverse order এ print করতে হবে।
Observation :
N এবং A[i] এর constants অনুযায়ী variable এর data type নিতে হবে।
Testcase Analysis :
5
2 4 1 5 3
এই Testcase এর প্রথম লাইনের 5 হলো N এর মান। দ্বিতীয় লাইনে 5 সাইজের array এর এলিমেন্ট গুলা দিয়েছে।
এখানে, [2 4 1 5 3] এই 5 সাইজের array এর prefix sum নির্ণয়:
pre[0] = 2
pre[1] = 2 + 4 = 6
pre[2] = 6 + 1 = 7
pre[3] = 7 + 5 = 12
pre[4] = 12 + 3 = 15
Prefix Sum Array: [2 6 7 12 15]
এই prefix sum array কে reverse order এ print করলে output আসবে:
15 12 7 6 2

*/