#include <stdio.h>
#include <string.h>
#define N 5
int main(void){char names[N][30]={"Kabilan","Anu","Bala","Arun","Zara"},key[30]="Bala",tmp[30];for(int i=0;i<N-1;i++)for(int j=0;j<N-1-i;j++)if(strcmp(names[j],names[j+1])>0){strcpy(tmp,names[j]);strcpy(names[j],names[j+1]);strcpy(names[j+1],tmp);}puts("Sorted names:");for(int i=0;i<N;i++)puts(names[i]);int lo=0,hi=N-1,pos=-1;while(lo<=hi){int m=lo+(hi-lo)/2,c=strcmp(names[m],key);if(c==0){pos=m;break;}if(c<0)lo=m+1;else hi=m-1;}printf("Search %s -> %d\\n",key,pos);return 0;}
