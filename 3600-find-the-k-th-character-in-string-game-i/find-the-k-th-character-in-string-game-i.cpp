class Solution {
public:
    char kthCharacter(int k) {
        int val=bitset<32>(k-1).count();
        return 'a'+val;
    }
};