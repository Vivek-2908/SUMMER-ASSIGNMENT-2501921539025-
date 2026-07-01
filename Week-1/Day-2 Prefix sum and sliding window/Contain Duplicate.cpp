class Solution {
public:
    bool containsDuplicate(vector<int>& A) {
        unordered_set<int> st;

        for (int A : A) {
            if (st.count(A))
                return true;

            st.insert(A);
        }

        return false;
    }
};
