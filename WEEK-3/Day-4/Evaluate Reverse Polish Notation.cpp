class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<int> s;

        for (int i = 0; i < tokens.size(); i++) {
            string t = tokens[i];

            if (t == "+" || t == "-" || t == "*" || t == "/") {
                int num2 = s.top();
                s.pop();

                int num1 = s.top();
                s.pop();

                if (t == "+") s.push(num1 + num2);
                if (t == "-") s.push(num1 - num2);
                if (t == "*") s.push(num1 * num2);
                if (t == "/") s.push(num1 / num2);
            }
            else {
                s.push(stoi(t));
            }
        }

        return s.top();
    }
};
