#include <Windows.h>

#include "Game.h"
#include "GameState.h"
#include "GameConstant.h"

int WINAPI WinMain(HINSTANCE instanceHandle, HINSTANCE prevInstanceHandle, PSTR commandLine, int nShowCmd)
{
	bool running = true;

	try
	{
		//���� Ŭ���� ��ü ����
		GameState::Initialize(instanceHandle, nShowCmd);

		Game::gameInit();
		//���ӷ���
		while (running)
		{
			running = Game::frame();
		}

	}
	catch(wchar_t* errTxt)
	{
		//����ó��
		MessageBox(0, errTxt, 0, 0);
		return 1;
	}
	catch (char* errTxt)
	{
		//����ó��
		MessageBoxA(0, errTxt, 0, 0);
		return 1;
	}

	return 0;
}