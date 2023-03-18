#include<bits/stdc++.h>
using namespace std;
 
 int doUnion(int a[], int n, int b[], int m){
    set<int> st;
    for(int i=0; i<n; i++){
        st.insert(a[i]);
    }
    for(int i=0; i<m; i++){
        st.insert(b[i]);
    }
    return st.size();
 }
 
int main(){
    // ques 6
    int n,m;
    cin>>n>>m;
    //here we will use set to find unique element in the arrray
    int a[n], b[m];
    for(int i=0; i<n; i++){
        cin>>a[i];
    }
    for(int i=0; i<m; i++){
        cin>>b[i];
    }

    int sizeafterUnion= doUnion(a, n, b, m);
    cout<<"size of array will be "<<sizeafterUnion<<endl;

  return 0;
}