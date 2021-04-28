/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:09 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/WPDaemon.framework/Versions/A/WPDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface WPDPersistence : NSObject {

	char _isRangingEnabled;
	char _needsInit;
	char _systemFirstUnlocked;
	NSString* _bootUUID;

}

@property (assign,nonatomic) char needsInit;                        //@synthesize needsInit=_needsInit - In the implementation block
@property (assign,nonatomic) char systemFirstUnlocked;              //@synthesize systemFirstUnlocked=_systemFirstUnlocked - In the implementation block
@property (nonatomic,retain) NSString * bootUUID;                   //@synthesize bootUUID=_bootUUID - In the implementation block
@property (assign,nonatomic) char isRangingEnabled;                 //@synthesize isRangingEnabled=_isRangingEnabled - In the implementation block
-(void)dealloc;
-(id)init;
-(NSString *)bootUUID;
-(id)currentBootSessionUUID;
-(void)synchronisePrefs;
-(void)writeBoolProperty:(id)arg1 Value:(char)arg2 ;
-(void)writeStringProperty:(id)arg1 Value:(id)arg2 ;
-(void)setSystemFirstUnlocked:(char)arg1 ;
-(void)setNeedsInit:(char)arg1 ;
-(char)needsInit;
-(id)readStringPropertyValue:(id)arg1 ;
-(char)readBoolPropertyValue:(id)arg1 ;
-(void)setIsRangingEnabled:(char)arg1 ;
-(char)isRangingEnabled;
-(char)systemFirstUnlocked;
-(void)firstUnlockedWithEvent:(char)arg1 ;
-(void)deletePropertyValue:(id)arg1 ;
-(void)setBootUUID:(NSString *)arg1 ;
@end
