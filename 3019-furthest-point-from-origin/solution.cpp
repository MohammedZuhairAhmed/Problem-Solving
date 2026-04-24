class Solution {
public:
    int furthestDistanceFromOrigin(string moves) {
        int lCount = 0;
        int rCount = 0;
        int _Count = 0;

        for(char ch : moves){
            if(ch=='L') lCount++;
            if(ch=='R') rCount++;
            if(ch=='_') _Count++;
        }

        int lMax = lCount + _Count - rCount;
        int rMax = rCount + _Count - lCount;

        return max(abs(lMax), abs(rMax));
    }
};
