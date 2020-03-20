#pragma once

#include "stdafx.h"

#ifdef HOOKIN_EXPORTS
#define HOOKIN_API __declspec(dllexport)
#else 
#define  HOOKIN_API __declspec(dllimport)
#endif
//
//�����ڿ�ʼHOOK֮��ᷢ�͸�ָ�������Զ����¼����£�
//���������Ϣ���¼�ID UINT gl_MOUSEHOOk_MSG = WM_USER + 1005;
//���м�����Ϣ���¼�ID UINT gl_KEYHOOK_MSG = WM_USER + 1006;
//
//

class Chookin
{
public:
	//
	//��ʼHOOK���
	//����hwnd����HOOK�¼��Ĵ���
	//
	virtual BOOL startMousehook(HWND hwnd) = 0;

	//ֹͣHOOK���
	virtual BOOL stopMousehook() = 0;

	//
	//��ʼHOOK���̣�
	//����hwnd����HOOK�¼��Ĵ���
	//
	virtual BOOL startKeyboardhook(HWND hwnd) = 0;

	//ֹͣHOOK����
	virtual BOOL stopKeyboardhook() = 0;
	virtual void Rerealse() = 0;


};

extern "C"
HOOKIN_API Chookin* APIENTRY CreateChookinObj();

extern "C"
HOOKIN_API void APIENTRY DestroyChookinObj(Chookin* pChookin);
