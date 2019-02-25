#pragma once


// CSecondTab 对话框

class CSecondTab : public CDialog
{
	DECLARE_DYNAMIC(CSecondTab)

public:
	CSecondTab(CWnd* pParent = NULL);   // 标准构造函数
	virtual ~CSecondTab();

// 对话框数据
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_SECONDTAB };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 支持

	DECLARE_MESSAGE_MAP()
};
