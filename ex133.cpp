#include<iostream>
using namespace std;

void Matrix_Mul(int a[3][2], int b[2][4]){
    int pro[3][4]={0,0,0,0,0,0,0,0,0,0,0,0};
    for(int i=0;i<3;i++){
        for(int j=0;j<4;j++){
            for(int k=0;k<2;k++)
                pro[i][j]+=a[i][k]*b[k][j];
        }
    }

    for(int i=0;i<3;i++){
        for(int j=0;j<4;j++)
        cout<<pro[i][j]<<" ";
        cout<<endl;
    }
}

int main(){
    int a[3][2]={{1,2},{3,4},{5,6}};
    int b[2][4]={{1,0,1,1},{0,1,0,1}};
    Matrix_Mul(a,b);
    system("pause");
    return 0;
}