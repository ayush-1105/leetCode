class Solution {
public:
    string shortestPalindrome(string s) {
        int n = s.size();
        
        int i = 0; //  i = 0 to n-1
        int j = n - 1; // j = n-1 to 0
        
        // Find the largest prefix palindrome
        while (j >= 0) {
            if (s[i] == s[j]) {
                i++;
            }
            j--;
        }
        
        // calculate remain
        string remain = s.substr(i); // s trim from i to end
        
        // If the entire string is already a palindrome
        // means remain = ""
        if( remain.size()==0 ){ return s; }

        string rev_remain = remain;
        reverse(rev_remain.begin(), rev_remain.end());
        
        // Uncomment Below to see How LPP is printing for each step
        // cout<< rev_remain <<" "<< s.substr(0,i) <<" "<< remain <<endl;
        
        // recurively calculate shortest palindrome in the longest prefix string
        return rev_remain + shortestPalindrome(s.substr(0, i)) + remain;
    }
};