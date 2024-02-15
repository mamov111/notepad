#include <stdio.h>
#include <windows.h>

int main(void) {

STARTUPINFO start_info = { 0 };
PROCESS_INFORMATION process_info = { 0 };

    if (!CreateProcessW(
    L"C:\\Windows\\System32\\notepad.exe", 
    NULL, 
    NULL, 
    NULL, 
    FALSE, 
    0, 
    NULL, 
    NULL, 
    &start_info, 
    &process_info ))
    {
        printf("(-) process creation failed, error code: %ld", GetLastError());
        return EXIT_FAILURE;
    }

    printf("(+) handle to process achieved\n");
    printf("(+) pid: %ld\n", process_info.dwProcessId);

    return EXIT_SUCCESS;

}