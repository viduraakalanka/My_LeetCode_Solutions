class Solution {
public:
    int romanToInt(string s) {
        int sum = 0;
        char prev= 'Z';
        for (char ch : s){
            
            if (ch == 'M' && prev == 'C'){
                sum += 800;
            }
            else if (ch == 'D' && prev == 'C'){
                sum += 300;
            }
            else if (ch == 'C' && prev == 'X'){
                sum += 80;
            }
            else if (ch == 'L' && prev == 'X'){
                sum += 30;
            }
            else if (ch == 'X' && prev == 'I'){
                sum += 8;
            }
            else if (ch == 'V' && prev == 'I'){
                sum += 3;
            }
            
            else if (ch == 'M'){
                sum += 1000;
            } 

            else if (ch == 'D'){
                sum += 500;
            }

            else if (ch == 'C'){
                sum += 100;
            } 

            else if (ch == 'L'){
                sum += 50;
            }

            else if (ch == 'X'){
                sum += 10;
            } 

            else if (ch == 'V'){
                sum += 5;
            }

            else if(ch == 'I'){
                sum += 1;
            }
            prev = ch;
        }
        return sum;
    }
};
