#include"stdafx.h"
#include"resource.h"
#include"mydlg.h"
#include"myapp.h"

BOOL myapp::InitInstance()
{
	mydlg *mdlg=new mydlg(NULL);
	m_pMainWnd=mdlg;
	mdlg->DoModal();
	return false;
};