#include<iostream>
using namespace std;
template<typename T,size_t M,size_t N>
void row_sub(T (&arr)[M][N])
{
    int i,j;
    for(i=0;i<3;i++)
    {
	for(j=0;j<4;j++)
	    arr[j][i]--;
    }
}
int main(void)
{
	int i,j;
	int mat[4][3];
	cout<<"Please input matrix:"<<endl;
	for(i=0;i<3;i++)
	{
		for(j=0;j<4;j++)
			cin>>mat[j][i];
	}
	row_sub(mat);
	cout<<"Below is the matrix you've inserted minus 1:"<<endl;
	for(i=0;i<3;i++)
	{
		for(j=0;j<4;j++)
			cout<<mat[j][i]<<'\t';
		cout<<endl;
	}
	return 0;
}
