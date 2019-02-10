#pragma once
#include "resource.h"
#include "NxStorage.h"
#include "utils.h"
#include "UIThread.h"
#include "afxeditbrowsectrl.h"
#include <afxwinappex.h>

// MainDialog dialog

class MainDialog : public CDialog
{
	DECLARE_DYNAMIC(MainDialog)

public:
	MainDialog(const char* arg_input = NULL, const char* arg_output = NULL, CWnd* pParent = NULL);   // standard constructor
	virtual ~MainDialog();

// Dialog Data
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_MAINDIALOG };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support
	virtual BOOL OnInitDialog();
	afx_msg void OnTimer(UINT nIDEvent);
	afx_msg LRESULT OnClosing(WPARAM wParam, LPARAM lParam);
	int dumpStorage(NxStorage* nxInput, NxStorage* nxOutput, u64* bytesWritten, const char* partition = NULL);
	BOOL isDirectory(const char* dir);

	CUIThread* m_pThread;
	CString	m_szMessage;
	int	m_nDownCounter;
	BOOL isDirOutput;
	DECLARE_MESSAGE_MAP()
public:
	char* input;
	char* output;

	afx_msg void OnEnChangeInput();	
	afx_msg void OnBnClickedDumpAll();
	afx_msg void OnEnChangeOutput();
	afx_msg void OnBnClickedOk();
	afx_msg void OnLbnSelchangePartlist();
	afx_msg void OnCbnSelchangeInputCombo();
	afx_msg void OnCbnEditchangeInputCombo();
};
