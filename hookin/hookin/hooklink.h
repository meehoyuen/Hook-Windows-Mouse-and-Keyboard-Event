#pragma once

#include "hookin.h"

//
//�����ڿ�ʼHOOK֮��ᷢ�͸�ָ�������Զ����¼����£�
//���������Ϣ���¼�ID UINT gl_MOUSEHOOk_MSG = WM_USER + 1005;
//���м�����Ϣ���¼�ID UINT gl_KEYHOOK_MSG = WM_USER + 1006;
//
//

class Chooklink :public Chookin
{
public:
	Chooklink();
	~Chooklink();
	//
	//��ʼHOOK���
	//����hwnd����HOOK�¼��Ĵ���
	//
	virtual BOOL startMousehook(HWND hwnd);

	//ֹͣHOOK���
	virtual BOOL stopMousehook();

	//
	//��ʼHOOK���̣�
	//����hwnd����HOOK�¼��Ĵ���
	//
	virtual BOOL startKeyboardhook(HWND hwnd);

	//ֹͣHOOK����
	virtual BOOL stopKeyboardhook();
	virtual void Rerealse();


};