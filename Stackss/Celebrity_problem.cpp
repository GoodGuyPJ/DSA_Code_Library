// #include <bits/stdc++.h>
// using namespace std;

// int celebrity(vector<vector<int>> &M, int n)
// {
//     int rowIndex = -1;
//     int colIndex = -1;
//     int ans = -1;
//     vector<int> row(n);
//     vector<int> col(n);
//     for (int i = 0; i < n; i++)
//     {
//         int rowSum = 0;
//         for (int j = 0; j < n; j++)
//         {
//             rowSum += M[i][j];
//         }
//         if (rowSum == 0)
//         {
//             rowIndex = i;
//         }
//         row[i] = rowSum;
//     }
//     int flag = -1;
//     for (int i = 0; i < n; i++)
//     {
//         if (row[i] == 0)
//         {
//             flag = 1;
//         }
//     }
//     if (flag == -1)
//     {
//         return ans;
//     }
//     for (int j = 0; j < n; j++)
//     {
//         int colSum = 0;
//         for (int i = 0; i < n; i++)
//         {
//             colSum += M[i][j];
//         }
//         if (colSum == n - 1 && M[rowIndex][j] == 0)
//         {
//             colIndex = j;
//         }
//         col[j] = colSum;
//     }
//     ans = colIndex;
//     return ans;
// }

// int main(){
//     int n;
//         cin>>n;
//         vector<vector<int> > M( n , vector<int> (n, 0));
//         for(int i=0;i<n;i++)
//         {
//             for(int j=0;j<n;j++)
//             {
//                 cin>>M[i][j];
//             }
//         }

//     cout<<"The celebrity index is: ";

//      int ans = celebrity(M, n);
//     cout<<ans<<endl;

//     return 0;
// }










// ***************************************************************
 

#include<bits/stdc++.h>
using namespace std;
#include<stack>
 
class Solution 
{
    bool Knows(vector<vector<int> >& M, int a, int b, int n){
        if(M[a][b]==1){
            return true;
        }
        else{
            return false;
        }
    }
    public: 
    int celebrity(vector<vector<int> >& M, int n) 
    {
       stack<int> s;
    //    step1 push all element in stack
       for(int i=0; i<n; i++){
        s.push(i);
       } 
    // step2: 
       while(s.size()> 1){
        int a = s.top();
        s.pop();
        
        int b = s.top();
        s.pop();
        
        if(Knows(M, a, b, n)){
            s.push(b);
        }
        else{
            s.push(a);
        }
       }

       int candidate = s.top();
    //step3: single element in stack is potential celeb
    //so verify it

       bool rowCheck = false;
       int zeroCount = 0;
       for(int i=0; i<n; i++){
            if(M[candidate][i] ==0){
                zeroCount++;
            }
       }

       if(zeroCount == n){
        rowCheck = true;
       }
        
        bool colCheck = false;
        int oneCount = 0;
        for(int i=0; i<n; i++){
            if(M[i][candidate] == 1){
                oneCount++;
            }
        }
        
        if(oneCount == n-1){
            colCheck = true;
        }

        if(rowCheck == true && colCheck == true){
            return candidate;
        }
        else{
            return -1;
        }
         
        
    }
};
 

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        vector<vector<int> > M( n , vector<int> (n, 0));
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
                cin>>M[i][j];
            }
        }
        Solution ob;
        cout<<ob.celebrity(M,n)<<endl;

    }
}
 



 