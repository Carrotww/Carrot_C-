// https://leetcode.com/problems/network-delay-time/description/

#include <iostream>
#include <vector>

using namespace std;

class Solution {
    public:
    int networkDelayTime(vector<vector<int>> t_v, int n, int k) {
        vector<int> path(n+1, -1);
        for(int i=0; i < t_v.size(); i++)
        {
            for(int j=0; j < t_v[0].size(); j++)
            {
                cout << t_v[i][j] << endl;
            }
        }
    }
};

class Solution2 {
    public:
    int test(void){
        cout << "test" << endl;
    }
};

int main(void) {
    Solution2 temp;

    Solution temp2;

    temp2.networkDelayTime({{1, 2, 3}, {1, 2, 3}}, 1, 1);

    return 0;
}