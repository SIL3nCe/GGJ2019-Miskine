#pragma once

#include "ShSDK/ShSDK.h"
#include "ShEngineExt/ShEngineExt.h"

#include "World/World.h"

#include "Players/Player2EventManager.h"

class Plugin : public CShPlugin
{
public:
									Plugin						(void);
	virtual							~Plugin						(void);

	virtual	void					OnPlayStart					(const CShIdentifier & levelIdentifier) SH_ATTRIBUTE_OVERRIDE;
	virtual	void					OnPlayStop					(const CShIdentifier & levelIdentifier) SH_ATTRIBUTE_OVERRIDE;
	virtual	void					OnPlayPause					(const CShIdentifier & levelIdentifier) SH_ATTRIBUTE_OVERRIDE;
	virtual	void					OnPlayResume				(const CShIdentifier & levelIdentifier) SH_ATTRIBUTE_OVERRIDE;

	virtual	void					OnPreUpdate					(float dt) SH_ATTRIBUTE_OVERRIDE;
	virtual	void					OnPostUpdate				(float dt) SH_ATTRIBUTE_OVERRIDE;
	
	//
	// Touch Events
	void							OnTouchDown					(int iTouch, float positionX, float positionY);
	void							OnTouchUp					(int iTouch, float positionX, float positionY);
	void							OnTouchMove					(int iTouch, float positionX, float positionY);

	static float					GetDistanceSquared			(const CShVector2 & start, const CShVector2 & dest);

	World &							GetWorld					(void);
private:

	World				m_world;

	ShPrefab *			m_pSelectionCircle;
	CShVector2			m_vSelectionPosition;
	TowerBase *			m_pHoveredTower;

	ShEntity2 *			m_apEntitesAvailable [4];
	ShEntity2 *			m_apEntitesUnavailable[4];
};
