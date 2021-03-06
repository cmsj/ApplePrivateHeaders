/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:08 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/CoreBrightness.framework/Versions/A/CoreBrightness
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_os_log;
@class NSArray, NSMutableDictionary, NSObject;

@interface CBPresetsParser : NSObject {

	NSArray* _displayList;
	NSMutableDictionary* _displayPresets;
	NSObject*<OS_os_log> _logHandle;

}
+(id)sharedInstance;
-(void)dealloc;
-(id)init;
-(void)refreshPresetState;
-(void)setDisplayList:(id)arg1 ;
-(char)trueToneDisabled;
-(char)nightShiftDisabled;
-(char)autoBrightnessDisabledForDisplay:(unsigned long long)arg1 ;
-(char)brightnessDisabledForDisplay:(unsigned long long)arg1 ;
@end

