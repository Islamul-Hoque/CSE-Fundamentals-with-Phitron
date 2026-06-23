// // Q-1
// // O(N*N+N+N/2)  ===> O(N*N)



// // Q-2
// // for(int i=0;i<N/2;i++)  ===>O(N)


// // Q-3
// // for(int i=1;i<=N;i++) {for(int j=1;j<=M;j++){}}   ===> O(N*M)



// // Q-4
// // for(int i=1;i<=N;i*=10)   ===> O(log(N))


// // Q-5
// // for(int i=1;i*2<=N;i++)   ===> O(N)


// // Q-6
// // for(int i = 1; i*i <= N; i++)  ===> O(sqrt(N))



// // Q-7   ==> time complexity
// #include<bits/stdc++.h>
// using namespace std;

// int main(){
// int n; cin>>n;
// int a[n];

// for(int i=0;i<n;i++)  // O(N)
//     cin>>a[i];

// sort(a,a+n);  // O(N * log(N))

// for(int i=0;i<n;i++)   // O(N)
//     cout<<a[i]<<" ";

// return 0;
// }




// // Q-8  ==> space complexity
// #include<bits/stdc++.h>
// using namespace std;

// int main(){
// int n; cin>>n;
// int a[n];

// for(int i=0;i<n;i++)
//     cin>>a[i];

// sort(a,a+n);

// for(int i=0;i<n;i++)
//     cout<<a[i]<<" ";

// return 0;
// }


// // Q-9  ===> Time complexity
// #include<bits/stdc++.h>
// using namespace std;

// int main(){
// int n; cin>>n;
// int a[n];

// for(int i=0;i<n;i++) 
// cin>>a[i];

// for(int i=0; i<n-1; i++) {
//     for(int j=i+1; j<n; j++) {
//         if(a[i]>a[j]) 
//         swap(a[i],a[j]);
//     }
// }

// for(int i=0;i<n;i++) 
//     cout<<a[i]<<" ";

// return 0;
// }


// // Q-10  ===> Time complexity
// #include<bits/stdc++.h>
// using namespace std;

// int main(){
// int n; cin>>n;

// // Ans: O(N*log(N))
// for(int i=0; i<n-1; i++) {       // O(N)
//     for(int j=n; j>=1; j/=2) {   // O(log(N))
//         cout << i << " " << j << endl ;
//     }
// }

// return 0;
// }

