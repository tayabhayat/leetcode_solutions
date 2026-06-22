class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int num = 0;

            for(int i = digits.size() - 1; i >= 0; i--){
                if(digits[i] < 9){
                    digits[i]++;
                    return digits;
                }
                digits[i] = 0;
            }
            digits.insert(digits.begin(), 1);
            return digits;




//         for(int i = 0; i < digits.size(); i++){
//             num = num * 10 + digits[i];
//         }
//         num = num + 1;
//         digits.clear();
//         while(num > 0){
//             digits.push_back(num % 10);
//             num /= 10;
//         }
//         reverse(digits.begin(), digits.end());
//         return digits;
    }
};