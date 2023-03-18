#include<iostream>
using namespace std;
bool search(int arr[], int size, int key){
    for(int i=0; i<size; i++){
        if(arr[i]==key){
            return 1;
        }
    }
    return 0;
}

int main(){
    int arr[10]={5, 7, -2, 10, 22, 2, 0, 5, 21, 1};
    cout<<" Enter the elem. to serach "<<endl;
    int key;
    cin>>key;
    bool found= search(arr, 10, key);
    if(found){
        cout<<"key is present"<<endl;
    }
    else{
        cout<<"not present"<<endl;
    }
}