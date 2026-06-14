#include <climits>
#include <cstdlib>
class Solution {
public:
    bool isPalindrome(int x) {
        int num=0;
        int n=x;
        if(x<0)
        {
            if(x > INT_MAX/10 || x< INT_MIN/10)
                {
                    return 0;
                }
            int y = -x;
            while(y>0)
            {
                int dig=y%10;
                if(num > INT_MAX/10 || num < INT_MIN/10)
                {
                    return 0;
                }
                num=num*10+dig;
                y=y/10;
            }
            if (num==n)
            {
                return true;
            }
            return false;
        }
        while(x>0)
            {
                int dig=x%10;
                if(num > INT_MAX/10 || num < INT_MIN/10)
                {
                    return 0;
                }
                num=num*10+dig;
                x=x/10;
            }
            if (num==n)
            {
                return true;
            }
            return false;
        
        
    }
};