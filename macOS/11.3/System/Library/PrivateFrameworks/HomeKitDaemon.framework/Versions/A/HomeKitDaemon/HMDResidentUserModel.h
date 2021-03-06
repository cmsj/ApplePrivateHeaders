/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:25 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/Versions/A/HomeKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HomeKitDaemon/HMDUserModel.h>

@class NSString, HMDDevice, NSNumber;

@interface HMDResidentUserModel : HMDUserModel {

	NSString* _displayName;

}

@property (nonatomic,retain) HMDDevice * device; 
@property (nonatomic,retain) NSNumber * configState; 
@property (nonatomic,retain) NSString * displayName;                   //@synthesize displayName=_displayName - In the implementation block
@property (nonatomic,retain) NSString * deviceIdentifier; 
+(id)properties;
-(NSString *)displayName;
-(void)setDisplayName:(NSString *)arg1 ;
@end

