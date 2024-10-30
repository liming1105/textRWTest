; CLW file contains information for the MFC ClassWizard

[General Info]
Version=1
LastClass=CReadDlg
LastTemplate=CDialog
NewFileInclude1=#include "stdafx.h"
NewFileInclude2=#include "IDCardRW.h"

ClassCount=5
Class1=CIDCardRWApp
Class2=CIDCardRWDlg
Class3=CAboutDlg

ResourceCount=5
Resource1=IDD_IDCARDRW_DIALOG
Resource2=IDR_MAINFRAME
Resource3=IDD_ABOUTBOX
Resource4=IDD_WRITE_DLG
Class4=CWriteDlg
Class5=CReadDlg
Resource5=IDD_READ_DLG

[CLS:CIDCardRWApp]
Type=0
HeaderFile=IDCardRW.h
ImplementationFile=IDCardRW.cpp
Filter=N

[CLS:CIDCardRWDlg]
Type=0
HeaderFile=IDCardRWDlg.h
ImplementationFile=IDCardRWDlg.cpp
Filter=D
LastObject=IDC_TAB1
BaseClass=CDialog
VirtualFilter=dWC

[CLS:CAboutDlg]
Type=0
HeaderFile=IDCardRWDlg.h
ImplementationFile=IDCardRWDlg.cpp
Filter=D

[DLG:IDD_ABOUTBOX]
Type=1
Class=CAboutDlg
ControlCount=4
Control1=IDC_STATIC,static,1342177283
Control2=IDC_STATIC,static,1342308480
Control3=IDC_STATIC,static,1342308352
Control4=IDOK,button,1342373889

[DLG:IDD_IDCARDRW_DIALOG]
Type=1
Class=CIDCardRWDlg
ControlCount=1
Control1=IDC_TAB1,SysTabControl32,1342177280

[DLG:IDD_WRITE_DLG]
Type=1
Class=CWriteDlg
ControlCount=18
Control1=IDC_STATIC,static,1342308352
Control2=IDC_STATIC,static,1342308352
Control3=IDC_STATIC,static,1342308352
Control4=IDC_NAME,edit,1350631552
Control5=IDC_SEX,edit,1350631552
Control6=IDC_NATION,edit,1350631552
Control7=IDC_STATIC,static,1342308352
Control8=IDC_DAY,edit,1350631552
Control9=IDC_STATIC,static,1342308352
Control10=IDC_YEAR,edit,1350631552
Control11=IDC_STATIC,static,1342308352
Control12=IDC_STATIC,static,1342308352
Control13=IDC_MONTH,edit,1350631552
Control14=IDC_STATIC,static,1342308352
Control15=IDC_ADDRESS,edit,1350631556
Control16=IDC_STATIC,static,1342308352
Control17=IDC_IDENTITY,edit,1350631552
Control18=IDC_WRITE_FILE,button,1342242816

[CLS:CWriteDlg]
Type=0
HeaderFile=WriteDlg.h
ImplementationFile=WriteDlg.cpp
BaseClass=CDialog
Filter=D
LastObject=CWriteDlg
VirtualFilter=dWC

[CLS:CReadDlg]
Type=0
HeaderFile=ReadDlg.h
ImplementationFile=ReadDlg.cpp
BaseClass=CDialog
Filter=D
LastObject=IDC_LIST1
VirtualFilter=dWC

[DLG:IDD_READ_DLG]
Type=1
Class=CReadDlg
ControlCount=1
Control1=IDC_LIST1,SysListView32,1350631425

