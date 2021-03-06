/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:52 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/Slideshows.framework/Versions/A/Frameworks/OpusKit.framework/Versions/A/OpusKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <OpusKit/OKWidgetSceneKitGeometry.h>

@class SCNPlane;

@interface OKWidgetSceneKitPlane : OKWidgetSceneKitGeometry {

	SCNPlane* _plane;

}
+(id)supportedSettings;
-(void)dealloc;
-(id)initWithSettings:(id)arg1 ;
-(id)settingObjectForKey:(id)arg1 ;
-(void)setUserSettingObject:(id)arg1 forKey:(id)arg2 ;
-(void)setSettingWidth:(double)arg1 ;
-(void)setSettingHeight:(double)arg1 ;
-(void)setSettingWidthSegmentCount:(long long)arg1 ;
-(void)setSettingHeightSegmentCount:(long long)arg1 ;
-(double)settingWidth;
-(double)settingHeight;
-(long long)settingWidthSegmentCount;
-(long long)settingHeightSegmentCount;
@end

