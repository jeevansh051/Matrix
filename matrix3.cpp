#include<iostream>
using namespace std;


int main()
{int n,m;
cout<<"Enter the number of rows and columns for first matrix:";
cin>>n;
cout<<"Enter the number of rows and columns for second matrix:";
cin>>m;
int mat1[n][n],matadd[n][n],mat2[m][m];
if(m!=n){
    cout<<"The dimensions must be equal";
    return 0;
}
cout<<"Enter the value first of matrix"<<endl;

for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){
      cin>>mat1[i][j];
    }

}

cout<<"Enter the value second of matrix"<<endl;
for(int i=0;i<3;i++){
    for(int j=0;j<3;j++){
      cin>>mat2[i][j];
    }

}


for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){
      matadd[i][j]=mat1[i][j]+mat2[i][j];
    }

}

cout<<"The matrix is: "<<endl;
for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){
    cout<<matadd[i][j]<<" ";
    }
    cout<<endl;
}

}