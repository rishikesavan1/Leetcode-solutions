class Solution {
public:
    char kthCharacter(long long k, vector<int>& operations) {
        // Convert to 0-indexed position
        k--;
        
        // Find how many operations we actually need
        // We need enough operations so that string length >= k+1
        long long length = 1;
        int opsNeeded = 0;
        
        // Calculate minimum operations needed to reach position k
        while (length <= k) {
            length *= 2;
            opsNeeded++;
        }
        
        // Count how many times our character gets incremented
        int increments = 0;
        
        // Work backwards through the operations
        for (int i = opsNeeded - 1; i >= 0; i--) {
            // Current string length before this operation
            length /= 2;
            
            // Check if position k is in the second half
            if (k >= length) {
                // Position k is in the second half
                // Move to corresponding position in first half
                k -= length;
                
                // If this operation is type 1 (increment), count it
                if (operations[i] == 1) {
                    increments++;
                }
            }
            // If k < length, it's in the first half, no change needed
        }
        
        // Apply all increments to starting character 'a'
        // Use modulo 26 to handle wrapping around alphabet
        char result = 'a' + (increments % 26);
        
        return result;
    }
};