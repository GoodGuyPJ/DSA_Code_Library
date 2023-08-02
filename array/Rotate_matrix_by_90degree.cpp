#include<bits/stdc++.h>
using namespace std;
 vector < vector < int >> rotate(vector < vector < int >> & matrix){
    int n = matrix.size();
    vector<vector< int>> rotated(n, vector<int> (n, 0));
    for(int i=0; i<n; i++){
        for(int j =0; j<n; j++){
            rotated[j][n-i-1] = matrix[i][j];
        }
    }
    return rotated;
 }
 
int main(){
    vector<vector<int>> arr = {{1, 2, 3, 4 }, {5, 6, 7, 8}, {9, 10, 11, 12}, {13, 14, 15, 16}};

    vector<vector<int>> rotated = rotate(arr);

    cout<<"The ROtated matrix by 90 is "<<endl;

    for (int i = 0; i < rotated.size(); i++) {
    for (int j = 0; j < rotated[0].size(); j++) {
      cout << rotated[i][j] << " ";
    }
    cout << "\n";
  }
 
  return 0;
}



//Optimal code 
// first tronspose the matrix and the rotate the rows

void rotate(vector < vector < int >> & matrix){
    int n = matrix.size();
    //first transposing the matrix

    for(int i =0; i<n-1; i++){
        for(int j= i+1; j<n; j++){
            swap(matrix[i][j], matrix[j][i]);
        }
    }

    //now reverse the each row of matrix
    for(int i =0; i<n; i++){
        reverse(matrix[i].begin(), matrix[i].end());
    }
}

int main() {
  vector < vector < int >> arr=  {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};;
  
  rotate(arr);
  cout << "Rotated Image" << endl;
  for (int i = 0; i < arr.size(); i++) {
    for (int j = 0; j < arr[0].size(); j++) {
      cout << arr[i][j] << " ";
    }
    cout << "\n";
  }

}