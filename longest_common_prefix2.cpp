#include<vector>
#include<string>
#include<algorithm>
#include<iostream>
using namespace std;

class longest_common_prefix2
{
    public:
    string prefix(vector<string> s)
    {
        if(s.empty())
        {
            return "";
        }
        sort(s.begin(),s.end());
        string first=s[0];
        string last=s[s.size()-1];
        string ans="";
        int minLength = min(first.size(), last.size());
        for (int i = 0; i < minLength; i++) 
        {
            if (first[i] != last[i])
            {
                break;
            }
            ans += first[i];
        }
        return ans;
    }
    };
    int main()
    {
        longest_common_prefix2 obj;
        vector<string> s={"interview", "internet", "internal", "interval"};
        string substring=obj.prefix(s);
        cout << substring;

    }
