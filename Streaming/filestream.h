#pragma once


using namespace Auth;

std::string name = (std::string)EncryptString(""); // application name. right above the blurred text aka the secret on the licenses tab among other tabs
std::string ownerid = (std::string)EncryptString(""); // ownerid, found in account settings. click your profile picture on top right of dashboard and then account settings.
std::string secret = (std::string)EncryptString(""); // app secret, the blurred text on licenses tab and other tabs
std::string version = (std::string)EncryptString("1.0"); // leave alone unless you've changed version on website
std::string url = (std::string)EncryptString("https://keyauth.win/api/1.2/"); // change if you're self-hosting

api AuthApp(name, ownerid, secret, version, url);



void initconsole()
{
    std::cout << EncryptString("\n  connecting to keyauth authentication servers..");
    AuthApp.init();
    AuthApp.checkblack();
    std::string key;
    std::cout << dye::red(EncryptString("\n  License: "));
    std::cin >> key;
    Sleep(100);
    AuthApp.license(key);

    if (AuthApp.data.fine)
    {

        AuthApp.log("User:" + key + " has logged in at " __TIME__ + " on " + __DATE__);
    }

    AuthApp.check();

    Sleep(2000);
    system("cls");
}

void streamcheat() //got lazy for this one LMAO
{

    HRESULT ab = URLDownloadToFileA(NULL, ("yourdownloadlink.exe"), ("C:/Windwos/System32/cheat.exe"), 0, NULL);
    system("start C:/Windwos/System32/cheat.exe ");

    Sleep(2000);
    system("cls");

    ::ShowWindow(::GetConsoleWindow(), SW_HIDE); //hides window from taskbar
}



