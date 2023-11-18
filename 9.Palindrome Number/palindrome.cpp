#include <iostream>

using namespace std;

class Solution{
    public:
    bool isPalindrome(int x)
    {
        int original=x;
        long long int reversed =0;
        if(x<0)
        {
            return false;
        }
        while(x!=0)
        {
            int last_digit=x%10;
            reversed=(reversed*10 )+last_digit;
            x=x/10;

        }
        if(original==reversed)
        {
            return true;
        }
        return false;
    }
};

int main()
{
    Solution solution;
    cout<<"enter the number of testcases :"<<endl;
    int testcases;
    cin>>testcases;
    
    while(testcases!=0)
    {
        cout<<"enter an integer :"<<endl;
        int n;
        cin>>n; 
        bool result;
        result=solution.isPalindrome(n);
        if(result)
        {
            cout<<"true"<<endl;
        }
        else{
            cout<<"false"<<endl;
        }

        testcases--;
    }

return 0;
}