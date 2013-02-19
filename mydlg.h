#ifndef IDD_DIALOG1
#include"resource.h"
#endif

class mydlg:public CDialog
{
public:
	mydlg(CWnd *pwnd=NULL):CDialog(IDD_DIALOG1,pwnd)
	{};
	BOOL OnInitDialog();
	afx_msg void OnOK();
	afx_msg void OnCancel();
DECLARE_MESSAGE_MAP()
};