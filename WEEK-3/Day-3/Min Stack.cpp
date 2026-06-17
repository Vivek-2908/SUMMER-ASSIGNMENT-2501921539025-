class MinStack {
public:
    stack<int> A;
    stack<int> B;

    MinStack() {
    }

    void push(int val) {
        A.push(val);

        if (B.empty() || val <= B.top()) {
            B.push(val);
        }
    }

    void pop() {
        if (A.top() == B.top()) {
            B.pop();
        }
        A.pop();
    }

    int top() {
        return A.top();
    }

    int getMin() {
        return B.top();
    }
};
