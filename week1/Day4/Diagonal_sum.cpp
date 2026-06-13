#include<iostream>
#include<vector>
using namespace std;
int main()
{
    int row;
    cout<<"Enter row : ";
    cin>>row;
    int col;
    cout<<"Enter column : ";
    cin>>col;
    vector<vector<int>>matrix(row,vector<int>(col));
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {
            cin>>matrix[i][j];
        }
    }
    int sum = 0;
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {
            if(i==j)
            {
                sum+=matrix[i][j];
            }
            if(i+j==row-1)
            {
                sum+=matrix[i][j];
            }
        }
    }
    cout<<sum<<endl;

}