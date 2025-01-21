#include<iostream>
using namespace std;
/*
Имплементирайте следните функции:
-strlen (намиране на дължина на стринг)
-strcpy (копиране на стринг)
-strcat (конкатениране на стрингове)
-strcmp (лексикографско сравнение на стрингове)
*/
const int MAXSIZE = 1024;

/// Копираме source в dest
/// Казваме, че в dest има достатъчно място и за двата масива
void myStrCpy(char *dest, const char *source)
{
    if (!source || !dest)
		return;
	while (*source)
	{
		*dest = *source;
		dest++;
		source++;
	}
	*dest = '\0';
}

unsigned int myStrLen(const char* arr) // връща ВИНАГИ неотрицателно число
{
    if (!str)
		return 0;

	unsigned int result = 0;
	while (*str) /// еквивалентно на (*str) != '\0'
	{
		result++;
		str++;
	}
	return result;
}


int main()
{
    char str[20] = "ABC";
	char str2[] = "XY";
    cout<<myStrLen(str);

    return 0;
}
