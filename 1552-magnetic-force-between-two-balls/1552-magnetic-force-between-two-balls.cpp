class Solution {
public:
    int maxDistance(vector<int>& position, int m) {
        sort(position.begin(), position.end());
        int start = 1;
        int end = position.back() - position.front();
        int ans = 0;

        while (start <= end) {
            int mid = start + (end - start) / 2;
            int count = 1;
            int lastPosition = position[0];

            for (int i = 1; i < position.size(); i++) {

                if (position[i] - lastPosition >= mid) {
                    count++;
                    lastPosition = position[i];
                }
            }
            if (count >= m) {
                ans = mid;
                start = mid + 1;  
            }
            else {
                end = mid - 1; 
            }
        }

        return ans;
    }
};