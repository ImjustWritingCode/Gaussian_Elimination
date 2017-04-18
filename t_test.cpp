#include <iostream>
using namespace std;
template<typename T,size_t M,size_t N>
void row_print(T (&arr)[M][N])
{
    cout<<"Below is the matrix you inserted:"<<endl;
    for(size_t i=0;i<N;i++)
    {
	for(size_t j=0;j<M;j++)
    		cout<<arr[j][i]<<'\t';
	cout<<endl;
    }
}
int main(void)
{
	int i,j;
	int mat[4][3];
	cout<<"Please insert your matrix?"<<endl;
	for(i=0;i<3;i++)
	{
		for(j=0;j<4;j++)
			cin>>mat[j][i];
	}
	row_print(mat);
	return 0;
}
