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
    // linear vector
    vector<int>ans;
    vector<vector<int>>matrix(row,vector<int>(col));
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {
            ans.push_back(matrix[i][j]);
        }
    }
    // given in problem
    int r;
    cout<<"Enter new row : ";
    cin>>r;
    int c;
    cout<<"Enter new column : ";
    cin>>c;
    matrix.resize(r,vector<int>(c));
    int k = 0;
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            matrix[i][j] = ans[k++];
        }
    }
    // print updated matrix
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            cout<<matrix[i][j]<<" ";
        }
    }
}