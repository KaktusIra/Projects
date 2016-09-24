#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main() {
	int ax, ay, bx, by, cx, cy, dx, dy;
	//scanf_s("%d %d %d %d %d %d %d %d", &x1, &y1, &x2, &y2, &x3, &y3, &x0, &y0);
	scanf_s("%d %d %d %d %d %d %d %d", &ax, &ay, &bx, &by, &cx, &cy, &dx, &dy);
	//if (((((x1 - x0) * (y2 - y1) - (x2 - x1) * (y1 - y0)) * ((x2 - x0) * (y3 - y2) - (x3 - x2) * (y2 - y0))) > 0) &&
		//((((x3 - x0) * (y1 - y3) - (x1 - x3) * (y3 - y0)) * ((x2 - x0) * (y3 - y2) - (x3 - x2) * (y2 - y0))) > 0)) {
		if ((abs((ax - cx) * (by - cy) - (bx - cx) * (ay - cy))*0.5 +
		abs((ax - dx) * (by - dy) - (bx - dx) * (ay - dy))*0.5 +
		abs((ax - cx) * (dy - cy) - (dx - cx) * (ay - cy))*0.5) ==
		abs((dx - cx) * (by - cy) - (bx - cx) * (dy - cy))*0.5){
		printf("yes");
		return 0;
	}
	else
		printf("no");
	system("pause");
	return 0;
}