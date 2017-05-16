//
//  Gaussian_Elimination(4*3)
//
//  Created by 江承翰 on 2017/4/5.
//  Copyright © 2017年 江承翰. All rights reserved.
//
#include <iostream>
using namespace std;
template<typename T,size_t M,size_t N>
void row_sub(T (&arr)[M][N],int a,int b,int m)
{
    for(size_t i=0;i<M;i++)
    {
        arr[i][a]*=m;
        arr[i][a]-=arr[i][b];
    }
}
int main(void) {
    int mat[4][3];
    int i,j,k,mul=0;
    cout<<"Please insert your matrix?"<<endl;
    for(i=0;i<3;i++)
    {
        for(j=0;j<4;j++)
        cin>>mat[j][i];
    }
    for(i=2;i>0;i--)//swap to let the biggest x goes below
    {
        for(j=0;j<i;j++)
        {
            if(mat[0][j]>mat[0][j+1])
            {
                for(k=0;k<4;k++)
                    swap(mat[k][j],mat[k][j+1]);
            }
        }
    }
    for(i=0;i<3;i++)//do the subtraction
    {
        for(j=0;j<3;j++)
        {
            if(i==j)
                continue;
            if(!mat[i][j]%mat[i][i])
                mul=mat[i][j]/mat[i][i];
            else
            {
                mul=mat[i][j];
		for(k=0;k<4;k++)
                	mat[k][j]*=mat[i][i];
            }
            row_sub(mat,j,i,mul);
        }
    }
    cout<<"Below is the answer matrix:"<<endl;
    for(i=0;i<3;i++)
    {
        for(j=0;j<4;j++)
            cout<<mat[j][i]<<'\t';
        cout<<endl;
    }
    return 0;
}
