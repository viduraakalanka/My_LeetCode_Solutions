int reverse(int x) {
    int64_t finalNum = 0;
    while ( x <= -10 || x >= 10 ){
          int rem = x%10;
          x = x/10;
          finalNum = finalNum +rem;
          finalNum *= 10;
    }
    finalNum += x;
            
    if ((finalNum > INT_MAX) || (finalNum < INT_MIN)){
          return 0;
    }else{
          return ((int)finalNum);
    }
}
