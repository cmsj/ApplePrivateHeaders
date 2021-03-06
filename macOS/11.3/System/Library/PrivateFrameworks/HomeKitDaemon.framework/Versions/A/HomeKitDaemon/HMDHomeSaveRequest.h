/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:25 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/Versions/A/HomeKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HMFoundation/HMFObject.h>

@class HMDHome, NSString, NSDictionary;

@interface HMDHomeSaveRequest : HMFObject {

	char _objectChange;
	char _incrementGeneration;
	HMDHome* _home;
	NSString* _reason;
	NSDictionary* _information;
	unsigned long long _saveOptions;

}

@property (nonatomic,readonly) HMDHome * home;                              //@synthesize home=_home - In the implementation block
@property (nonatomic,readonly) NSString * reason;                           //@synthesize reason=_reason - In the implementation block
@property (nonatomic,readonly) NSDictionary * information;                  //@synthesize information=_information - In the implementation block
@property (nonatomic,readonly) unsigned long long saveOptions;              //@synthesize saveOptions=_saveOptions - In the implementation block
@property (nonatomic,readonly) char objectChange;                           //@synthesize objectChange=_objectChange - In the implementation block
@property (nonatomic,readonly) char incrementGeneration;                    //@synthesize incrementGeneration=_incrementGeneration - In the implementation block
-(NSString *)reason;
-(unsigned long long)saveOptions;
-(HMDHome *)home;
-(NSDictionary *)information;
-(id)initWithHome:(id)arg1 reason:(id)arg2 information:(id)arg3 postSyncNotification:(char)arg4 objectChange:(char)arg5 ;
-(char)objectChange;
-(id)initWithReason:(id)arg1 information:(id)arg2 saveOptions:(unsigned long long)arg3 ;
-(id)initWithReason:(id)arg1 information:(id)arg2 postSyncNotification:(char)arg3 ;
-(id)_initWithHome:(id)arg1 reason:(id)arg2 information:(id)arg3 postSyncNotification:(char)arg4 objectChange:(char)arg5 saveOptions:(unsigned long long)arg6 ;
-(void)_updateSaveOptions:(char)arg1 reason:(id)arg2 ;
-(char)incrementGeneration;
@end

