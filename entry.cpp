#include <Windows.h>
#include <WinInet.h>
#pragma comment(lib, "Wininet.lib")
#pragma comment(lib, "Dwmapi.lib")
#pragma comment(lib, "d3d11.lib")
#pragma comment(lib, "d3d9")
#pragma comment(lib, "urlmon.lib")
#include <Windows.h>
#include <Urlmon.h>
#include <iostream>
#include <fstream>
#include <filesystem>
#include <sstream>
#include <windows.h>
#include <iostream>
#include <fstream>
#include <filesystem>
#include <sstream>
#include <rpcndr.h>
#include <ostream>
#include <xstring>
#include "auth/auth.hpp"
#include <string>
#include "auth/sk.h"
#include "auth/colors.hpp"
#include <auth/other.h>
#include "Streaming/filestream.h"
#include "Bytes/Bytes.h"

#include "SpooferMapper/intel_driver.hpp"
#include "SpooferMapper/kdmapper.hpp"

#include "antidebug.hpp"
#include "protect.h"




std::string tm_to_readable_time(tm ctx);
static std::time_t string_to_timet(std::string timestamp);
static std::tm timet_to_tm(time_t timestamp);
const std::string compilation_date = (std::string)EncryptString(__DATE__);
const std::string compilation_time = (std::string)EncryptString(__TIME__);


HANDLE check;

int main()
{
    std::thread Ant(Anti_Debug);
    //had security above but removed my shit feel free to add ur own

    std::string consoleTitle = (std::string)EncryptString("ur pasted cheat name - Built at:  ") + compilation_date + " " + compilation_time; //can swap to " SetConsoleTitleA(skCrypt("mypastedcheat"));"
    SetConsoleTitleA(consoleTitle.c_str());

    initconsole();



        system("sc stop BEService >nul 2>&1");
        system("sc stop BEDaisy >nul 2>&1");
        system("sc stop EasyAntiCheat >nul 2>&1");
        system("sc stop EasyAntiCheatSys >nul 2>&1");

        std::cout << EncryptString("\n  loading kernel modules...");

        HANDLE iqvw64e_device_handle = intel_driver::Load();

        if (!iqvw64e_device_handle || iqvw64e_device_handle == INVALID_HANDLE_VALUE)
        {
            std::cout << "  Couldn't Load Driver iqvw64e.sys" << std::endl;
        }

        if (!kdmapper::MapDriver(iqvw64e_device_handle, rawData))
        {
            std::cout << "  Failed To Map Driver" << std::endl; //L bozo :skull:
            intel_driver::Unload(iqvw64e_device_handle);
        }

        intel_driver::Unload(iqvw64e_device_handle);

        std::cout << EncryptString("\n  kernel modules loaded."); //if prints this, u got no errors loading ur pasted driver pal
        Sleep(2000);
        system("cls");;

    std::cout << EncryptString("\n  Press [F2] in lobby.") << std::endl;
    while (1) {
        if (GetAsyncKeyState(VK_F2))
            break;
    }
    std::cout << EncryptString("\n  Fortnite found! Injection will begin shortly.") << std::endl; //change to ur game ofc :skull:



	streamcheat();


}

std::string tm_to_readable_time(tm ctx) {
	char buffer[80];

	strftime(buffer, sizeof(buffer), "%a %m/%d/%y %H:%M:%S %Z", &ctx);

	return std::string(buffer);
}

static std::time_t string_to_timet(std::string timestamp) {
	auto cv = strtol(timestamp.c_str(), NULL, 10); // long

	return (time_t)cv;
}

static std::tm timet_to_tm(time_t timestamp) {
	std::tm context;

	localtime_s(&context, &timestamp);

	return context;
}
