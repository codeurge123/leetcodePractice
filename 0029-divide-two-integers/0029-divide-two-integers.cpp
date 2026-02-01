class Solution {
public:
    int divide(int dividend, int divisor) {
        if (dividend == INT_MIN && divisor == -1)
            return INT_MAX;

        long long dividend1 = llabs((long long)dividend);
        long long divisor1 = llabs((long long)divisor);

        long long s = 0;
        long long e = dividend1;

        long long mid = s + (e - s) / 2;

        long long ans = -1;

        while (s <= e) {
            if (1LL * mid * divisor1 == dividend1) {
                ans = mid;
                break;
            } else if (1LL * mid * divisor1 > dividend1)
                e = mid - 1;
            else {
                ans = mid;
                s = mid + 1;
            }

            mid = s + (e - s) / 2;
        }

        if (dividend > 0 && divisor > 0)
            return ans;
        else if (dividend < 0 && divisor < 0)
            return ans;

        return (int)(0 - ans);
    }
};