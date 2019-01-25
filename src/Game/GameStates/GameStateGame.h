#pragma once

#include "GameState.h"

class GameStateGame : public GameState
{

public:

	explicit			GameStateGame			(void);
	virtual				~GameStateGame			(void) override;

	void				init					(void) override;
	void				release					(void) override;

	void				entered					(void) override;
	void				exiting					(void) override;

	void				obscuring				(void) override;
	void				revealed				(void) override;

	void				update					(float dt) override;

	void				touchBegin				(const CShVector2 & pos, float ratio) override;
	void				touchEnd				(const CShVector2 & pos, float ratio) override;
	void				touchMove				(const CShVector2 & pos, float ratio) override;

};