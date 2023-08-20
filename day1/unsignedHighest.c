#include<stdio.h>
#include<math.h>

int main(){
unsigned long long int max=(unsigned long long int)(pow(2,64)-1);
printf("highest number represented by unsigned long long int is %llu\n",max);
unsigned long long int max1=(unsigned long long int)(pow(2,127)-1);
printf("highest number represented by unsigned long long int is %llu\n",max1);
unsigned long long int max2=(unsigned long long int)(pow(2,10)-1);
printf("highest number represented by unsigned long long int is %llu\n",max2);
long long int min=( int)(pow(2,63)*-1);
printf("lowest number represented by long long int is %lld\n",min);
long long int max3=( int)(pow(2,63)-1);
printf("highest number represented by long long int is %lld\n",max3);
return 0;
}
