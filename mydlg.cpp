#include"stdafx.h"
#include"mydlg.h"

BEGIN_MESSAGE_MAP(mydlg,CDialog)
	//
END_MESSAGE_MAP()

BOOL mydlg::OnInitDialog()
{
	SetDlgItemText(IDC_EDIT1,"select * from sj001hn where convert(varchar(50),date_time,20) like '2013-01%'");
	return CDialog::OnInitDialog();
};
afx_msg void mydlg::OnOK()
{
	CDialog::OnOK();
};
afx_msg void mydlg::OnCancel()
{
	CDialog::OnCancel();
};
