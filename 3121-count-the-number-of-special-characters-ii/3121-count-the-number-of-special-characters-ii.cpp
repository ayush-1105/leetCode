class Solution {
public:
    int numberOfSpecialChars(string word) {
        unordered_map<char, vector<int>> indis;
        for(int i = 0; i < word.length(); ++i){
            if(islower(word[i])) {
                    indis[word[i]].push_back(i);
                }
            }
        int countS = 0;
        for(auto& pair: indis){
                char c = pair.first;
            if(word.find(toupper(c)) != string::npos){
                int upperin = word.find(toupper(c));
                int maxlowin = *max_element(pair.second.begin(), pair.second.end());
                if(maxlowin < upperin){
                    countS++;
                }
                
            }
            }
        return countS;
    }
};