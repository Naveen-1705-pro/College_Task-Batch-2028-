#include<iostream>
#include<vector>
#include<algorithm>
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
    for(int i=0;i<nums.size();i++)
    {
        nums[i] = nums[i]*nums[i];
    }
    sort(nums.begin(),nums.end());
    // print
    for(int i=0;i<nums.size();i++)
    {
        cout<<nums[i]<<" ";
    }

}