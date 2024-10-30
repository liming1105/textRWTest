// ReadDlg.cpp : implementation file
//

#include "stdafx.h"
#include "IDCardRW.h"
#include "ReadDlg.h"
#include <io.h> //为了使用_access函数
#include "IDCardRWDlg.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CReadDlg dialog


CReadDlg::CReadDlg(CWnd* pParent /*=NULL*/)
	: CDialog(CReadDlg::IDD, pParent)
{
	//{{AFX_DATA_INIT(CReadDlg)
		// NOTE: the ClassWizard will add member initialization here
	//}}AFX_DATA_INIT
}


void CReadDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
	//{{AFX_DATA_MAP(CReadDlg)
	DDX_Control(pDX, IDC_LIST1, m_ListCtrl);
	//}}AFX_DATA_MAP
}


BEGIN_MESSAGE_MAP(CReadDlg, CDialog)
	//{{AFX_MSG_MAP(CReadDlg)
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CReadDlg message handlers

BOOL CReadDlg::OnInitDialog() 
{
	CDialog::OnInitDialog();
	
	// TODO: Add extra initialization here
	m_ListCtrl.SetExtendedStyle(LVS_EX_GRIDLINES | LVS_EX_FULLROWSELECT);
	m_ListCtrl.InsertColumn(0,"姓名",LVCFMT_LEFT,60);
	m_ListCtrl.InsertColumn(1,"性别",LVCFMT_LEFT,50);
	m_ListCtrl.InsertColumn(2,"民族",LVCFMT_LEFT,50);
	m_ListCtrl.InsertColumn(3,"出生日期",LVCFMT_LEFT,110);
	m_ListCtrl.InsertColumn(4,"身份证号",LVCFMT_LEFT,150);
	m_ListCtrl.InsertColumn(5,"住址",LVCFMT_LEFT,110);
	//显示列表
	ShowIDInfo();

	return TRUE;  // return TRUE unless you set the focus to a control
	              // EXCEPTION: OCX Property Pages should return FALSE
}

void CReadDlg::ShowIDInfo()
{
	if (_access("IDInfo.txt",0)==-1)
	{
		return;
	}
	m_ListCtrl.DeleteAllItems();
	IDInfo TempID;
	memset(&TempID,0,sizeof(TempID));
	//
	FILE *pFile;
	pFile=fopen("IDInfo.txt","r+b");
	//读取身份信息个数
	int Count;
	fread(&Count,4,1,pFile);
	CString Birthday;
	for (int i=0;i<Count;i++)
	{
		fread(&TempID,sizeof(TempID),1,pFile);
		m_ListCtrl.InsertItem(i,"");
		m_ListCtrl.SetItemText(i,0,TempID.Name);
		m_ListCtrl.SetItemText(i,1,TempID.Sex);
		m_ListCtrl.SetItemText(i,2,TempID.Nation);
		Birthday.Format("%s.%s.%s",TempID.Year,TempID.Month,TempID.Day);
		m_ListCtrl.SetItemText(i,3,Birthday);
		m_ListCtrl.SetItemText(i,4,TempID.Identity);
		m_ListCtrl.SetItemText(i,5,TempID.Adress);
	}
	fclose(pFile);
}
