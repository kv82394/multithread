#include <stdio.h>
#include <pthread.h>
void* rotine(){
    printf("i am in test\n");
    sleep(4);
    printf("end routine\n");
    
}
int main()
{
    pthread_t p1,p2;
    pthread_create(&p1,NULL,&rotine,NULL);
    pthread_create(&p2,NULL,&rotine,NULL);
    pthread_join(p1,NULL);
    pthread_join(p2,NULL);
    return 0;
}
