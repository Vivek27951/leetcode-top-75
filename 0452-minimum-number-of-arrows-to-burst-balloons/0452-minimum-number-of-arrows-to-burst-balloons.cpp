class Solution {
    static bool compare(const vector<int>& a, const vector<int>& b) {
    return a[1] < b[1];
}
public:
    int findMinArrowShots(vector<vector<int>>& points) {
         if (points.empty()) {
        return 0;
    }

    // Sort the balloons based on their end points (xend)
    sort(points.begin(), points.end(), compare);

    int arrows = 1;  // Initialize with one arrow since we always need at least one
    int end_point = points[0][1];

    for (int i = 1; i < points.size(); ++i) {
        if (points[i][0] > end_point) {
            // Current balloon cannot be burst with the same arrow, so we shoot a new arrow
            arrows++;
            end_point = points[i][1];
        }
    }

    return arrows;
    }
};