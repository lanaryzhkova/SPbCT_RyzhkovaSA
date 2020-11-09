#include "pch.h"
#include <iostream>
#define BUF_SIZE 160
#define rmaxf1 40
#define rmaxf2 10
#include <process.h>
#include <stdarg.h>
#include <string.h>
#include <tchar.h>
#include <Windows.h>
#include <memoryapi.h>
#include <string>
#include <sstream>
using namespace std;

void KCompare(CHAR, CHAR, int);
void KCompare(CHAR string1[rmaxf1], CHAR string2[rmaxf2], int KEY)
{
	char tmp[20];
	int result;
	result = _tcsncmp(( wchar_t*) string1, (wchar_t*)string2, KEY);
	if (result == 0)
	{
		strcpy_s(tmp, "equal to");
		printf("Result:\t\tString 1 is %s string 2\n\n", tmp);
	}
	else
	{
		strcpy_s(tmp, "noequal to");
		printf("Result:\t\tString 1 is %s string 2\n\n", tmp);
	}
}
int _tmain(int argc, LPTSTR argv[])
{
	HANDLE hFile, hFile2, hMap;
	CHAR string1[rmaxf1], string2[rmaxf2];
	CHAR Buffer1[BUF_SIZE], Buffer2[BUF_SIZE];
	DWORD FsLow, nf2;
	int i, j, k, KEY;
	BOOL f2;
	LPCTSTR pF;
	LPVOID pFile;
	hFile = CreateFile(argv[1], GENERIC_READ, 0, NULL,
		OPEN_EXISTING, FILE_ATTRIBUTE_NORMAL, NULL);
	FsLow = GetFileSize(hFile, NULL);
	printf("Fs=%d\n", (int)FsLow);
	hMap = CreateFileMapping(hFile, NULL, PAGE_READONLY,
		0, 0, NULL);
	pFile = MapViewOfFile(hMap, FILE_MAP_READ, 0, 0, 0);
	pF = (LPCTSTR)pFile;
	for (i = 0; i < (int)FsLow; i++)
	{
		Buffer1[i] = *pF;
		pF++;
	}
	for (i = 0; i < (int)FsLow; i++)
		printf("%c", Buffer1[i]);
	printf("\n");
	hFile2 = CreateFile(argv[2], GENERIC_READ, 0, NULL,
		OPEN_EXISTING, FILE_ATTRIBUTE_NORMAL, NULL);
	system("pause");
}
