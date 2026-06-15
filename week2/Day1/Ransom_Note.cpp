#include<iostream>
#include<string>
using namespace std;
bool canConstruct(string ransomNote, string magazine) {
        int arr[26] = {0};
        for(int i=0;i<magazine.length();i++)
        {
            arr[magazine[i]-'a']++;
        }
        for(int i=0;i<ransomNote.length();i++)
        {
            if(arr[ransomNote[i]-'a']>0)
            {
                arr[ransomNote[i]-'a']--;
            }
            else
            return false;
        }
        return true;
}
int main()
{
    string ransomNote;
    cout<<"Enter string : ";
    cin>>ransomNote;
    string magazine;
    cout<<"Enter string : ";
    cin>>magazine;
    bool ans = canConstruct(ransomNote,magazine);
    // output //
    cout<<ans<<endl;
}