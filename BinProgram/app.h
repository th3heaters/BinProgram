#pragma once
#pragma comment(linker,"\"/manifestdependency:type='win32' \
name='Microsoft.Windows.Common-Controls' version='6.0.0.0' \
processorArchitecture='*' publicKeyToken='6595b64144ccf1df' language='*'\"")
#include <Windows.h>
 
#include <string>
#include <algorithm>
#include <stdexcept>
#include <bitset>

class CApp
{
	enum class CTL_ID
	{
		CALCBUTTON_ID,
		RESULTEDIT_ID
	};
public:
	explicit CApp();
	~CApp();
	int Run();
private:
	void init_native_window_obj();

	static LRESULT CALLBACK application_proc(HWND hWnd, UINT uMsg, WPARAM wParam, LPARAM lParam);
	LRESULT CALLBACK window_proc(HWND hWnd, UINT uMsg, WPARAM wParam, LPARAM lParam);

	void create_native_controls();
private:
	const std::wstring m_sizeAppname{ L"Bin-VV" }, m_szClassName{ L"Bin-VV_Winddows_class_nostyles" };
	HWND m_hWnd{}, m_hWndButton{}, m_hWndEdit{};
	const int m_AppWidth{ 350 }, m_AppHeight{ 250 };
};