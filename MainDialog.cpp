#include "pch.h"
#include "MainDialog.h"

CMainDialog::CMainDialog(CWnd* pParent)
    : CDialogEx(IDD_MAIN_DIALOG, pParent)
{
}

void CMainDialog::DoDataExchange(CDataExchange* pDX)
{
    CDialogEx::DoDataExchange(pDX);
    DDX_Control(pDX, IDC_STATUS_LABEL, m_statusLabel);
}

BEGIN_MESSAGE_MAP(CMainDialog, CDialogEx)
    ON_BN_CLICKED(IDC_ACTION_BUTTON, &CMainDialog::OnBnClickedActionButton)
END_MESSAGE_MAP()

BOOL CMainDialog::OnInitDialog()
{
    CDialogEx::OnInitDialog();
    SetWindowText(_T("MFC GUI Demo"));
    m_statusLabel.SetWindowText(_T("Stan: gotowy"));
    return TRUE;
}

void CMainDialog::OnBnClickedActionButton()
{
    m_statusLabel.SetWindowText(_T("Stan: przycisk został kliknięty"));
}
