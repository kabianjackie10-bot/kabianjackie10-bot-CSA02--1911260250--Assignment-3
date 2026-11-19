#include <stdio.h>
#define R 3
#define C 4
void totals(const int a[R][C],int out[R]){for(int i=0;i<R;i++){out[i]=0;for(int j=0;j<C;j++)out[i]+=a[i][j];}}
void averages(const int a[R][C],double out[C]){for(int j=0;j<C;j++){int s=0;for(int i=0;i<R;i++)s+=a[i][j];out[j]=(double)s/R;}}
void maximum(const int a[R][C],int *v,int *ri,int *ci){*v=a[0][0];*ri=*ci=0;for(int i=0;i<R;i++)for(int j=0;j<C;j++)if(a[i][j]>*v){*v=a[i][j];*ri=i;*ci=j;}}
int main(void){int a[R][C]={{10,20,30,40},{15,25,35,45},{5,18,28,38}},t[R],v,r,c;double av[C];totals(a,t);averages(a,av);maximum(a,&v,&r,&c);for(int i=0;i<R;i++)printf("District %d total=%d\\n",i+1,t[i]);for(int j=0;j<C;j++)printf("Month %d average=%.2f\\n",j+1,av[j]);printf("Maximum=%d at row %d column %d\\n",v,r+1,c+1);return 0;}
