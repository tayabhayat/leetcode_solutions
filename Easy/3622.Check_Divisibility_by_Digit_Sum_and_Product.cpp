class Solution {
public:
    bool checkDivisibility(int n) {
        int Snum = n;
        int Pnum = n;
        int sum = 0;
        while(Snum != 0){
            int ld = Snum % 10;
            sum += ld;
            Snum /= 10;
        }
        int prod = 1;
        while(Pnum != 0){
            int ld = Pnum % 10;
            prod *= ld;
            Pnum /= 10;
        }
         return n % (sum + prod) == 0;
    }
};