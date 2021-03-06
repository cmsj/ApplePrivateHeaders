/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:08 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/CoreBrightness.framework/Versions/A/CoreBrightness
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_os_log;
@class NSObject;

@interface CBNVRAM : NSObject {

	NSObject*<OS_os_log> _logHandle;
	unsigned _NVRAM;
	float _backlightNitsMin;
	float _backlightNitsMax;
	float _backlightNitsDefault;

}

@property (readonly) float backlightNitsMin;                  //@synthesize backlightNitsMin=_backlightNitsMin - In the implementation block
@property (assign) float backlightNitsMax;                    //@synthesize backlightNitsMax=_backlightNitsMax - In the implementation block
@property (readonly) float backlightNitsDefault;              //@synthesize backlightNitsDefault=_backlightNitsDefault - In the implementation block
-(void)dealloc;
-(id)init;
-(float)backlightNitsDefault;
-(float)readBacklightNits;
-(void)writeBacklightNits:(float)arg1 ;
-(float)backlightNitsMin;
-(float)backlightNitsMax;
-(void)setBacklightNitsMax:(float)arg1 ;
@end

