class MajorityChecker {
public:
     unordered_map<int, vector<int>> idx;
     MajorityChecker(vector<int>& arr) {
       for (auto i = 0; i < arr.size(); ++i) 
           idx[arr[i]].push_back(i);
}
    
int query(int left, int right, int threshold) {
  for (auto &i : idx) {
    if (i.second.size() < threshold) continue;
    auto it1 = lower_bound(begin(i.second), end(i.second), left);
    auto it2 = upper_bound(begin(i.second), end(i.second), right);
    if (it2 - it1 >= threshold) 
        return i.first;
  }
      return -1;
  }
};
