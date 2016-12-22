#ifndef __CARD_EXHIBITION_ZONE_H__
#define __CARD_EXHIBITION_ZONE_H__

#include "cocos2d.h"
#include "Card.h"

class CardExhibitionZone : public cocos2d::Sprite
{

public:

	static CardExhibitionZone* create();

    virtual bool init();

	void chuPai(std::vector<CardInfo> arrayIndexs);
};

#endif // __CARD_EXHIBITION_ZONE_H__
