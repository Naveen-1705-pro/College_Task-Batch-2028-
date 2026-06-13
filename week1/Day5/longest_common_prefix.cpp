#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
using namespace std;
    string longestCommonPrefix(vector<string>& strs) {
        string ans = "";
        int count = 0;
        for(int i=0;i<strs[0].length();i++)
        {
            count = 0;
            for(int j=0;j<strs.size();j++)
            {
                    if(strs[0][i]==strs[j][i])
                    {
                        if(i-1>=0 && strs[0][i-1]==strs[j][i-1])
                        count++;
                        else if(!(i-1>=0))
                        count++;
                    }
            }
            if(count==strs.size())
            {
                if(ans.length()>0)
                {
                    if(ans[ans.length()-1]==strs[0][i-1])
                    ans+=strs[0][i];
                }
                else
                {
                    ans+=strs[0][i];
                }
            }
        }
        return ans;
    }
int main()
{
    int n;
    cout<<"Enter size of vector : ";
    cin>>n;
    vector<string>strs;
    for(int i=0;i<i<n;i++)
    {
        cin>>strs[i];
    }
    string ans = longestCommonPrefix(strs);
    // print //
    cout<<ans<<endl;
}