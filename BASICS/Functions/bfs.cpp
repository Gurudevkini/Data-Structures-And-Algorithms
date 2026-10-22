class Solution {
public:
    int minOperations(vector<int>& nums) {
        int n = nums.size();
        vector<int> target(n);

        for (int i = 0; i < n; i++) {
            target[i] = i;
        }

        if (nums == target) return 0;

        queue<pair<vector<int>, int>> q;
        set<vector<int>> visited;

        q.push({nums, 0});
        visited.insert(nums);

        while (!q.empty()) {
            auto [arr, steps] = q.front();
            q.pop();

            // Operation 1: Reverse the array
            vector<int> rev = arr;
            reverse(rev.begin(), rev.end());

            if (rev == target) return steps + 1;

            if (visited.find(rev) == visited.end()) {
                visited.insert(rev);
                q.push({rev, steps + 1});
            }

            // Operation 2: Rotate left by one
            vector<int> rot = arr;
            rotate(rot.begin(), rot.begin() + 1, rot.end());

            if (rot == target) return steps + 1;

            if (visited.find(rot) == visited.end()) {
                visited.insert(rot);
                q.push({rot, steps + 1});
            }
        }

        return -1;
    }
};