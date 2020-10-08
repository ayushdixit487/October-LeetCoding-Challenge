class Solution {
public:
    int nextGreaterElement(int n) {
        auto no = to_string(n);
        next_permutation(no.begin(),no.end());
        auto res = stoll(no);
        return (res > INT_MAX || res <= n) ? -1 : res;
    }
};
