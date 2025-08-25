// Constructing the Array (Problem 1353C)
// Statement: Construct an array by choosing its elements in a specific order based on the maximum segments continuously, then track the order in which elements were chosen.

#include <iostream>
#include <queue>
#include <vector>
using namespace std;

struct Segment {
    int left, right, length;
    Segment(int l, int r) : left(l), right(r), length(r - l + 1) {}
    bool operator<(const Segment& other) const {
        if (length == other.length)
            return left > other.left;
        return length < other.length;
    }
};

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n + 1, 0);
        priority_queue<Segment> pq;
        pq.push(Segment(1, n));

        for (int i = 1; i <= n; i++) {
            Segment seg = pq.top();
            pq.pop();
            int l = seg.left, r = seg.right;
            int mid;
            int len = r - l + 1;
            if (len % 2 == 1)
                mid = (l + r) / 2;
            else
                mid = (l + r - 1) / 2;

            a[mid] = i;

            if (mid - 1 >= l)
                pq.push(Segment(l, mid - 1));
            if (mid + 1 <= r)
                pq.push(Segment(mid + 1, r));
        }

        for (int i = 1; i <= n; i++)
            cout << a[i] << " ";
        cout << "\n";
    }

    return 0;
}
