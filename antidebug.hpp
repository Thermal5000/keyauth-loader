#pragma once
#include <thread>
#include <random>


void killdbg()
{
    system(TEXT("taskkill /f /im KsDumperClient.exe >nul 2>&1"));
    system(TEXT("taskkill /f /im KsDumper.exe >nul 2>&1"));
    system(TEXT("taskkill /f /im HTTPDebuggerUI.exe >nul 2>&1"));
    system(TEXT("taskkill /f /im HTTPDebuggerSvc.exe >nul 2>&1"));
    system(TEXT("taskkill /f /im ProcessHacker.exe >nul 2>&1"));
    system(TEXT("taskkill /f /im idaq.exe >nul 2>&1"));
    system(TEXT("taskkill /f /im idaq64.exe >nul 2>&1"));
    system(TEXT("taskkill /f /im Wireshark.exe >nul 2>&1"));
    system(TEXT("taskkill /f /im Fiddler.exe >nul 2>&1"));
    system(TEXT("taskkill /f /im FiddlerEverywhere.exe >nul 2>&1"));
    system(TEXT("taskkill /f /im Xenos64.exe >nul 2>&1"));
    system(TEXT("taskkill /f /im Xenos.exe >nul 2>&1"));
    system(TEXT("taskkill /f /im Xenos32.exe >nul 2>&1"));
    system(TEXT("taskkill /f /im de4dot.exe >nul 2>&1"));
    system(TEXT("taskkill /f /im Cheat Engine.exe >nul 2>&1"));
    system(TEXT("taskkill /f /im cheatengine-x86_64.exe >nul 2>&1"));
    system(TEXT("taskkill /f /im cheatengine-x86_64-SSE4-AVX2.exe >nul 2>&1"));
    system(TEXT("taskkill /f /im MugenJinFuu-x86_64-SSE4-AVX2.exe >nul 2>&1"));
    system(TEXT("taskkill /f /im MugenJinFuu-i386.exe >nul 2>&1"));
    system(TEXT("taskkill /f /im cheatengine-x86_64.exe >nul 2>&1"));
    system(TEXT("taskkill /f /im cheatengine-i386.exe >nul 2>&1"));
    system(TEXT("taskkill /f /im HTTP Debugger Windows Service (32 bit).exe >nul 2>&1"));
    system(TEXT("taskkill /f /im KsDumper.exe >nul 2>&1"));
    system(TEXT("taskkill /f /im OllyDbg.exe >nul 2>&1"));
    system(TEXT("taskkill /f /im x64dbg.exe >nul 2>&1"));
    system(TEXT("taskkill /f /im x32dbg.exe >nul 2>&1"));
    system(TEXT("taskkill /FI \"IMAGENAME eq httpdebugger*\" /IM * /F /T >nul 2>&1"));
    system(TEXT("taskkill /f /im HTTPDebuggerUI.exe >nul 2>&1"));
    system(TEXT("taskkill /f /im HTTPDebuggerSvc.exe >nul 2>&1"));
    system(TEXT("taskkill /f /im Ida64.exe >nul 2>&1"));
    system(TEXT("taskkill /f /im OllyDbg.exe >nul 2>&1"));
    system(TEXT("taskkill /f /im Dbg64.exe >nul 2>&1"));
    system(TEXT("taskkill /f /im Dbg32.exe >nul 2>&1"));
    system(TEXT("taskkill /FI \"IMAGENAME eq cheatengine*\" /IM * /F /T >nul 2>&1"));
    system(TEXT("taskkill /FI \"IMAGENAME eq httpdebugger*\" /IM * /F /T >nul 2>&1"));
    system(TEXT("taskkill /FI \"IMAGENAME eq processhacker*\" /IM * /F /T >nul 2>&1"));
}

void Anti_Debug()
{
    killdbg();
    //removed all mine apart from the shiitest :sunglasses:
}
