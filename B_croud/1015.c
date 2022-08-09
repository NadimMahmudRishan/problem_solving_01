#include <stdio.h>
#include <math.h>
int main()

{
    double x1, x2, y1, y2, e,r,m;
    scanf("%lf %lf %lf %lf", &x1, &y1, &x2 , & y2);
    r = ((x2 - x1) * (x2 - x1));
        m = ((y2 - y1) * (y2 - y1));
            e = sqrt (r+m);
    printf("%.4lf\n", e);
    return 0;
}