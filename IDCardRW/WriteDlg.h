#if !defined(AFX_WRITEDLG_H__E0CC8618_6768_49EA_9348_B2A3270953BE__INCLUDED_)
#define AFX_WRITEDLG_H__E0CC8618_6768_49EA_9348_B2A3270953BE__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
// WriteDlg.h : header file
//

/////////////////////////////////////////////////////////////////////////////
// CWriteDlg dialog

class CWriteDlg : public CDialog
{
// Construction
public:
	CWriteDlg(CWnd* pParent = NULL);   // standard constructor

// Dialog Data
	//{{AFX_DATA(CWriteDlg)
	enum { IDD = IDD_WRITE_DLG };
		// NOTE: the ClassWizard will add data members here
	//}}AFX_DATA


// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CWriteDlg)
	protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support
	//}}AFX_VIRTUAL

// Implementation
protected:

	// Generated message map functions
	//{{AFX_MSG(CWriteDlg)
	afx_msg void OnWriteFile();
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_WRITEDLG_H__E0CC8618_6768_49EA_9348_B2A3270953BE__INCLUDED_)
