#include <stdio.h>
#include <math.h>

typedef struct tocka2D
{
    float x, y;
}tocka2D;
float rastojanie2D (tocka2D t1, tocka2D t2) {
    return sqrt(pow(t2.x - t1.x,2)+pow(t2.y -t1.y,2));
}
typedef struct tocka3D 
{
    float x,y,z;
} tocka3D;
float rastojanie ( tocka3D t3, tocka3D t4) {
    return sqrt(pow(t4.x - t3.x,2)+pow(t4.y-t3.y,2)+pow(t4.z-t3.z,2));
}
int ista_prava(tocka2D t1, tocka2D t2, tocka2D t5)
{
    if((t2.y-t1.y)*(t5.x-t2.x)==(t5.y-t2.y)*(t2.x-t1.x))
        return 1;
    else
        return 0;
}
int main () {
    float x1, y1, x2, y2;
    scanf("%f %f", &x1, &y1);
    scanf("%f %f", &x2, &y2);
    tocka2D t1 ={x1,y1};
    tocka2D t2={x2,y2};
    printf("%.2f\n", rastojanie2D(t1,t2));
    float z1, z2;
    scanf("%f %f", &z1, &z2);
    tocka3D t3={x1,y1,z1};
    tocka3D t4={x2,y2,z2};
    printf("%.2f\n", rastojanie(t3,t4));
    tocka2D t5={z1,z2};
    printf("%d\n", ista_prava(t1,t2,t5));
    return 0;
}
