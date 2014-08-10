class Solution {
public:
    int sqrt(int x) {
        const double EPS = 1e-6;
        double result = 1.0;
        double div = (double)x;
        while(!(div >= result - EPS && div <= result + EPS))
        {
            div = x / result;
            result = (result + div)/2;
        }
        return result;
        
    }
};
