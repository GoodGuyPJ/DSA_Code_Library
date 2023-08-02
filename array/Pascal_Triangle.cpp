#include<bits/stdc++.h>
using namespace std;
 
//  type 1
int func(int n, int r){
    long long res = 1;
    for(int i=0; i<r; i++){
        res = res * (n-i);
        res = res/ (i+1);
    }
    return res;
}

// int main(){
//     // Type 1 solution 
//     //given row and col tell me the element at that place eg:- r=5, c= 3 ans = 6
    
//     int Row, Col;
//     cout<< "enter Row: ";
//     cin>>Row;
//     cout<<endl;
//     cout<<"enter Col: ";
//     cin>>Col;

//     int ans = func(Row-1, Col-1);
//     cout<<endl;
//     cout<<"ans is: ";
//     cout<<ans;


//   return 0;
// }


// Type 2
// print any nth row of pascal triangle


// int main(){
//     int n;
//     cin>>n;
//     int ans =1;
//     cout<<ans<<" ";

//     for(int i =1; i<n; i++){
//         ans = ans* (n-i);
//         ans = ans/ (i);

//         cout<<ans<< " ";
//     }
//     return 0;
// }


//Type 3
//Print all nth row 

vector<int> generateRow(int row){
    long long ans =1;
    vector<int> ansRow;
    ansRow.push_back(1);

    for(int col =1; col<row; col++){
        ans = ans * (row - col);
        ans = ans / (col);
        ansRow.push_back(ans);
    }
    return ansRow;
}

int main(){
    int N;
    cin>>N;

    vector<vector<int>> pascalTriangle;
    for(int i= 0; i<=N; i++){
        pascalTriangle.push_back(generateRow(i));
    }

    for(auto it: pascalTriangle){
        cout<<it<<" ";
    }
    cout<<endl;

    return 0;
}