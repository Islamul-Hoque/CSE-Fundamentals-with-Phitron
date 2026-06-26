// #include <bits/stdc++.h>
// using namespace std;

// int main(){
//     int n;
//     cin >> n;

//     // Upper part
//     int left_spaces = 0, middle_space = n-2;

//     for(int i = 0; i < n/2; i++){
//         cout << string(left_spaces, ' ') << "\\" << string(middle_space, ' ') << "/" << endl;

//         left_spaces++;
//         middle_space -=2;
//     }


//     // Middle line
//     cout << string(n/2, ' ') << "X" << endl;

//     // Down part
//     int down_left_spaces = n/2 - 1, down_middle_space = 1;
//     for(int i = n/2+1; i < n; i++){
//         cout << string(down_left_spaces, ' ') << "/" << string(down_middle_space, ' ') << "\\" <<  endl;

//         down_left_spaces--;
//         down_middle_space +=2;
//     }

//     return 0;
// }



// n= sob somoy odd number hobe,
// suppose n=7 hole, 
// total line 7 ta .
// 1) 1st line e shurute \ symble 1ta , er pashe 5 ta space . space er por / symble 1ta.
// 2) 2nd line e shurute 1ta space,tarpor \ symble ekta, tarpor 3 ta space. tarpor / symble ekta, tarpor ekts space
// 3) 3rd line e shurute 2ta space, tarpor \ symble ekta, tarpor 1 ta space. tarpor / symble ekta, tarpor 2ta space
// 4) 4th line e (middle line e) X print hobe.
// er porer 5th, 6th, 7th line gola 3rd, 2nd, 1st line ei rokom.

// orthan middle line er up and down e line gola ulta 
