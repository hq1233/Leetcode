class Solution {
public:
    int maxIceCream(vector<int>& costs, int coins) {
        int i=0;
        sort(costs.begin(), costs.end());
        for( i=0;i<costs.size()&&coins>=costs[i];i++)
            if(coins>=costs[i]) coins-=costs[i];
        return i;
    }
};