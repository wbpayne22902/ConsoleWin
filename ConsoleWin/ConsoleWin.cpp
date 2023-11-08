#include "pch.h"

using namespace System;

int main(array<System::String ^> ^args)
{
    Console::WriteLine("Hello, World");
    ShellAboutW(NULL, L"My App", L"Cool", NULL);
    Beep(550, 500);
    printf("About Window Closed\n");
    Console::WriteLine("That's all folks!");
    return 0;
}
