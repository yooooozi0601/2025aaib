///week13-3.cpp
///������۰��k�䵪��
#include <stdio.h>
int gcd(int a,int b)
{
    printf("�Ѥja: %d �ѤGb:  %d\n",a,b);
    if(a==0) return b;
    if(b==0) return a;
    return gcd(b,a%b);
}
int main()
{
    printf("�п�J2�ӼƦr");
    int a,b;
    scanf("%d %d",&a,&b);
    int ans= gcd(a,b);
    printf("�����̤j���]�ƬO:%d\n",ans);
}
