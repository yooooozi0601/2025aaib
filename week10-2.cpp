///week10-2.cpp
#include <stdio.h>
int main()
{
    printf("叫块1计");
    int n;
    scanf("%d",&n);
    printf("块 %d\n",n);
    ///printf("ウ计 %d\n",n%10);
    ///printf("ウ计 %d\n",n/10%10);
    ///printf("ウκ计 %d\n",n/10/10%10);
    while(n>0){
        printf("瞷р%d ブ  %d\n",n,n%10);
        n=n/10;
    }

}
