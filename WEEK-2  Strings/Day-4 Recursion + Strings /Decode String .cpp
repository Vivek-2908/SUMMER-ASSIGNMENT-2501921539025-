class Solution {
public:
    string decodeString(string s) {
        stack<int> A;
        stack<string> B;
        string curr = "";
        int num = 0;

        for (char c : s) {
            if (isdigit(c))
                num = num * 10 + (c - '0');
            else if (c == '[') {
                A.push(num);
                B.push(curr);
                num = 0;
                curr = "";
            }
            else if (c == ']') {
                string temp = B.top();
                B.pop();

                int k = A.top();
                A.pop();

                while (k--)
                    temp += curr;

                curr = temp;
            }
            else
                curr += c;
        }

        return curr;
    }
};
