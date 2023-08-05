bool isPalindrome(string s) {
    string alNumStrLow;
    for (char ch : s){
        ch = tolower(ch);
        if (isalnum(ch)){
            alNumStrLow += ch;
        }
    }

    string alNumStrLowOrig = alNumStrLow;
    reverse(alNumStrLow.begin(), alNumStrLow.end());

    if (alNumStrLowOrig == alNumStrLow)
        return true;
    else
       return false;
}
