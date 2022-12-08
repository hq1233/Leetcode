class Solution {
public:
    vector<int> constructRectangle(int area) {
        int n = sqrt(area);
        while(area % n != 0) n--;
        return vector<int>{area/n, n};
    }
};