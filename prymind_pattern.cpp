#include <iostream>
using namespace std;
int main (){
    // int row;
    // cout << "Enter row" << "\n";
    // cin >> row; 
    // for(int i=1; i<=row; i++){
    //     for(int s=row; s>i; s--){
    //         cout << " ";
    //     }
    //     for(int j=i; j>=1; j--)
    //     {
    //         cout << "* ";
    //     }
    //     cout << "\n";
    // }
//     1 
//    0 1
//   0 1 0 
//  1 0 1 0
// 1 0 1 0 1
    // int row;
    // cout << "Enter row" << "\n";
    // cin >> row; 
    // int r =0;
    // for(int i=1; i<=row; i++){
    //     for(int s=row; s>i; s--){
    //         cout << " ";
    //     }
    //     for(int j=1; j<=i; j++)
    //     {
    //         if(r==0){
    //         cout << "1 " ;
    //         r=1;
    //         }
    //         else{
    //             cout << "0 ";
    //             r=0;
    //         }

    //     }
    //     cout << "\n";
    //  }

// 2nd approch
    int row,a=1,k=0,d;
    cout << "Enter row" << "\n";
    cin >> row; 
    int r =0;
    for(int i=1; i<=row; i++){
        for(int s=row; s>i; s--){
            cout << " ";
        }
        for(int j=1; j<=i; j++)
        {
            d=a;
            a=k;
            k=d;
            cout << d << " ";
        }
        cout << "\n";
     }

}