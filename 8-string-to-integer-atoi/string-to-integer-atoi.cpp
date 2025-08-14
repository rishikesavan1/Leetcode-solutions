class Solution {
public:
    bool isnum(char c) {
        return c >= '0' && c <= '9';
    }

    int myAtoi(string s) {
        long val = 0;
        int i = 0, sign = 1, n = s.size();

        // Skip leading spaces
        while (i < n && s[i] == ' ')
            i++;

        // Handle sign
        if (i < n && (s[i] == '-' || s[i] == '+')) {
            if (s[i] == '-') sign = -1;
            i++;
        }

        // Parse digits
        while (i < n && isnum(s[i])) {
            val = val * 10 + (s[i] - '0');
            if (sign == 1 && val > INT_MAX) return INT_MAX;
            if (sign == -1 && -val < INT_MIN) return INT_MIN;
            i++;
        }

        return (int)(val * sign);
    }
};
