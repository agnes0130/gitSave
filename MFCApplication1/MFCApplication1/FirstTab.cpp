// FirstTab.cpp : 实现文件
//

#include "stdafx.h"
#include "MFCApplication1.h"
#include "FirstTab.h"
#include "afxdialogex.h"


// CFirstTab 对话框

IMPLEMENT_DYNAMIC(CFirstTab, CDialog)

CFirstTab::CFirstTab(CWnd* pParent /*=NULL*/)
	: CDialog(IDD_FIRSTTAB, pParent)
{

}

CFirstTab::~CFirstTab()
{
}

void CFirstTab::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
}


BEGIN_MESSAGE_MAP(CFirstTab, CDialog)
END_MESSAGE_MAP()


// CFirstTab 消息处理程序
