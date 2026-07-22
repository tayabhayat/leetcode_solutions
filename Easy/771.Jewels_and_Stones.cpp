class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {
        unordered_set<char> jewelSet;

        for (char ch : jewels) {
            jewelSet.insert(ch);
        }

        int count = 0;

        for (char ch : stones) {
            if (jewelSet.count(ch)) {
                count++;
            }
        }
        return count;
    }
};
