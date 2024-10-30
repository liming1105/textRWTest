// IDCardRW.h : main header file for the IDCARDRW application
//

#if !defined(AFX_IDCARDRW_H__0A12874A_D105_4AB7_B379_7AAD57ED863E__INCLUDED_)
#define AFX_IDCARDRW_H__0A12874A_D105_4AB7_B379_7AAD57ED863E__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

#ifndef __AFXWIN_H__
	#error include 'stdafx.h' before including this file for PCH
#endif

#include "resource.h"		// main symbols

/////////////////////////////////////////////////////////////////////////////
// CIDCardRWApp:
// See IDCardRW.cpp for the implementation of this class
//

class CIDCardRWApp : public CWinApp
{
public:
	CIDCardRWApp();

// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CIDCardRWApp)
	public:
	virtual BOOL InitInstance();
	//}}AFX_VIRTUAL

// Implementation

	//{{AFX_MSG(CIDCardRWApp)
		// NOTE - the ClassWizard will add and remove member functions here.
		//    DO NOT EDIT what you see in these blocks of generated code !
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};


/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_IDCARDRW_H__0A12874A_D105_4AB7_B379_7AAD57ED863E__INCLUDED_)
