#include<stdio.h>
void stringrev(int a[],int n)
{

    if(k>=0)
    {
        printf("%c",a[n]);
    }
    stringrev(a,n-1);

}
int main()
 {
 char a[10];
 scanf("%s",a);
 int n=strlen(a);
 stringrev(a,n);


}
