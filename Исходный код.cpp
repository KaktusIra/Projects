#include<stdio.h>
#include<stdlib.h>
int main() {
	int str=0, stlb=0, i=0, j=0;
	int a[100][100];
	scanf_s("%d %d", &str, &stlb);
	for (i = 0; i < str; ++i) {
		for (j = 0; j < stlb; ++j) {
			scanf_s("%d", &a[i][j]);
		}
	};
	for (i = 0; i < str; ++i) {
		for (j = 0; j < stlb; ++j){
			printf("%d", a[i][j]);
		};
		    printf("\n");
	};
	for (j = 0; j < stlb; ++j) {
		for (i = 0; i < str; ++i) {
			printf("%d", a[i][j]);
		};
		printf("\n");
	};
	system("pause");
	return 0;
}