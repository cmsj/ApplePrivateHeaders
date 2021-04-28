/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:29 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/AccessibilitySupport.framework/Versions/A/Frameworks/AccessibilityVisuals.framework/Versions/A/AccessibilityVisuals
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface AXVWindowSpace : NSObject {

	char __wasSpaceCreatedByThisProcess;
	unsigned __cgsMainConnection;
	NSString* _uuid;
	unsigned long long __spaceID;

}

@property (assign,nonatomic) unsigned _cgsMainConnection;                     //@synthesize _cgsMainConnection=__cgsMainConnection - In the implementation block
@property (assign,nonatomic) unsigned long long _spaceID;                     //@synthesize _spaceID=__spaceID - In the implementation block
@property (assign,nonatomic) char _wasSpaceCreatedByThisProcess;              //@synthesize _wasSpaceCreatedByThisProcess=__wasSpaceCreatedByThisProcess - In the implementation block
@property (nonatomic,readonly) unsigned long long level; 
@property (nonatomic,copy,readonly) NSString * uuid;                          //@synthesize uuid=_uuid - In the implementation block
+(id)sharedSpaceAtVoiceOverLevel;
+(unsigned long long)_spaceIDForSpaceUUID:(id)arg1 createIfNonExistant:(char)arg2 ;
+(unsigned long long)_axvWindowSpaceLevelFromSLSSpaceAbsoluteLevel:(int)arg1 ;
+(int)_slsSpaceAbsoluteLevelFromAXVWindowSpaceLevel:(unsigned long long)arg1 ;
+(id)sharedSpaceAtDefaultLevel;
+(id)sharedSpaceAtSetupAssistantLevel;
+(id)existingSpaceWithUUID:(id)arg1 ;
+(unsigned long long)_spaceLevelForSpaceID:(unsigned long long)arg1 ;
-(void)dealloc;
-(NSString *)uuid;
-(unsigned long long)level;
-(void)removeWindow:(id)arg1 ;
-(void)addWindow:(id)arg1 ;
-(void)hide;
-(void)show;
-(unsigned long long)_spaceID;
-(id)_initWithWindowSpaceLevel:(unsigned long long)arg1 ;
-(id)_initWithSpaceUUID:(id)arg1 spaceID:(unsigned long long)arg2 ;
-(unsigned)_cgsMainConnection;
-(void)addWindows:(id)arg1 ;
-(void)removeWindows:(id)arg1 ;
-(void)set_cgsMainConnection:(unsigned)arg1 ;
-(void)set_spaceID:(unsigned long long)arg1 ;
-(char)_wasSpaceCreatedByThisProcess;
-(void)set_wasSpaceCreatedByThisProcess:(char)arg1 ;
@end
