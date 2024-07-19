// Reverse Words in a String //
class Solution {
public:
    string reverseWords(string s) {
        string word = "";
        string result = "";
        for(int i=0; i<s.length(); i++){
            if(s[i] != ' ')
                word += s[i];
            else{
                if(!word.empty()){
                    if(!result.empty())
                        result = word + ' ' + result;
                    else
                        result = word;
                    word = "";
                }
            }
        }
        if (!word.empty()){
            if(!result.empty())
                result = word + ' ' + result;
            else
                result = word;
        }
        return result;
    }
};
