
// AdCloseDlg.h : ͷ�ļ�
//

#pragma once
#include "afxcmn.h"


// CAdCloseDlg �Ի���
class CAdCloseDlg : public CDialog
{
// ����
public:
	CAdCloseDlg(CWnd* pParent = NULL);	// ��׼���캯��

// �Ի�������
	enum { IDD = IDD_ADCLOSE_DIALOG };

	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV ֧��


// ʵ��
protected:
	HICON m_hIcon;

	// ���ɵ���Ϣӳ�亯��
	virtual BOOL OnInitDialog();
	afx_msg void OnSysCommand(UINT nID, LPARAM lParam);
	afx_msg void OnPaint();
	afx_msg HCURSOR OnQueryDragIcon();
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnBnClickedWork();
	afx_msg void OnTimer(UINT_PTR nIDEvent);
	afx_msg LRESULT OnAcNid(WPARAM wp, LPARAM lp);

	void ToTray();
	afx_msg void OnTrayClose();
	afx_msg void OnClose();
	CListCtrl m_list;
};
