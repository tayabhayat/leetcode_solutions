class Solution {
public:
    string addBinary(string a, string b) {
        int i = a.size() - 1;
        int j = b.size() - 1;

        int carry = 0;
        string result = "";

        while (i >= 0 || j >= 0 || carry) {

            int sum = carry;

            if (i >= 0) {
                sum += a[i] - '0';
                i--;
            }

            if (j >= 0) {
                sum += b[j] - '0';
                j--;
            }

            result += (sum % 2) + '0';
            carry = sum / 2;
        }
        reverse(result.begin(), result.end());
        return result;

        // int result = 0;
        // int carry = 0;
        // while(num1 > 0 || num2 > 0){
        //     int rem1 = num1 % 10;
        //     int rem2 = num2 % 10;
        //     if( rem1 + rem2 + carry == 2){
        //         carry = 1;
        //         result = result * 10;
        //     }
        //     else if(rem1 + rem2 + carry == 1){
        //         carry = 0;
        //         result = result * 10 + 1;
        //     }
        //     else if(rem1 + rem2 + carry == 3){
        //         result = result * 10 + 1;
        //         carry  = 1;
        //     }
        //     else{
        //         carry = 0;
        //         result = result * 10;
        //     }
        //     num1 = num1 / 10;
        //     num2 = num2 / 10;
        // }
        // if(carry == 1){
        //         result = result * 10 + 1;
        //         carry = 0;
        //     }
        // string sresult = to_string(result);
        // reverse(sresult.begin(), sresult.end());
        // return sresult;
    }
};