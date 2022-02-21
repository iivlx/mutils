#include <Windows.h>
#include <WinUser.h>
#include <iostream>

int main(int argc, char* argv[]) {
	BOOL fResult;
	int mouseSpeed;
	int newSpeed = 10;

	SystemParametersInfo(SPI_GETMOUSESPEED, 0, &mouseSpeed, 0);
	std::cout << "Current speed: " << mouseSpeed << std::endl;
	fResult = SystemParametersInfo(SPI_SETMOUSESPEED, 0, (void *)newSpeed, SPIF_UPDATEINIFILE | SPIF_SENDCHANGE);

	return 0;
}