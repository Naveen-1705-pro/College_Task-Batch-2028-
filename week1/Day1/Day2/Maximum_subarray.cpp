// Time complexity --> O(n) and space complexity ---> O(1)
#include<iostream>
#include <climits>
using namespace std;
int find(int n,int arr[])
{
    int ans = INT_MIN;
    int sum = 0;
    for(int i=0;i<n;i++)
    {
        sum+=arr[i];
        if(sum>ans)
        ans=sum;
        if(sum<0)
        sum = 0;
    }
    return ans;
}
int main()
{
    int n;
    cout<<"Enter the size of array : ";
    cin>>n;
    int arr[n];
    // input
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int ans = find(n,arr);
    cout<<"Maximum sum : "<<ans<<endl;
}