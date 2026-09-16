// This approach is incorrect for the problem.
// It converts the string into an integer and tries to find
// the largest odd number numerically.
// However, the problem asks for the largest odd substring.
// Therefore, converting the entire string to an integer
// loses the substring information needed for the answer.


#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
#include <cmath>

using namespace std;

class largest_odd_number_in_string
{
    public:
    int largest(string s)
    {
        int num=stoi(s);
        int max1=0;
        int max2=0;
        for(int i=1;i<=pow(10,s.size());i=i*10)
        {
            int rem=num%i;
            if(rem>max1 && rem%2==1)
            {
                max1=rem;
            }
            int quotient=num/i;
            if(quotient>max1 && quotient%2==1)
            {
                max2=quotient;
            }
        }
            
        if(max1>=max2)
        {
            return max1;
        }
        else
        {
            return max2;
        }
    }

};
int main() {
    largest_odd_number_in_string obj;
    string s = "0214638";
    int result = obj.largest(s);
    string ans= to_string(result);
    cout << "Largest odd number: " << ans << endl;
    return 0;
}
