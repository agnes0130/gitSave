#pragma once


// CSecondTab �Ի���

class CSecondTab : public CDialog
{
	DECLARE_DYNAMIC(CSecondTab)

public:
	CSecondTab(CWnd* pParent = NULL);   // ��׼���캯��
	virtual ~CSecondTab();

// �Ի�������
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_SECONDTAB };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV ֧��

	DECLARE_MESSAGE_MAP()
};
