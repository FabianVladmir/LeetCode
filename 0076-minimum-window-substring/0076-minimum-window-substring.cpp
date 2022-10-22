class Solution {
public:
    string minWindow(string s, string t) {
        int n = s.size();
        int m = t.size();
        if(m > n) return "";
        array<int, 128> cnt = {};
        int nz = 0; 
        for (char ch : t) {
            if (!cnt[ch]--) --nz;
        }
        
        
        for (int i = 0; i < size(t); ++i) {
            if (!++cnt[s[i]]) ++nz;
        }
        // Do we have a match already?
        if (!nz) return s.substr(0, size(t));
        
        // Slide the window.
        int start = -1;
        int min_len = numeric_limits<int>::max();
        for (int l = 0, r = size(t); r < size(s); ++r) {
            if (!++cnt[s[r]]) ++nz;
            // While we have a match, shrink the window.
            while (!nz) {
                int len = r - l + 1;
                if (len < min_len) {
                    start = l;
                    min_len = len;
                }
                if (!cnt[s[l++]]--) --nz;
            }
        }
        
        return start != -1 ? s.substr(start, min_len) : "";
        
    }
};