class Solution {
public:
  double largestTriangleArea(vector<vector<int>> &point) {
    int n = point.size();
    double ans = 0.0; // check heron's

    for (int i = 0; i < n - 2; i++) {
      double x1 = point[i][0], y1 = point[i][1];

      for (int j = i + 1; j < n - 1; j++) {
        double x2 = point[j][0], y2 = point[j][1];

        for (int k = j + 1; k < n; k++) {
          double x3 = point[k][0], y3 = point[k][1];

          double a = sqrt((x2 - x1) * (x2 - x1) + (y2 - y1) * (y2 - y1));

          double b = sqrt((x3 - x2) * (x3 - x2) + (y3 - y2) * (y3 - y2));

          double c = sqrt((x1 - x3) * (x1 - x3) + (y1 - y3) * (y1 - y3));

          double s = (a + b + c) / 2.0;

          double area = s * (s - a) * (s - b) * (s - c);

          area = sqrt(abs(area));

          ans = max(ans, area);
        }
      }
    }

    return ans;
  }
};
