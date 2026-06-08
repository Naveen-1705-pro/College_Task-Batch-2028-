// Brute force approach --> Time complexity --> O(n2) and space complexity --> O(1)
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
//     int target;
//     cout<<"Enter Target value : ";
//     cin>>target;
//     // use of nested for loop 
//     for(int i=0;i<n;i++)
//     {
//         for(int j=0;j<n;j++)
//         {
//             if((arr[i]+arr[j])==target)
//             {
//                 cout<<i+1<<" "<<j+1<<endl;
//                 return 0;
//             }
//         }
//     }
//     cout<<-1<<" "<<-1<<endl;
//     return 0;
// }
 // Optimized approach --> Time complexity --> O(n) and space complexity --> O(n)
 // use of hashmap
#include<iostream>
#include<vector>
#include<hash_map>
#include<map>
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
    int target;
    cout<<"Enter Target value : ";
    cin>>target;
    // hashmap
    map<int,int>mp;
    for(int i=0;i<n;i++)
    {
        mp[arr[i]] = i+1;
    }
    for(int i=0;i<n;i++)
    {
        int diff = target-arr[i];
        if(mp[diff]>0)
        {
            cout<<i+1<<" "<<mp[diff]<<endl;
            return 0;
        }
    }
    cout<<-1<<" "<<-1<<endl;
    return 0;
}