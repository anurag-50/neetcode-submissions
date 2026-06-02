class compare{
public:
        bool operator()(vector<int>& p,vector<int>& q) {
            return p[0]*p[0]+p[1]*p[1] < q[0]*q[0]+q[1]*q[1];
        }
};

class Solution {
public:
    vector<vector<int>> kClosest(vector<vector<int>>& points, int k) {
        priority_queue<vector<int>,vector<vector<int>>,compare>pq;
        for(auto &nums :points) {
            pq.push(nums);
            if(pq.size()>k) {
                pq.pop();
            }
        }
        vector<vector<int>>ans;
        while(!pq.empty()) {
            ans.push_back(pq.top());
            pq.pop();
        }
       return ans;
    }
};
