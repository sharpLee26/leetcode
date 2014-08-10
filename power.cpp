class Solution {
public:
    double pow(double x, int n) {
        if(0 == n )
        {
            return 1.0;
        }
        const double EPS = 1e-6;
        bool sign = false, signX = false;
        double result = 1.0;
        if(x >= -EPS && x <= EPS)
        {
            return 0.0;
        }
        if((x >= 1.0 - EPS && x <= 1.0 + EPS) || (x >= -EPS-1.0 && x <= EPS - 1.0))
        {
            if(n %2 == 1 && x <= 0.0)
            {
                return -1.0;
            }
            return 1.0;
        }
        if(n < 0)
        {
            sign = true;
            n = -n;
        }
        if(x < -EPS && n%2 == 1)
        {
            signX = true;
            x = -x;
        }
        while(n)
        {
            if(n&1)
            {
                result *= x;
            }
            x = x*x;
            n >>= 1;
        }
        if(sign)
        {
            result = 1.0 / result;
        }
        if(signX)
        {
            result = -result;
        }
        return result;
        
    }
};
