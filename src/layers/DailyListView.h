#pragma once

#include <gd.h>

class DailyListView : public gd::CustomListView {
protected:
    void setupList() override;
    gd::TableViewCell* getListCell(const char* key) override;
    void loadCell(gd::TableViewCell* cell, unsigned int index) override;
    
public:
    static DailyListView* create(cocos2d::CCArray* levels, float width, float height);
};