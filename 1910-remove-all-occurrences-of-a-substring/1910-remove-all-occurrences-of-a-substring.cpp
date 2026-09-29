class Solution {
public:
    string removeOccurrences(string s, string part) {
        int position = 0;
        while(s.find(part) != string::npos) {
            position = s.find(part);
            s.erase(position, part.size());
        }
        return s;
    }
};