#include<iostream>
#include<string>
#include<vector>
using namespace std;
bool check(int freq1[],int freq2[]){
    for(int i=0;i<26;i++){
        if(freq1[i] != freq2[i]){  // ye check karega ki count same h ya nhi index par 
            return false;
        }
    }
    return true;
}
    bool checkInclusion(string s1, string s2) {
        int freq1[26] = {0}; // arr1 for count store for the string 1 
        int n = s1.length();
        int m = s2.length();
        // count the frequency of the s1 string character
        for(int i=0;i<s1.length();i++){  // first loop for store the count of the letter 
            freq1[s1[i] - 'a']++;
        }
        int windowsize = s1.length();  // window ka size depend karega number of character in the string 1 windex always start from the zero only index move through the other loop for traverse the string 2
        for(int i=0;i<s2.length();i++){
            int windidx = 0;
            int idx = i;
        int freq2[26] = {0};  // everytime become free for the next count store for the character 
            while(windidx < windowsize && idx < s2.length()){
                freq2[s2[idx] - 'a']++;  // ishme humne idx use kiya hai kiyuuki idx change hoga or fir count badega 
                windidx++; // window ke next element ko check or make size add 
                idx++;
            }
            if(check(freq1,freq2)){  // ye function ko call karega  for check the count same or not for the index require 
                return true;  // then return true 
            }
        }
        return false;  // otherwise this
    }
int main()
{
    string s1;
    cout<<"Enter string s1 : ";
    cin>>s1;
    string s2;
    cout<<"Enter string s2 : ";
    cin>>s2;
    bool ans = checkInclusion(s1,s2);
    // output //
}