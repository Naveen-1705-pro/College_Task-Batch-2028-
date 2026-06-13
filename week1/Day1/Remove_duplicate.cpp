// Time complexity --> O(n) and space complexity --> O(n)
// #include<iostream>
// #include<vector>
// using namespace std;
// int main()
// {
//     int n;
//     cout<<"Enter Size of array : ";
//     cin>>n;
//     int arr[n];
//     // input 
//     for(int i=0;i<n;i++)
//     {
//         cin>>arr[i];
//     }
//     vector<int>ans;
//     ans.push_back(arr[0]);
//     int i =1;
//     while(i<n)
//     {
//         if(ans[ans.size()-1]!=arr[i])
//         ans.push_back(arr[i]);
//         i++;
//     }
//     for(int i=0;i<ans.size();i++)
//     {
//         cout<<ans[i]<<" ";
//     }
// }
// Optimized approach --> Time complexity --> O(n) and space complexity --> O(1)
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
    int n;
    cout<<"Enter size of array : ";
    cin>>n;
    vector<int>ans(n);
    for(int i=0;i<n;i++)
    {
        cin>>ans[i];
    }
    for(int i=0;i<ans.size()-1;i++)
    {
        if(ans[i]==ans[i+1])
        {
            ans.erase(ans.begin()+i);
            i--;
        }
    }
    // print
    for(int i=0;i<ans.size();i++)
    {
        cout<<ans[i]<<" ";
    } 
}
