#pragma once

#include <afxwin.h>

class CMfcGuiApp : public CWinApp
{
public:
    virtual BOOL InitInstance();
};

extern CMfcGuiApp theApp;
