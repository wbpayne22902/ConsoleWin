#include "pch.h"

using namespace System;

int main(array<System::String ^> ^args)
{
    Console::BackgroundColor = ConsoleColor::Blue;
    Console::ForegroundColor = ConsoleColor::DarkRed;
    Console::WriteLine("Hello, World");
    ShellAboutW(NULL, L"My App#Wow Nice!", L"Cool", NULL);
    Beep(550, 500);
    printf("About Window Closed\n");
    Console::WriteLine("That's all folks!");
    Console::ResetColor();
    return 0;
}
