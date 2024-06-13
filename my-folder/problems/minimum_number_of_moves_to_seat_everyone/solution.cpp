class Solution {
public:
    int minMovesToSeat(vector<int>& seats, vector<int>& students) {
        int n=students.size();
        sort(seats.begin(), seats.end());
        sort(students.begin(), students.end());
        int ans=0;
        for(int i=0; i<n; i++){
            ans+=abs(students[i]-seats[i]);
        }
        return ans;
    }
};