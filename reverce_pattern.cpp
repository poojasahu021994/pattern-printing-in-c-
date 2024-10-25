#include <iostream>
using namespace std;
int main(){

// print this pattern
//     *
//   * *
// * * *
    // int row;
    // cout << "enter row value"<<"\n";
    // cin >> row;
    // for(int i=row; i>0; i--){
    //     for(int j=1; j<=row; j++){
    //         if (j >= i) {
    //             cout << "* ";
    //         }
    //         else {
    //             cout << "  ";
    //         }
    //     }
    //      cout << "\n";
    // }
// 2nd approch
// for(int r =1; r<=3; r++){
//     for(int s=3; s>r; s--)
//     {
//         cout << " ";
//     }
//     for(int c=1; c<=r; c++){
//         cout << "*";
//     }
//     cout << "\n";
// }


// for(int r =1; r<=3; r++){
//     for(int s=3; s>=r; s--)
//     {
//         cout << " ";
//     }
//     for(int c=1; c<=r; c++)
//     {
//         cout << r ;
//     }
//     cout << "\n";
// }

// print 
//     A
//   B C
// D E F
//char f ='A';
//for(int r =1; r<=3; r++){
//     for(int s=3; s>=r; s--)
//     {
//         cout << " ";
//     }
//     for(int c=1; c<=r; c++)
//     {
//         cout <<  f;
//         f++;
//     }
//     cout << "\n";
// }

//print this pattern
//      1
//    2 2
//  3 3 3
// for(int r =1; r<=3; r++){
//     for(int s=3; s>=r; s--)
//     {
//         cout << " ";
//     }
//     for(int c=1; c<=r; c++)
//     {
//         cout << r;
//     }
//     cout << "\n";
// }

//print this pattern
//      A
//    B A
//  C B A
for(int r =1; r<=3; r++){
    for(int s=3; s>=r; s--)
    {
        cout << " ";
    }
    for(int c=r; c>=1; c--)
    {
        cout << char(c+64) << "\t" ;
    }
    cout << "\n";
}
}