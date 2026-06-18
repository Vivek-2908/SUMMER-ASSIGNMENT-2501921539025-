class MyQueue {
public:
    stack<int> s1, s2;

    MyQueue() {
    }

    void push(int v) {
        s1.push(v);
    }

    int pop() {
        if (s2.empty()) {
            while (!s1.empty()) {
                s2.push(s1.top());
                s1.pop();
            }
        }

        int v = s2.top();
        s2.pop();
        return v;
    }

    int peek() {
        if (s2.empty()) {
            while (!s1.empty()) {
                s2.push(s1.top());
                s1.pop();
            }
        }

        return s2.top();
    }

    bool empty() {
        return s1.empty() && s2.empty();
    }
};
