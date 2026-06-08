// Time complexity --> O(n) and space complexity --> O(1)
#include<iostream>
#include<vector>
using namespace std;
int main()
{
    int n;
    cout<<"Enter Size of array : ";
    cin>>n;
    int arr[n];
    // input 
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int maxi = 0;
    int i =0;
    int j = 1;
    // example --> [7,6,5,4]  ---> max profit == 0 
    while(j<n)
    {
        if(arr[i]<arr[j])
        {
            int diff = arr[j] - arr[i];
            maxi = max(maxi,diff);
        }
        else
        {
             i = j;  // if arr[i]>arr[j]
        }
        j++;
    }
    cout<<"Maximum Profit : "<<maxi<<endl;
    return 0;
}