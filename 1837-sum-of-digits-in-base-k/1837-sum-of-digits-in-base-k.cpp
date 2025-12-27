class Solution {
public:
    int sumBase(int n, int k) {
        long long result = 0;
        long long place = 1;

        while (n > 0) {
            long long rem = n % k;
            result += rem * place;
            place *= 10;
            n /= k;
        }

        long long ans = 0;

        while(result != 0) {
            long long digit = result%10;
            ans += digit;
            result = result/10;
        }

        return ans;


    }
};