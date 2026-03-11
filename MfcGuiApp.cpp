#include "pch.h"
#include "MfcGuiApp.h"
#include "MainDialog.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif

BEGIN_MESSAGE_MAP(CMfcGuiApp, CWinApp)
END_MESSAGE_MAP()

CMfcGuiApp theApp;

BOOL CMfcGuiApp::InitInstance()
{
    CWinApp::InitInstance();
    AfxEnableControlContainer();

    CMainDialog dlg;
    m_pMainWnd = &dlg;
    dlg.DoModal();

    return FALSE;
}
