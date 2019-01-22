#pragma once

#include <ShSDK/ShSDK.h>
#include <ShEntryPoint/ShEntryPoint.h>

#include <Plugin.h>

class Game
{
public:

	static Game * GetInstance(void);

	void Initialize();
	void Release();

	void Update(float dt);

private:
	explicit Game(void);

private:

	static Game *	m_pInstance;
};