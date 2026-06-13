#include<iostream>
using namespace std;
double find(int n,int arr[],int k)
{
    int sum = 0;
    int low = 0;
    int high = k;
    for(int i=0;i<high;i++)
    {
        sum+=arr[i];
    }
    double maxi = (double)sum/k;
    while(high<n)
    {
        int ans = sum-arr[low] + arr[high];
        low++;
        high++;
        double avg = (double)ans/k;
        maxi = max(maxi,avg);
        ans = sum;
    }
    return maxi;
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
    int k;
    cout<<"Enter the length of subarray : ";
    cin>>k;
    double ans = find(n,arr,k);
    cout<<"Maximum Average  : "<<ans<<endl;
}