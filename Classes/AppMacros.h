#ifndef __APPMACROS_H__
#define __APPMACROS_H__

#include "cocos2d.h"

#define DESIGN_RESOLUTION_480X320    0
#define DESIGN_RESOLUTION_1024X768   1
#define DESIGN_RESOLUTION_2048X1536  2

/* If you want to switch design resolution, change next line */
#define TARGET_DESIGN_RESOLUTION_SIZE  DESIGN_RESOLUTION_480X320

typedef struct tagResource
{
    cocos2d::CCSize size;
    char directory[100];
} Resource;

static Resource smallResource  = { cocos2d::CCSizeMake( 512,  384), "S"};
static Resource mediumResource = { cocos2d::CCSizeMake(1024,  768), "M"};
static Resource largeResource  = { cocos2d::CCSizeMake(2048, 1536), "L"};

static cocos2d::CCSize designResolutionSize = cocos2d::CCSizeMake(1024, 768);

#define NUMBER_FONT_SIZE (cocos2d::CCEGLView::sharedOpenGLView()->getDesignResolutionSize().width / mediumResource.size.width * 48)

#endif // __APPMACROS_H__

