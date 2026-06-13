// Time complexity --> O(n) and space complexity --> O(1)
#include<iostream>
#include<vector>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the size of array : ";
    cin>>n;
    vector<int>nums(n);
    for(int i=0;i<n;i++)
    {
        cin>>nums[i];
    }
    int j = 0;
    for(int i=0;i<nums.size();i++)
    {
        if(nums[i]!=0)
        {
            swap(nums[j],nums[i]);
            j++;
        }
    }
    // print 
    for(int i=0;i<nums.size();i++)
    {
        cout<<nums[i]<<" ";
    }
}