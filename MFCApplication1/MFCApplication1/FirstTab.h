#pragma once


// CFirstTab 对话框

class CFirstTab : public CDialog
{
	DECLARE_DYNAMIC(CFirstTab)

public:
	CFirstTab(CWnd* pParent = NULL);   // 标准构造函数
	virtual ~CFirstTab();

// 对话框数据
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_FIRSTTAB };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 支持

	DECLARE_MESSAGE_MAP()
};
