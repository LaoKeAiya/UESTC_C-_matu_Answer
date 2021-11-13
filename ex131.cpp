#include<iostream>
using namespace std;

int main(){
    int tmp,i=0,j=0,count=0;
    int num[10]={-1,-1,-1,-1,-1,-1,-1,-1,-1,-1},even[5]={-1,-1,-1,-1,-1},odd[5]={-1,-1,-1,-1,-1};
    while(count<10){   
        cin>>tmp;
        if(tmp<0)
            break;
        num[count]=tmp;
        count++;
    }

    for(int k=0;k<count;k++){
        if(num[k]%2==0){
            even[i]=num[k];
            i++;
        }
        else{
            odd[j]=num[k];
            j++;
        }
    }

    for(int k=0;k<i;k++){
        for(int l=0;l<i-k-1;l++){
            if(even[l]>even[l+1]){
                tmp = even[l];
                even[l]=even[l+1];
                even[l+1]=tmp;
            }
        }
    }


    for(int k=0;k<j;k++){
        for(int l=0;l<j-k-1;l++){
            if(odd[l]>odd[l+1]){
                tmp=odd[l];
                odd[l]=odd[l+1];
                odd[l+1]=tmp;
            }
        }
    }

    for(int k=0;k<j;k++)
    cout<<odd[k]<<" ";
    for(int k=0;k<i;k++)
    cout<<even[k]<<" ";
    

    system("pause");
    return 0;
}