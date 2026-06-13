#include<iostream>
#include<vector>
using namespace std;
vector<int> spiralOrder(vector<vector<int>>& matrix) {
        vector<int>ans;
        int n = matrix.size(); // size of the row
        int m = matrix[0].size();  // size of the column
        int count = 0;
        int total = n*m;
        int startingrow = 0;
        int startingcol = 0;
        int endingrow = n-1;
        int endingcol = m-1;
        while(count<total){
            // print the starting row
            for(int i=startingcol;count < total && i<=endingcol;i++){
                ans.push_back(matrix[startingrow][i]);
                count++;
            }
            startingrow++;
            // print the endingcolumn
            for(int i = startingrow; count < total && i<=endingrow;i++){
                ans.push_back(matrix[i][endingcol]);
                count++;
            }
            endingcol--;
            //print the endingrow
            for(int i = endingcol; count < total && i>=startingcol;i--){
                ans.push_back(matrix[endingrow][i]);
                count++;
            }
            endingrow--;
            //print the startingcolumn
            for(int i=endingrow;count < total && i>=startingrow;i--){
                ans.push_back(matrix[i][startingcol]);
                count++;
            }
            startingcol++;
        }
        return ans;
    }
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
     vector<int>ans = spiralOrder(matrix); 
}