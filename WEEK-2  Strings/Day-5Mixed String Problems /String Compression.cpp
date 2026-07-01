class Solution {
public:
    int compress(vector<char>& chars) {
        int i = 0, index = 0;

        while (i < chars.size()) {
            char ch = chars[i];
            int count = 0;

            while (i < chars.size() && chars[i] == ch) {
                count++;
                i++;
            }

            chars[index++] = ch;

            if (count > 1) {
                string A = to_string(count);
                for (char c : A)
                    chars[index++] = c;
            }
        }

        return index;
    }
};
