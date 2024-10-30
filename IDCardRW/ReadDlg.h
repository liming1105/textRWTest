#if !defined(AFX_READDLG_H__BEED8440_C237_4A60_B21A_AD93650D0952__INCLUDED_)
#define AFX_READDLG_H__BEED8440_C237_4A60_B21A_AD93650D0952__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
// ReadDlg.h : header file
//

/////////////////////////////////////////////////////////////////////////////
// CReadDlg dialog

class CReadDlg : public CDialog
{
// Construction
public:
	CReadDlg(CWnd* pParent = NULL);   // standard constructor

// Dialog Data
	//{{AFX_DATA(CReadDlg)
	enum { IDD = IDD_READ_DLG };
	CListCtrl	m_ListCtrl;
	//}}AFX_DATA


// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CReadDlg)
	protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support
	//}}AFX_VIRTUAL

// Implementation
protected:

	// Generated message map functions
	//{{AFX_MSG(CReadDlg)
	virtual BOOL OnInitDialog();
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
public:
	void ShowIDInfo();
};

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_READDLG_H__BEED8440_C237_4A60_B21A_AD93650D0952__INCLUDED_)
