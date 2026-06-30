class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
        vector<int> A;

        if (s.size() < p.size())
            return A;

        vector<int> cntP(26, 0), cntS(26, 0);

        for (int i = 0; i < p.size(); i++) {
            cntP[p[i] - 'a']++;
            cntS[s[i] - 'a']++;
        }

        if (cntP == cntS)
            A.push_back(0);

        
        for (int i = p.size(); i < s.size(); i++) {
            cntS[s[i] - 'a']++;                 
            cntS[s[i - p.size()] - 'a']--;      

            if (cntP == cntS)
                A.push_back(i - p.size() + 1);
        }

        return A;
    }
};
