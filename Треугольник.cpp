#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main() {
    int ax, ay, bx, by, cx, cy, dx, dy;
    scanf("%d %d %d %d %d %d %d %d", &ax, &ay, &bx, &by, &cx, &cy, &dx, &dy);
    if ((abs((ax - cx) * (by - cy) - (bx - cx) * (ay - cy))*0.5 +
        abs((ax - dx) * (by - dy) - (bx - dx) * (ay - dy))*0.5 +
	abs((ax - cx) * (dy - cy) - (dx - cx) * (ay - cy))*0.5) ==
	abs((dx - cx) * (by - cy) - (bx - cx) * (dy - cy))*0.5){
	printf("yes");
	}
	else
            printf("no");
    system("pause");
    return 0;
}