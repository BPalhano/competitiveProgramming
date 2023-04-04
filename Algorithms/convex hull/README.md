# Convex Hull

Given two line segments (p1, q1) and (p2, q2), find if the given line segments intersect with each other.
Before we discuss the solution of this problem, let us define notion of *orientation*. Orientation of an ordered triplet of poinst in the plane can be:

+ Counterclockwise;
+ Clockwise;
+ Collinear;

[oriented_diagram](../../images/oriented_diagram.png)

**How we can use orientation here?**

Two segments (p1, q1) and (p2, q2) intersect if and only if one of the following two conditions is verified:

## General Case

+ (p1,q1,p2) and (p1,q1,q2) have different orientations;
+ (p2,q2,p1) and (p2,q2,q1) have different orientations;

[orientations](../../images/orientation.png)

## Special Case

+ (p1, q1, p2), (p1, q1, q2), (p2, q2, p1) and (p2, q2, q1) are all collinear;
+ the x-projections of (p1, q1) and (p2, q2) intersect;
+ the y-projections of (p1, q1) and (p2, q2) intersect;

[intersect](../../images/intersect.png)

but,  **how this can help us with convex hull problem?**


[convex_hull](../../images/convex_hull_ex_1.png)

We first will study the Jarvis's Algorithm to resolve this problem.

The ideia of Jarvis's Algorithm is simple, we start from the leftmost point (or point with minimum x coordinate value) and we keep wrapping points in counterclockwise direction.

The big question is, given a point as current point, how to find the next point in output?

The main ideia is to use ```orientation( )``` (the same function we build in line_segment problem above). Next point is selected as the point that beats all other points at counterclockwise orientation, i.e., **next point is q if for any other point r, we have ```orientation(p,q,r) = counterclockwise```**.

### Algorithm:

