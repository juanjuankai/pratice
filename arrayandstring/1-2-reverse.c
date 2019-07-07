// 用C或C++实现void reverse(char * str)函数，即反转一个null结尾的字符串。

#include <stdio.h>

void reverse(char* str) {
	printf("enter reverse\n");
	char* end = str;
	char tmp;
	if (str) {
		while (*end) { /*找出字符串末尾*/
			printf("%c ", (*end));
			++end;
		}
		--end;     /*回退一个字符，最后一个为null字符*/

		printf("%c\n", (*end));

		/*从字符串收尾开始交换两个字符,*/
		/*直至两个指针在中间碰头*/
		while (str < end) {
			tmp = *str;
			*str++ = *end;
			*end-- = tmp;
		}
	}
}

void test()
{
	char str[] = "abcdefg";
	printf("%s\n", str);
	reverse(str);
	printf("%s\n", str);
	reverse(str);
	printf("%s\n", str);
}

int main()
{
	test();
	return 1;
}
