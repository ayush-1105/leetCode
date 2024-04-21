class Solution {
public:
    int numberOfSpecialChars(string word) {
        unordered_set<char> uniquechars(word.begin(), word.end());
        int specialc = 0;
        
        for(char c : word) {
            if(uniquechars.find(tolower(c)) != uniquechars.end() 
              && uniquechars.find(toupper(c)) != uniquechars.end()){
                specialc++;
                uniquechars.erase(tolower(c));
                uniquechars.erase(toupper(c));
            }
        }
        return specialc;
    }
};