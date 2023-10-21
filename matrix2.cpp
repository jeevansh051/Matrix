#include<iostream>
using namespace std;


int main()
{int mat1[3][3],matadd[3][3],mat2[3][3];
cout<<"Enter the value first of matrix"<<endl;
for(int i=0;i<3;i++){
    for(int j=0;j<3;j++){
      cin>>mat1[i][j];
    }

}

cout<<"Enter the value second of matrix"<<endl;
for(int i=0;i<3;i++){
    for(int j=0;j<3;j++){
      cin>>mat2[i][j];
    }

}


for(int i=0;i<3;i++){
    for(int j=0;j<3;j++){
      matadd[i][j]=mat1[i][j]+mat2[i][j];
    }

}






 cout<<"The matrix is: "<<endl;
for(int i=0;i<3;i++){
    for(int j=0;j<3;j++){
    cout<<matadd[i][j]<<" ";
    }
    cout<<endl;
}

}
