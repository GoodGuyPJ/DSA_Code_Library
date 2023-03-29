#include <bits/stdc++.h>
using namespace std;

vector<int> findIntersection(vector<int> &a, vector<int> &b)
{
    vector<int> ans;
    int n = a.size();
    int m = b.size();
    vector <int> visited(m, 0);  
    // int visited[m] = {0}; // this created to maintain a visitation of every array
    for (int i = 0; i < n; i++)
    {

        for (int j = 0; j < m; j++)
        {
            if (a[i] == b[j] && visited[j] == 0)
            {
                ans.push_back(a[i]);
                visited[j] = 1;
                break;
            }

            else if (b[j] > a[i])
            {
                break;
                
            }
        }
    }
    return ans;
}

int main()
{
    vector<int> a{1, 2, 2, 3, 3, 4, 5, 6};
    vector<int> b{2, 3, 3, 5, 6, 6, 7};

    vector<int> ans = findIntersection(a, b);

    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i] << " ";
    }

    return 0;
}



//******************** Optamized code **************

#include<bits/stdc++.h>
using namespace std;
 
 vector<int> OptimalInter(vector<int> &A, vector<int> &B){
    int i=0;
    int j=0;

    int n = A.size();
    int m = B.size();
    vector<int> ans;
    while(i<n && j<m){
        if(A[i]<B[j]){
            i++;
        }
        else if(B[j]<A[i]){
            j++;
        }
        else{
            ans.push_back(A[i]);
            i++;
            j++;
        }
    }
    return ans;
 }

int main(){
    vector<int> a{1, 2, 2, 3, 3, 4, 5, 6};
    vector<int> b{2, 3, 3, 5, 6, 6, 7};

    vector<int> Optimalans = OptimalInter(a, b);
 
    for (int i = 0; i < Optimalans.size(); i++)
    {
        cout <<Optimalans[i] << " ";
    }

  return 0;
}