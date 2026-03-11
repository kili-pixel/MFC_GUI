#pragma once

#include <afxwin.h>
#include "resource.h"

class CMainDialog : public CDialogEx
{
public:
    CMainDialog(CWnd* pParent = nullptr);

#ifdef AFX_DESIGN_TIME
    enum { IDD = IDD_MAIN_DIALOG };
#endif

protected:
    virtual void DoDataExchange(CDataExchange* pDX);

    DECLARE_MESSAGE_MAP()

private:
    CStatic m_statusLabel;

public:
    virtual BOOL OnInitDialog();
    afx_msg void OnBnClickedActionButton();
};
