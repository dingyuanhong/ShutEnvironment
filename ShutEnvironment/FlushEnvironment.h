#ifndef FLUSHENVIRONMENT_H
#define FLUSHENVIRONMENT_H

#include <windows.h>

static inline void FlushEnvirinment(){
	SendMessageTimeout(HWND_BROADCAST, WM_SETTINGCHANGE,NULL,NULL,SMTO_ABORTIFHUNG,1,NULL);
	SendMessageTimeout(HWND_BROADCAST, WM_SETTINGCHANGE, 0,(LPARAM)(L"Environment"), SMTO_ABORTIFHUNG, 1, NULL);
	SendMessageTimeout(HWND_BROADCAST, WM_SETTINGCHANGE, 0,(LPARAM)"Environment", SMTO_ABORTIFHUNG,1, NULL);
}

#endif