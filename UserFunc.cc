#include "UserFunc.h"
#include <windows.h>
#include <stdio.h>


void MyExitProcess(_In_ UINT uExitCode) {
	printf("\n[+] �������˳����˳�����Ϊ %d\n", uExitCode);
	ExitProcess(uExitCode);
}