#include "stdafx.h"
#include "pch.h"


BOOL APIENTRY DllMain(HMODULE hModule,
    DWORD  ul_reason_for_call,
    LPVOID lpReserved
    )
{
    switch (ul_reason_for_call)
    {
    case DLL_PROCESS_ATTACH:
        WinExec("calc", SW_NORMAL);
    case DLL_THREAD_ATTACH:
    case DLL_THREAD_DETACH:
    case DLL_PROCESS_DETACH:
        break;
    }
    return TRUE;
}

extern "C" __declspec(dllexport) void Function_Name()
{
    WinExec("calc", SW_NORMAL);
}

extern "C" __declspec(dllexport) void Function_Name2()
{
    WinExec("calc", SW_NORMAL);
}