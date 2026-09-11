class Solution {
public:
    int compress(vector<char>& chars) {

        int n = chars.size();

        string str = "";
        int cnt = 1;

        for (int i = 1; i < n; i++) {

            if (chars[i] == chars[i - 1]) {
                cnt++;
            } else {

                str += chars[i - 1];

                if (cnt > 1) {
                    str += to_string(cnt);
                }

                cnt = 1;
            }
        }

        // process last group
        str += chars[n - 1];

        if (cnt > 1) {
            str += to_string(cnt);
        }

        int m = str.size();
        for (int i = 0; i < m; i++) {
            chars[i] = str[i];
        }

        return m;
    }
};