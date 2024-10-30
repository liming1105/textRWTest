// WriteDlg.cpp : implementation file
//

#include "stdafx.h"
#include "IDCardRW.h"
#include "WriteDlg.h"
#include "IDCardRWDlg.h"
#include <io.h>

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CWriteDlg dialog 

CWriteDlg::CWriteDlg(CWnd* pParent /*=NULL*/)
	: CDialog(CWriteDlg::IDD, pParent)
{
	//{{AFX_DATA_INIT(CWriteDlg)
		// NOTE: the ClassWizard will add member initialization here
	//}}AFX_DATA_INIT
}


void CWriteDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
	//{{AFX_DATA_MAP(CWriteDlg)
		// NOTE: the ClassWizard will add DDX and DDV calls here
	//}}AFX_DATA_MAP
}


BEGIN_MESSAGE_MAP(CWriteDlg, CDialog)
	//{{AFX_MSG_MAP(CWriteDlg)
	ON_BN_CLICKED(IDC_WRITE_FILE, OnWriteFile)
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CWriteDlg message handlers

void CWriteDlg::OnWriteFile() 
{
	// TODO: Add your control notification handler code here
	IDInfo TempID;
	memset(&TempID,0,sizeof(TempID));
	GetDlgItemText(IDC_NAME,TempID.Name,10);
	GetDlgItemText(IDC_SEX,TempID.Sex,3);
	GetDlgItemText(IDC_NATION,TempID.Nation,3);
	GetDlgItemText(IDC_YEAR,TempID.Year,5);
	GetDlgItemText(IDC_MONTH,TempID.Month,3);
	//消除字符串中第一位为零的情况
	if (TempID.Month[0]=='0')
	{
		TempID.Month[0]=TempID.Month[1];
		TempID.Month[1]=TempID.Month[2];
	}
	GetDlgItemText(IDC_DAY,TempID.Day,3);
	if (TempID.Day[0]=='0')
	{
		TempID.Day[0]=TempID.Day[1];
		TempID.Day[1]=TempID.Day[2];
	}
	GetDlgItemText(IDC_IDENTITY,TempID.Identity,21);
	GetDlgItemText(IDC_ADDRESS,TempID.Adress,50);
	//根据文件是否存在选择打开方式
	FILE *pFile;
	if (_access("IDInfo.txt",0)==-1)
	{
		pFile=fopen("IDInfo.txt","a+b"); //该打开方式会创建一个空文件
	}
	else
	{
		pFile=fopen("IDInfo.txt","r+b");
	}
	//
	int Count=0;
	fread(&Count,4,1,pFile);
	if (Count==0)
	{
		Count++;
		fseek(pFile,0,SEEK_SET);
		fwrite(&Count,4,1,pFile);
	}
	else
	{
		Count++;
		fseek(pFile,0,SEEK_SET);
		fwrite(&Count,4,1,pFile);
		fseek(pFile,(Count-1)*sizeof(TempID),SEEK_CUR);
	}
	//写文件
// 	fwrite(TempID.Name,10,1,pFile);
// 	fwrite(TempID.Sex,3,1,pFile);
// 	fwrite(TempID.Nation,3,1,pFile);
// 	fwrite(TempID.Year,5,1,pFile);
// 	fwrite(TempID.Month,3,1,pFile);
	fwrite((void *)&TempID,sizeof(TempID),1,pFile);
	fclose(pFile);	
}
