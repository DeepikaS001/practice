#include<stdio.h>
#include<string.h>
void reverse(char s[]);
void itob(int n,char s[],int b)
{
    int i,j,sign;

    if((sign=n)<0)
        n = -n;

    i = 0;

    do
    {
        j = n % b;

        s[i++] = (j <= 9)?j+'0':j+'a'-10;
    }while((n/=b)>0);

    if(sign < 0)
        s[i++]='-';
    
    s[i]='\0';
    
    reverse(s);
}

void reverse(char s[])
{
    int i,j,c;

    for(i=0,j=strlen(s)-1;i<j;i++,j--)
        c=s[i],s[i]=s[j],s[j]=c;
}
void main(){
int n, b;
char s[1000];
printf("enter the number and base ");
scanf("%d%d",&n,&b);
itob(n,s,b);
printf("%s",s);
}