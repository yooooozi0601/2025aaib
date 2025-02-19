///week01-1.cpp 兩數相加

#include <stdio.h>///檔名不能寫錯
///stdio 的意思是標準的standard input/output
///有了 stdio.h外掛,才能用scanf() printf()

int main()
{
	int a, b;
	scanf( "%d" , &a );///剛剛教的,掃描讀東西
	scanf( "%d" , &b );///可以用複製的,改b
    printf( "%d", a+b);///印東西
}

