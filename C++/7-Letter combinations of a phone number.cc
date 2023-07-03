class Solution {
public:
    vector<string> letterCombinations(string digits) {
        //phone number letter map
        map <char,vector<string>> phoneNumToStrMap = {
                        {'2',{"a","b","c"}},
                        {'3',{"d","e","f"}},
                        {'4',{"g","h","i"}},
                        {'5',{"j","k","l"}},
                        {'6',{"m","n","o"}},
                        {'7',{"p","q","r","s"}},
                        {'8',{"t","u","v"}},
                        {'9',{"w","x","y","z"}}};
        
        int strLen = digits.length();
        
        vector <string> letterCombVec;
        //keeps track of letter combinations generated in previous outermost for loop iteration
        vector <string> curLetterCombVec;

        for (int i=0; i<strLen; i++){
            if (letterCombVec.size() != 0){
                curLetterCombVec = letterCombVec;
            }

            letterCombVec.clear();
            vector<string> curVec = phoneNumToStrMap[digits[i]];
 
            if(curLetterCombVec.size() != 0){
                for (string curStr : curLetterCombVec){
                    string tempCurStr = curStr;
                    for(string curLetter : curVec){
                        curStr += curLetter;
                        letterCombVec.push_back(curStr);
                        //Bug fix : we should get the original current string after each innermost for loop iteration
                        curStr = tempCurStr;
                    }
                    
                }
            }else{
                //Initially there are no elements in letterCombVec vector
                for(string curLetter : curVec){
                    letterCombVec.push_back(curLetter);
                }
            }
        }
        return letterCombVec;
    }
};
