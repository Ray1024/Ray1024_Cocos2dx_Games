#ifndef __POKER_MANAGER_H__
#define __POKER_MANAGER_H__

#include "cocos2d.h"
#include "PokerExhibitionZone.h"

class PokerManager : public cocos2d::Sprite
{

public:

	static PokerManager* create();

    virtual bool init();

	bool dealer();

	void updatePokers();

	void chuPai();

protected:

	PokerExhibitionZone* _exhibitionZone;

	std::vector<int> _pokersIndex;
};

#endif // __POKER_MANAGER_H__