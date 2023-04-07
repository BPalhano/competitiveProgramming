#include <bits/stdc++.h>
using namespace std;

struct Point
{
    int x,y;
};

int orientation(Point p, Point q, Point r)
{
    // same function of line_segment.cpp
    int val = (q.y - p.y) * (r.x - q.x) -
              (q.x - p.x) * (r.y - q.y);
    if (val == 0) return 0; //collinear
    return (val > 0)? 1:2;

}

void convexHull(Point points[], int n)
{
    // Prints convex hull of a set of n points

    if ( n < 3) return;

    //Initialize Results:
    vector <Point> hull;

    // Finding the leftmost point:
    int l = 0;
    for (int i = 1; i < n; i++)
        if (points[i].x < points[l].x)
            l=i;

    // Start from leftmost point, keep moving counterclockwise until reach the start point again.
    // This loop runs O(h) times where h is number of points in result or output.

    int p = l, q;

    do
    {
        // Add current point to result
        hull.push_back(points[p]);

        //Search for a point 'q' such that orientation (p,q,x) is counterclockwise for all points 'x'.
        // The idea is to keep track of last visited most counterclockwise point in q.
        // If any point 'i' is more counterclockwise than q, them update q.

        q = (p+1) % n;

        for(int i = 0; i < n; i++)
        {
            // If i is more counterclockwise than current qm then, update q:
            if (orientation(points[p], points[i], points[q]) == 2)
                q = i;
        }

        // Now q is the most counterclockwise with respect to p.
        // Set p as q for next iteration, so that q is added to result 'hull'.

        p = q;
     } while (p != l); // This works until we get the first point again.

    for (int i = 0; i < hull.size(); i++)
        cout << "(" << hull[i].x << ", "
             << hull[i].y << ")\n";

}

int main()
{
    Point points[] = {{0,3} , {2,2}, {2,1},
                      {3,0}, {0,0}, {3,3}};

    int n = sizeof(points) / sizeof(points[0]);
    convexHull(points,n);

    return 0;


}
// Time Complexity: O(m*n), where n is number of input points and m is number of output or hull points (m<=n).
// Worst case: O(n²), i.e, m = n;
// Auiliary Space O(n)
