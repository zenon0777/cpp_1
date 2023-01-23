# include <iostream>
# include <cctype>
#include <cstring>

int main()
{
	char str[] = "";
	std::cin >> str;
	puts(str);
	for (size_t i = 0; i < strlen(str); i++)
		putchar(toupper(str[i]));
	return 0;
}
