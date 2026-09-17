//This is the correct approach since it utlizes substring
// and works for all test cases
//unlike the previous wrong approach 
//which does not work on s = "0214638" and gives 21 as answer


#include<iostream>
#include<vector>
#include<string>
using namespace std;
class largest_odd_number_in_string_correct_approach
{
    public:
    string largest(string s)
    {
        int ind=0;
        for(int i=s.length()-1;i>=0;i--)
        {
            if((s[i]-'0')%2==1)
            {
                ind=i;
                break;
            }
        }
        int i=0;
        while(i<ind && s[i]=='0')
        {
            i++;
        }
        return s.substr(i,ind-i+1);
    }
};
int main()
{
    largest_odd_number_in_string_correct_approach obj;
    string s="00590";
    string result=obj.largest(s);
    cout << result;
    return 0;

}