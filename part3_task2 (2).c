#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>
#include <stdlib.h>
pid_t pid;
int main(void){
        int i, n, parrent, m,P;
        scanf("%d", &n);
        parrent=m=getpid();
        printf("My PID is %d\n",m);
        for (i=0; i<(n/2); ++i){
            if (m==parrent){
                pid = fork();
                m=getppid();
                P=getpid();
                printf("My PID is %d\n",P);
	        printf("End of child's process\n");
                exit(1);
            };
        };
} 
