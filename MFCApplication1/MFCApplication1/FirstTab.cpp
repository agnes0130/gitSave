// FirstTab.cpp : ʵ���ļ�
//

#include "stdafx.h"
#include "MFCApplication1.h"
#include "FirstTab.h"
#include "afxdialogex.h"


// CFirstTab �Ի���

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


// CFirstTab ��Ϣ�������
