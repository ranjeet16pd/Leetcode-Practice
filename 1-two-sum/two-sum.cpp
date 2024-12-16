class Solution
{
    public:

        static bool comp(pair<int, int> &p1, pair<int, int> &p2)
        {
            return p1.first < p2.first;
        }

    vector<int> twoSum(vector<int> &nums, int target)
    {
        int n = nums.size();
        vector<pair<int, int>> p;
        for (int i = 0; i < n; i++)
        {
            p.push_back({ nums[i],
                i });
        }
        sort(p.begin(), p.end(), comp);

        int l = 0, h = n - 1;
        while (l < h)
        {
            int sum = p[l].first + p[h].first;
            if (sum == target) return {
                p[l].second,
                p[h].second
            };
            if (sum > target) h--;
            else l++;
        }
        return { -1,
            -1 };
    }
};