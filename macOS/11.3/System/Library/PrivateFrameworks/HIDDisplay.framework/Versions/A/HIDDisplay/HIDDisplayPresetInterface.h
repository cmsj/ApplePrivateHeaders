/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:31 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/HIDDisplay.framework/Versions/A/HIDDisplay
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HIDDisplay/HIDDisplayInterface.h>

@class NSDictionary, NSArray;

@interface HIDDisplayPresetInterface : HIDDisplayInterface {

	NSDictionary* _usageElementMap;
	NSArray* _presets;

}

@property (readonly) NSArray * presets;              //@synthesize presets=_presets - In the implementation block
-(id)capabilities;
-(id)initWithService:(unsigned)arg1 ;
-(id)initWithContainerID:(id)arg1 ;
-(NSArray *)presets;
-(id)getHIDDevices;
-(id)initWithMatching:(id)arg1 ;
-(char)setupPresets;
-(void)createPresets;
-(id)getHIDElementForUsage:(long long)arg1 ;
-(long long)getFactoryDefaultPresetIndex:(id*)arg1 ;
-(long long)getActivePresetIndex:(id*)arg1 ;
-(char)setActivePresetIndex:(long long)arg1 error:(id*)arg2 ;
-(char)setCurrentPresetIndex:(long long)arg1 error:(id*)arg2 ;
-(long long)getCurrentPresetIndex:(id*)arg1 ;
@end

