class Solution {
public:
    int maxDistance(vector<int>& position, int m) {
        sort(position.begin(),position.end());
        int l = 1;
        int r = position.back();
        int ans = -1;
        while(l <= r)
        {
            int mid = l + (r - l) / 2;
            int lastPosition = position[0];
            int balls = 1;
            for(int i=1;i<position.size();i++)
            {
                if(position[i] - lastPosition >= mid)
                {
                    lastPosition = position[i];
                    balls++;
                }
            }
            if(balls >= m)
            {
                ans = mid;
                l = mid + 1;
            }
            else
            {
                r = mid - 1;
            }
        }
        return ans;
    }
};