#pragma once


// CFirstTab �Ի���

class CFirstTab : public CDialog
{
	DECLARE_DYNAMIC(CFirstTab)

public:
	CFirstTab(CWnd* pParent = NULL);   // ��׼���캯��
	virtual ~CFirstTab();

// �Ի�������
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_FIRSTTAB };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV ֧��

	DECLARE_MESSAGE_MAP()
};
