#include <stdio.h>
#include <ctype.h>
int word_count(const char s[]){int n=0,in=0;for(int i=0;s[i];i++){if(!isspace((unsigned char)s[i])&&!in){n++;in=1;}else if(isspace((unsigned char)s[i]))in=0;}return n;}
int palindrome(const char s[]){int l=0,r=0;while(s[r])r++;r--;while(l<r){while(l<r&&!isalpha((unsigned char)s[l]))l++;while(l<r&&!isalpha((unsigned char)s[r]))r--;if(tolower((unsigned char)s[l])!=tolower((unsigned char)s[r]))return 0;l++;r--;}return 1;}
int main(void){printf("Words: %d\\n",word_count(" Meet at the library at 5 PM "));printf("%d %d\\n",palindrome("Madam, I'm Adam"),palindrome("Hello"));return 0;}
