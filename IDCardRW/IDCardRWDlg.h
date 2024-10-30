// IDCardRWDlg.h : header file
//

#if !defined(AFX_IDCARDRWDLG_H__B0BBEAEF_2020_44AD_B511_DF0FFBBC6FD4__INCLUDED_)
#define AFX_IDCARDRWDLG_H__B0BBEAEF_2020_44AD_B511_DF0FFBBC6FD4__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

#include "ReadDlg.h"
#include "WriteDlg.h"
/////////////////////////////////////////////////////////////////////////////
// CIDCardRWDlg dialog

typedef struct  
{
	TCHAR Name[10];
	TCHAR Sex[3];
	TCHAR Nation[3];
	TCHAR Year[5];
	TCHAR Month[3];
	TCHAR Day[3];
	TCHAR Adress[50];
	TCHAR Identity[20];
}IDInfo;


class CIDCardRWDlg : public CDialog
{
// Construction
public:
	CIDCardRWDlg(CWnd* pParent = NULL);	// standard constructor

// Dialog Data
	//{{AFX_DATA(CIDCardRWDlg)
	enum { IDD = IDD_IDCARDRW_DIALOG };
	//}}AFX_DATA

	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CIDCardRWDlg)
	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV support
	//}}AFX_VIRTUAL

// Implementation
protected:
	HICON m_hIcon;

	// Generated message map functions
	//{{AFX_MSG(CIDCardRWDlg)
	virtual BOOL OnInitDialog();
	afx_msg void OnSysCommand(UINT nID, LPARAM lParam);
	afx_msg void OnPaint();
	afx_msg HCURSOR OnQueryDragIcon();
	afx_msg void OnSelchangeTab1(NMHDR* pNMHDR, LRESULT* pResult);
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
public:
	CTabCtrl m_TabCtrl;
	CWriteDlg m_WriteDlg;
	CReadDlg m_ReadDlg;
	int Count; //身份证信息数量
private:
	void InitTabCtrl();
};

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_IDCARDRWDLG_H__B0BBEAEF_2020_44AD_B511_DF0FFBBC6FD4__INCLUDED_)
