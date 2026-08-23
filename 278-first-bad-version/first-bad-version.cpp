// The API isBadVersion is defined for you.
// bool isBadVersion(int version);

class Solution {
public:
    int firstBadVersion(int n) {
        long long s = 1;
        long long e = n;

        while(s<e){
            long long mid = s+(e-s)/2;

            if(isBadVersion(mid)){
                e = mid;
            }
            else{
                s = mid+1;
            }
        }
        return s;
    }
};