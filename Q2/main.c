#include <stdio.h>
void bubble(int a[],int n,int *c,int *s){*c=*s=0;for(int i=0;i<n-1;i++){int changed=0;for(int j=0;j<n-i-1;j++){(*c)++;if(a[j]>a[j+1]){int t=a[j];a[j]=a[j+1];a[j+1]=t;(*s)++;changed=1;}}if(!changed)break;}}
void selection(int a[],int n,int *c,int *s){*c=*s=0;for(int i=0;i<n-1;i++){int m=i;for(int j=i+1;j<n;j++){(*c)++;if(a[j]<a[m])m=j;}if(m!=i){int t=a[i];a[i]=a[m];a[m]=t;(*s)++;}}}
void insertion(int a[],int n,int *c,int *s){*c=*s=0;for(int i=1;i<n;i++){int x=a[i],j=i-1;while(j>=0){(*c)++;if(a[j]<=x)break;a[j+1]=a[j];(*s)++;j--;}a[j+1]=x;}}
void show(const char *name,void(*sort)(int*,int,int*,int*)){int a[]={8,3,7,1,9,2},c,s;sort(a,6,&c,&s);printf("%s: ",name);for(int i=0;i<6;i++)printf("%d ",a[i]);printf("| comparisons=%d moves/swaps=%d\\n",c,s);}
int main(void){show("Bubble",bubble);show("Selection",selection);show("Insertion",insertion);return 0;}
