class Solution {
public:
    bool isPossible(vector<int>& arr, double hr, int mid){
        double time=0;
        for(int i=0;i<arr.size()-1;i++)
            time+=ceil((double)arr[i]/mid); //due to waiting we converted it into ceil

        time+=((double)arr.back()/mid); // no train left so no witing time
        if(time<=hr) return true;
        return false;       

    }

    int minSpeedOnTime(vector<int>& dist, double hour) {
        int s=1;
        int e=10000000;
        int ans=-1;

        while(s<=e){
            int mid=(s+e)/2;
            if(isPossible(dist,hour,mid)){
                ans=mid;
                e=mid-1;
            }
            else s=mid+1;
        }
        return ans;
    }
};