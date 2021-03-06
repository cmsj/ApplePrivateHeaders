/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:38 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/SystemMigration.framework/Versions/A/SystemMigration
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SystemMigration/SMSystem_Client.h>

@class NSString;

@interface SMSystem_Client_RemoteTMDiskShare : SMSystem_Client {

	long long sharedSystems;
	NSString* shareName;
	NSString* humanName;

}

@property (retain) NSString * shareName; 
@property (retain) NSString * humanName; 
@property (readonly) long long sharedSystems; 
+(id)guiMonitorKeys;
+(id)keyPathsForValuesAffectingVolumeName;
+(id)keyPathsForValuesAffectingDisplayState;
-(id)displayName;
-(char)isMounted;
-(id)volumeName;
-(id)displayState;
-(NSString *)shareName;
-(long long)sharedSystems;
-(char)isMounting;
-(long long)defaultUIRank;
-(id)systemDescription;
-(id)volumeIcon;
-(id)volumeIconAccesibilityLabel;
-(id)availableActionLabel;
-(void)pressedActionButton:(id)arg1 ;
-(void)setShareName:(NSString *)arg1 ;
-(NSString *)humanName;
-(void)setHumanName:(NSString *)arg1 ;
@end

