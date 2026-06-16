#include<iostream>
#include<string>
#include<vector>
using namespace std;
vector<int> findAnagrams(string s, string p) {
        int arr[26] = {0};
        int arr1[26] = {0};
        for(int i=0;i<p.length();i++)
        {
            arr[p[i]-'a']++;
        }
        vector<int>ans;
        if(s.length()<p.length())return ans;
        int left = 0;
        int right = p.length();
        for(int i=0;i<right;i++)
        {
            arr1[s[i]-'a']++;
        }
        int count = 0;
        for(int i=0;i<26;i++)
        {
            if(arr[i]!=arr1[i])
            {
                count++;
                break;
            }
        }
        if(count==0)
        {
            ans.push_back(left);
            while(right<s.length())
            {
                count = 0;
                arr1[s[left]-'a']--;
                arr1[s[right]-'a']++;
                left++;
                right++;
                for(int i=0;i<26;i++)
                {
                    if(arr[i]!=arr1[i])
                    {
                        count++;
                        break;
                    }
                }
                if(count==0)
                ans.push_back(left);
            }
        }
        else
        {
            while(right<s.length())
            {
                count = 0;
                arr1[s[left]-'a']--;
                arr1[s[right]-'a']++;
                left++;
                right++;
                for(int i=0;i<26;i++)
                {
                    if(arr[i]!=arr1[i])
                    {
                        count++;
                        break;
                    }
                }
                if(count==0)
                ans.push_back(left);
            }
        }
        return ans;
    }
int main()
{
    string s;
    cout<<"Enter string : ";
    cin>>s;
    string p;
    cout<<"Enter string : ";
    cin>>p;
    vector<int>ans = findAnagrams(s,p);
}