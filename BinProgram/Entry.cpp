#include "app.h"


int CALLBACK wWinMain(HINSTANCE hInctance, HINSTANCE hInstance, PWSTR szCmdLine, int nCmdShow)
{
	CApp app{};
	return app.Run();

}