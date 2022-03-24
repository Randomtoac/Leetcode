#include <iostream>
#include <vector>
#include <unordered_map>
#include <algorithm>
using namespace std;

class SummaryRanges {
private:
    vector<vector<int>> intervals;

public:
    SummaryRanges() {}
    
    void addNum(int val) {
        if (intervals.empty()) intervals = {{val, val}};

        auto right = upper_bound(intervals.begin(), intervals.end(), val, [](int val, auto& itv){
            return val < itv[0];
        });
        auto left = right-1;
        if (right != intervals.begin() && (*left)[0] <= val && val <= (*left)[1]) return;

        bool left_aside = (right != intervals.begin() && (*left)[1] + 1 == val);
        bool right_aside = (right != intervals.end() && (*right)[0] - 1 == val);

        if (left_aside && right_aside) {
            (*left)[1] = (*right)[1];
            intervals.erase(right);
        }
        else if (left_aside) {
            (*left)[1]++;
        }
        else if (right_aside) {
            (*right)[0]--;
        }
        else {
            intervals.insert(right, vector<int>{val, val});
        }
    }
    
    vector<vector<int>> getIntervals() {
        return intervals;
    }
};
