// WordCount.cpp: 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include "linecount.h"
#include "charcount.h"
#include "wordcount.h"
#include "wordmaxsort.h"

int main(int argc, char **argv)
{
	//cin >> *argv;

	charcount(argv[0]);
	wordcount(argv[0]);
	linecount(argv[0]);
	wordmax(argv[0]);

	return 0;
}