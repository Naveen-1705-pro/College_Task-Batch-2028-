#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
using namespace std;
int compress(vector<char>& chars) {
       int i =0;
       int j = 0;
       string ans = "";
    int count = 0;
       while(j<chars.size())
       {
        if(chars[i]!=chars[j])
        {
            if(j-i>1)
            {
                ans+=chars[i];
                ans+=to_string(j-i);
            }
            else
            {
                ans+=chars[i];
            }
            i=j;
        }
        if(j==chars.size()-1)
        {
            if(chars[i]==chars[j])
            {
                if(j-i+1>1)
                {
                    ans+=chars[i];
                    ans+=to_string(j-i+1);
                }
                else if(i==j)
                ans+=chars[i];
            }
        }
        j++;
       } 
       chars.resize(ans.length());
       for(int i=0;i<ans.length();i++)
       {
        chars[i] = (ans[i]);
       }

       return ans.length();
    }
int main()
{
    vector<char>chars;
    int n;
    cout<<"Enter size of vector : ";
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>chars[i];
    }
    int ans = compress(chars);
}