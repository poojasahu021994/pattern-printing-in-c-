#include <iostream>
using namespace std;
int main(){
    int row;
    cout << "Enter row valuse"<< "\n";
    cin >> row; 
    for(int i=1; i<=row; i++){
        for(int c=1;c<i; c++){
            cout << " ";
             }
            for(int r=5; r>=i;r--)
        {
            cout << "*";
        }
       
        cout << "\n";
    }
}