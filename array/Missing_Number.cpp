#include <bits/stdc++.h>
using namespace std;

//************ BruteForce code  *******************

int MissingNum(int arr[], int n)
{

    for (int i = 1; i <= n; i++)
    {
        int flag = 0;

        for (int j = 0; j < n - 1; j++)
        {
            if (arr[j] == i)
            {
                flag=1;
                break;
            }
        }
        if (flag == 0)
        {
            return i;
        }
    }
    return -1;
}

int main()
{
    int arr[] = {1, 2, 4, 5};
    int n = sizeof(arr) / sizeof(int);

    cout << MissingNum(arr, n);

    return 0;
}





//************ Better code  *******************

int BetterCode(int arr[], int n){
    int hash[n+1] = {0};
    for(int i=0; i<n; i++){
        hash[arr[i]]=1;
    }
    for(int i=1; i<n; i++){
        if(hash[i]==0){
            return i;
        }
    }
    return -1;
}

int main(){
    int arr[] = {1, 2, 4, 5};
    int n = sizeof(arr) / sizeof(int); 
 
    int ans = BetterCode(arr, n);
    cout<<" Missing Number is: "<< ans<<endl;
}


//******************** Optimal code ****************************
//first approach - sum

int SUMmissingNumber(vector<int> &a, int n){
   
    int sum = (n*(n+1))/2;

    int s2 = 0;
    for(int i=0; i<n; i++){
        s2+=a[i];
    }
    int missingNum = sum -s2;

    return missingNum;
}

int main(){
    int N = 5;
    vector<int> a = {1, 2, 4, 5};
    int ans = SUMmissingNumber(a, N);
    cout << "The missing number is: " << ans << endl;
}




//second approach - XOR
 int missingNumXOR(int arr[], int N){
    int xor1=0,  xor2=0;
    int n=N-1;
    for(int i=0; i<n; i++){
        xor2= xor2^arr[i];
        xor1= xor1^(i+1);
    }
    xor1= xor1^N;

    return xor1^xor2;
 }


int main(){
    int arr[] = {1, 2,3, 4, 5, 7};
    int n = sizeof(arr) / sizeof(int);

    int ans = missingNumXOR(arr, n);
    
    cout<<"Missing num using XOR:  " <<ans<<endl;
}