class Solution {
public:
    bool isPalindrome(int x) {
        if (x<0){
            return false;
        }else{
            std::string orig = std::to_string(x);
            std::string rev = orig;
            std::reverse(rev.begin(), rev.end());
            if (orig.compare(rev)==0){
                return true;
            }
            else{
                return false;
            }
        }
    }
};
