#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>
#include <stdlib.h>
pid_t pid;
int main(void){
        int i, n, parrent, m,P;
        scanf("%d", &n);
        parrent=getpid();
        for (i=0; i<n; ++n){
            pid = fork();
            m=getppid();
            if (m==parrent){
                P=getpid();
                printf("My PID is %d\n",P);
	        printf("End of child's process\n");
            };
        };
} 
