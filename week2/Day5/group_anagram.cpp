#include<iostream>
#include<vector>
#include<string>
#include<map>
using namespace std;
vector<vector<string>> groupAng(vector<string>& strs)
{
    int arr[26] = {0};
    string ans = "";
    map<string,vector<string>>mp;
    for(int i=0;i<strs.size();i++)
    {
        fill(arr,arr+26,0);
        for(int j=0;j<strs[i].length();j++)
        {
            arr[strs[i][j]-'a']++;
        }
        ans = "";
        for(int k=0;k<26;k++)
        {
            if(arr[k]==0)
            ans+='#';
            else
            {
                ans+=to_string(arr[k]);
                ans+='#';
            }
        }
        mp[ans].push_back(strs[i]);
    }
    vector<vector<string>>s;
    for(auto &it :mp)
    {
        s.push_back(it.second);
    }
    return s;
}
int main()
{
    vector<string>strs;
    int n;
    cout<<"Enter a size of vector : ";
    cin>>n;
    vector<vector<string>>ans = groupAng(strs);
    // output //
}