
// MessageSender.h : PROJECT_NAME Ӧ�ó������ͷ�ļ�
//

#pragma once

#ifndef __AFXWIN_H__
	#error "�ڰ������ļ�֮ǰ������stdafx.h�������� PCH �ļ�"
#endif

#include "resource.h"		// ������


// CMessageSenderApp: 
// �йش����ʵ�֣������ MessageSender.cpp
//

class CMessageSenderApp : public CWinApp
{
public:
	CMessageSenderApp();

// ��д
public:
	virtual BOOL InitInstance();

// ʵ��

	DECLARE_MESSAGE_MAP()
};

extern CMessageSenderApp theApp;