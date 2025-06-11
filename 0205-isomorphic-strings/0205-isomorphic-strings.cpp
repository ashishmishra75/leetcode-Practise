class Solution {
public:
    bool isIsomorphic(string s, string t) {
         if (s.length() != t.length()) return false;

        unordered_map<char, char> mapST;  // map from s to t
        unordered_map<char, char> mapTS;  // map from t to s

        for (int i = 0; i < s.length(); ++i) {
            char chS = s[i];
            char chT = t[i];

           
            if (mapST.count(chS)) {
                if (mapST[chS] != chT) return false;
            } else {
                mapST[chS] = chT;
            }

            if (mapTS.count(chT)) {
                if (mapTS[chT] != chS) return false;
            } else {
                mapTS[chT] = chS;
            }
        }

        return true;
    }
};