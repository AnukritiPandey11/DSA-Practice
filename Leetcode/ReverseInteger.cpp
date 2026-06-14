#include <climits>
class Solution {
public:
    int reverse(int x) {
        int newNum=0;
        signed int n=x;
        while(n>0||n<0)
        {
            int dig=n%10;
            if(newNum > INT_MAX/10 || newNum < INT_MIN/10)
            {
                return 0;
            }
            newNum=newNum*10+dig;
            n=n/10;
        }
        return newNum;

        return 0;
        
    }
};
