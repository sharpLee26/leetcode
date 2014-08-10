class Solution {
public:
    int reverse(int x) {
        bool flag = false;
        if(x < 0)
        {
            flag = true;
        }
        int result = 0, reminder = 1;
        while(x % 10 == 0)
        {
            x /= 10;
            ++reminder;
            if(reminder >= 20)
            {
                break;
            }
        }
        while(x != 0)
        {
            reminder = x % 10;
            result = 10*result + reminder;
            x /= 10;
        }
        
        return result;
        
    }
};
