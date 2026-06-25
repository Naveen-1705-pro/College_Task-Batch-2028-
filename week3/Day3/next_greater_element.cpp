#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int find(int m,int s,vector<int>& nums2)
{
    for(int i=s+1;i<nums2.size();i++)
    {
        if(m<nums2[i])
        return nums2[i];
    }
    return -1;
}
vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
      int count = -1;
      for(int i=0;i<nums1.size();i++) 
      {
        count = 0;
        for(int j=0;j<nums2.size();j++)
        {
            if(nums1[i]==nums2[j])
            {
                int n = find(nums1[i],j,nums2);
                nums1[i] = n;
                break;
            }
        }
      } 
      return nums1;
}
int main()
{
    vector<int>nums1;
    vector<int>nums2;
    vector<int>ans = nextGreaterElement(nums1,nums2);
    // output //
}