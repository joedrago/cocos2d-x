#ifndef __CCB_KEYFRAME_H__
#define __CCB_KEYFRAME_H__

#include "cocos2d.h"

namespace cocosbuilder {

class CCBKeyframe : public cocos2d::Object
{
public:
    enum class EasingType
    {
        INSTANT,
        
        LINEAR,
        
        CUBIC_IN,
        CUBIC_OUT,
        CUBIC_INOUT,
        
        ELASTIC_IN,
        ELASTIC_OUT,
        ELASTIC_INOUT,
        
        BOUNCE_IN,
        BOUNCE_OUT,
        BOUNCE_INOUT,
        
        BACK_IN,
        BACK_OUT,
        BACK_INOUT,
    };
    /**
     * @js ctor
     */
    CCBKeyframe();
    /**
     * @js NA
     * @lua NA
     */
    ~CCBKeyframe();
    
    cocos2d::Object* getValue();
    void setValue(cocos2d::Object *pValue); // retain
    
    float getTime();
    void setTime(float fTime);
    
    EasingType getEasingType();
    void setEasingType(EasingType easingType);
    
    float getEasingOpt();
    void setEasingOpt(float fEasingOpt);
    
private:
    cocos2d::Object *_value;
    float _time;
    EasingType _easingType;
    float _easingOpt;
};

}

#endif // __CCB_KEYFRAME_H__
