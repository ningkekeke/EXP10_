#include"stdafx.h"
#include"w32.h"

char* pchar()//返回字符串（地址）
{
	return "从静态库取得的字符串";
}

int F1::GetA() {
	return a + 1;
}

