#include<stdio.h>
#include<pthread.h>
void *func(void *argue);
void *result;
int num[10];
int main()
{
pthread_t th;
pthread_create(&th,NULL,func,NULL);
printf("thread created\n");
pthread_join(th,&result);
printf("thread jouined %s\n",(char*)result);
}
void *func(void *argue)
{
printf("thread arguement is %d\n",(int*)argue);
     int num,c,i;
       c=0;
     printf("*****PRIME NUMBER*****\n\n");
     printf("Enter the number to find it is prime or not :\n  ");
     scanf("%d",&num);
     for(i=2;i<num;i++){
    if(num%i==0){
     c++;break;
    }
     }
    if(c==0)
     {
      printf("Number is prime %d   : ",num);
      }
     else{

     printf("\n\n number is not PRIME  %d  :  ",num);
          }
pthread_exit("end");
}
