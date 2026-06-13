// Time complexity ----> O(n) and space complexity --> O(n)
#include<iostream>
#include<vector>
#include<map>
using namespace std;
bool find(int n,int arr[])
{
    map<int,int>mp;
    for(int i=0;i<n;i++)
    {
        if(mp[arr[i]]>0)
        return true;
        mp[arr[i]]++;
    }
    return false;
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
    bool ans = find(n,arr);
    cout<<"Is conatin duplicate : "<<ans<<endl;
}
