#include <iostream>
using namespace std;

// space pattern problems
//      1
//     121
//    12321
//   1234321
//  123454321
// 12345654321
// int main(){
//      int n;cin>>n;
//      int i=1;
//      while(i<=n){
//         int space=n-i;
//         int j=1;
//         while(space){
//             cout<<" ";
//             space= space-1;
//         }
//         while (j<=i)
//         {
//             cout<<j;
//             j=j+1;
//         }
//         int start=i-1;
//         while(start){
//             cout<<start;
//             start--;
//         }
//         cout<<endl;
//         i=i+1;
//      }
// }

// pattern 2
int main()
{
    int row = 1;
    int n;
    cin >> n;
    while (row <= n)
    {
        int col = 1;
        while (col <= n - row + 1)
        {
            cout << col;
            col = col + 1;
        }
        int star1 = row - 1;
        while (star1)
        {
            cout << '*';
            star1 = star1 - 1;
        }
        int star2 = row - 1;
        while (star2)
        {
            cout << '*';
            star2 = star2 - 1;
        }
        int cols = 1;
        while (cols <= n - row + 1)
        {
            cout << n - row - cols + 2;
            cols = cols + 1;
        }
        cout << endl;
        row = row + 1;
    }
}
