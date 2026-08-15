class Solution {
public:
    int elevatorRequests(int n, vector<int>& requests) {
        int count = requests[0]-0;

        for(int i=1;i<requests.size();i++){
            count += abs(requests[i-1] - requests[i]);
        }
        return count;
    }
};