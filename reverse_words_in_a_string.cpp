#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
using namespace std;
class reverse_words_in_a_string
{
    public:
    string reverse(string s)
    {
        vector<string> words;
        string replica="";
        for(int i=0;i<s.size();i++)
        {
            if(s[i]!=' ')
            {
                replica+=s[i];
            }
            else if(!replica.empty())
            {
                words.push_back(replica);
                replica="";
            }
        }
        if(!replica.empty())
        {
            words.push_back(replica);
        }
        
        std::reverse(words.begin(),words.end());
        string ans="";
        for(int i=0;i<words.size();i++)
        {
            ans+=words[i];
            if(i!=words.size()-1)
            {
                ans+=" ";
            }
        }
        return ans;
    }

};
int main() {
    reverse_words_in_a_string obj;
    string s = " The lion in the jungle ";
    cout << obj.reverse(s) << endl;
    return 0;
}