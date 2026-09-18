#include<vector>
#include<string>
#include<algorithm>
#include<iostream>
using namespace std;

class longest_common_prefix
{
    public:
    string prefix(vector<string> s)
    {
        string s1= s[0];
        string s2= s[1];
        int i=0;
        string substring="";
        while(i<min(s1.size(),s2.size()))
        {
            if(s1[i]==s2[i])
            {
                substring.push_back(s1[i]);
                i++;
            }
            else
            {
                break;
            }
        }
        for(int k=2;k<s.size();k++)
        {
            string common="";
            int i=0;
            string t=s[k];
            while(i<min(substring.size(),s[k].size()))
            {
                if(substring[i]==t[i])
                {
                    common.push_back(substring[i]);i++;
                }
                else
                {
                    break;
                }
            }
            substring=common;
            if(substring=="")
            {
                return"";
            }
        }
        return substring;
        }
    };
    int main()
    {
        longest_common_prefix obj;
        vector<string> s={"interview", "internet", "internal", "interval"};
        string substring=obj.prefix(s);
        cout << substring;

    }
