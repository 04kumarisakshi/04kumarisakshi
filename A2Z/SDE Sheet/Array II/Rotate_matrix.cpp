// Problem statement: Given a matrix, your task is to rotate matrix anti-clockwise by 90 degrees.

// Examples:

// Example 1:
// Input:   {{1,2,3},
//           {4,5,6},
//           {7,8,9}}
// Output:
//         3 6 9 
//         2 5 8 
//         1 4 7 
// Explanation: Rotate the matrix anti-clockwise by 90 degrees and return it.
  
  #include <bits/stdc++.h>
  using namespace std;


  //brute force approch

//   int main(){
//     int n=3;
//     int ans[n][n];
//     int matrix[n][n]= {{1,2,3},
//           {4,5,6},
//           {7,8,9}};
//           for(int i=0;i<n;i++)
//           {
//             for(int j=0;j<n;j++)
//             {
//                 ans[j][n-1-i]=matrix[i][j];
//             }
//           }
      
//       for(int i=0;i<n;i++)
//           {
//             for(int j=0;j<n;j++)
//             {
//          cout<<ans[i][j]<<" ";
//             }
//             cout<<endl;
//           }
//   }


//optimal approch


void rotate(vector < vector < int >> & matrix) {
int n= matrix.size();
  
          for(int i=0;i<n;i++)
          {
            for(int j=0;j<i;j++)
            {
                swap(matrix[i][j],matrix[j][i]);
             } 
          }

          for(int i=0;i<n;i++)
          {
            reverse(matrix[i].begin() ,matrix[i].end());
          }

}
int main(){ 
vector < vector < int >> matrix;
   matrix=  {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
   rotate(matrix);
           for (int i = 0; i < matrix.size(); i++) {
    for (int j = 0; j < matrix[0].size(); j++) {
        cout << matrix[i][j] << " ";
    }
    cout <<endl;
    }
}         