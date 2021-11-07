//Brute force with sliding window
class Solution {
public:
    int getMaxRepetitions(string s1, int n1, string s2, int n2) {
        
       int count1 = 0, count2 = 0, i = 0, j = 0; 
        while (count1 < n1) {
            if (s1[i] == s2[j]) {
                j++;
                if (j == s2.size()) {
                    j = 0;
                    count2++;
                }
            }
            i++;
            if (i == s1.size()) {
                i = 0;
                count1++;
            }
        }
        
        return count2 / n2;
    }
};

//better approach
 unordered_map<int, int> kToRepeatCount;
        unordered_map<int, int> nextIndexToK;
        kToRepeatCount[0] = 0;
        nextIndexToK[0] = 0;
        int j = 0, cnt = 0;
        for (int k = 1; k <= n1; ++k) {
            for (int i = 0; i < s1.size(); ++i) {
                if (s1[i] == s2[j]) {
                    ++j;
                    if (j == s2.size()) {
                        j = 0;
                        ++cnt;
                    }
                }
            }
            if (nextIndexToK.find(j) != nextIndexToK.end()) {
                int start = nextIndexToK[j];
                int prefixCount = kToRepeatCount[start];
                int patternCount = (n1 - start) / (k - start) * (cnt - prefixCount);
                int suffixCount = kToRepeatCount[start + (n1 - start) % (k - start)] - prefixCount;
                return (prefixCount + patternCount + suffixCount) / n2;
            }
            kToRepeatCount[k] = cnt;
            nextIndexToK[j] = k;
        }
        return kToRepeatCount[n1] / n2;
