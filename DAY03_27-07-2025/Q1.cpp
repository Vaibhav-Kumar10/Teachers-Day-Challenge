class Solution
{
public:
    vector<int> topKFrequent(vector<int> &nums, int k)
    {
        unordered_map<int, int> freq;
        for (int el : nums)
            freq[el]++;
        auto comp = [](pair<int, int> &a, pair<int, int> &b)
        {
            return a.second < b.second;
        };
        priority_queue<pair<int, int>, vector<pair<int, int>>, decltype(comp)>
            heap(comp);
        for (auto &it : freq)
            heap.push({it.first, it.second});
        vector<int> ans;
        while (k--)
        {
            ans.push_back(heap.top().first);
            heap.pop();
        }
        return ans;
    }
};