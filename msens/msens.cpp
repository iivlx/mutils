#include <Windows.h>
#include <shellapi.h>
#include <iostream>
#include <string>

using std::string;
using std::wstring;

void printUsage() {
  std::cout << "msens newspeed" << std::endl;
  std::cout << "    where newspeed is the new mouse sensitivity" << std::endl;
}

void setSpeed(int newSpeed) {
  BOOL fResult = SystemParametersInfo(SPI_SETMOUSESPEED, 0, (void*)newSpeed, SPIF_UPDATEINIFILE | SPIF_SENDCHANGE);
}

int main(int argc, char* argv[]) {
  FreeConsole();

  if (argc <= 1) {
    printUsage();
    exit(1);
	}

  int mouseSpeed = atoi(argv[1]);
	
  return 0;
}