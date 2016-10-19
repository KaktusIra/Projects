#include<stdio.h>
#include<stdlib.h>
int main(){
    int number, i, j, basket;
    scanf("%d", &number);
    int a[100];
    for (i = 0; i < number; ++i) {
	scanf("%d", &a[i]);
    };
    for (i = 1; i < number; ++i) {
	for (j = 0; j < number; ++j){
		if (a[i] < a[i - j]){
			basket = a[i - j];
			a[i - j] = a[i];
			a[i] = basket;
			i = i - 1;
			j = j - 1;
		};
	};
    };
    for (i = 0; i < number; ++i)
    printf("%d", a[i]);
    system("pause");
    return 0;		
}