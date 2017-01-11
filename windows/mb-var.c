#include <windows.h>
#include <stdio.h>
#include <string.h>

int WINAPI WinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance,
    LPSTR lpCmdLine, int nCmdShow)
{
    char test_string[50];
    char *ip_str = "172.17.48.173";
    ip_str = "172.17.48.xxx";
    int val1, val2, val3, val4;
    val1 = 172;
    val2 = 17;
    val3 = 64;
    val4 = 173;
    sprintf(ip_str, "%d.%d.%d.%d", val1, val2, val3, val4);
    sprintf(test_string, "Hello test %s\n",ip_str);
    MessageBox(NULL, test_string, "Programmed by Roan Fourie", MB_OK);

}
