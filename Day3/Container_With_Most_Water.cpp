// Time complexity --> O(n) and space complexity --> O(1)
#include<iostream>
#include<vector>
#include<climits>
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
    int maxi = INT_MIN;
    int i =0;
    int j = nums.size()-1;
    while(i<j)
    {
        if(nums[i]<=nums[j])
        {
            int ans = j-i;
            int m = nums[i]*ans;
            maxi = max(maxi,m); 
            i++;
        }
        if(nums[i]>=nums[j])
        {
            int ans = j-i;
            int m = nums[j]*ans;
            maxi = max(maxi,m);
            j--;  
        }
    }
    // Output
    cout<<maxi<<endl;
}