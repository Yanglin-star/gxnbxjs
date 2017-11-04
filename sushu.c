#include <stdio.h>
int isPrime(int n) 
{
    int i,flag = 1;
    if(n < 2) 
        return 0;
    for(i = 2; i * i <= n && flag; ++i)
        flag = n % i;
    return flag;
}
 
int main() {
    int i,count=0;
    FILE *fp = fopen("sushu.txt","wt");
    if(fp == NULL) 
    {
        printf("无法打开文件。\n");
        return 1;
    }
    for(i = 2; i <= 100000; ++i)
    {
        if(isPrime(i))
        {
            fprintf(fp,"%d ",i);
            count++;
        }
    }
    fclose(fp);
    printf("一共含有%d个素数\n",count);
    return 0;
}
