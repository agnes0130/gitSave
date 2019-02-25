// SecondTab.cpp : 实现文件
//

#include "stdafx.h"
#include "MFCApplication1.h"
#include "SecondTab.h"
#include "afxdialogex.h"


// CSecondTab 对话框

IMPLEMENT_DYNAMIC(CSecondTab, CDialog)

CSecondTab::CSecondTab(CWnd* pParent /*=NULL*/)
	: CDialog(IDD_SECONDTAB, pParent)
{

}

CSecondTab::~CSecondTab()
{
}

void CSecondTab::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
}


BEGIN_MESSAGE_MAP(CSecondTab, CDialog)
END_MESSAGE_MAP()


// CSecondTab 消息处理程序
