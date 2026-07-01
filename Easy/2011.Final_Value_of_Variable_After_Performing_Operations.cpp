class Solution {
public:
    int finalValueAfterOperations(vector<string>& operations) {
        int x = 0;
        
        while(!(operations.empty())){
            string op = operations.back();
            operations.pop_back();
            if(op == "++X" || op == "X++"){
                x += 1;
            }
            if(op == "--X" || op == "X--"){
                x = x - 1;
            }
        }
        return x;
    }
    
};