#pragma once

#include <gd.h>

class CustomCreatorLayer : public cocos2d::CCLayer {
protected:
    virtual bool init();
    virtual void keyBackClicked();
    void onBack(cocos2d::CCObject*);
    void onFeatured(cocos2d::CCObject*);
    void onMostLiked(cocos2d::CCObject*);
    void onUpdate(cocos2d::CCObject*);
public:
    static CustomCreatorLayer* create();
    static cocos2d::CCScene* scene();
};