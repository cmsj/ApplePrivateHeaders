/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:23 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/AudioDSPManager.framework/Versions/A/AudioDSPManager
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSMutableArray;

@interface ADNotificationDarwinNotificationClientList : NSObject {

	int mRegistrationToken;
	NSString* _notificationName;
	NSMutableArray* _clientList;

}

@property (nonatomic,retain) NSString * notificationName;              //@synthesize notificationName=_notificationName - In the implementation block
@property (nonatomic,retain) NSMutableArray * clientList;              //@synthesize clientList=_clientList - In the implementation block
-(id)initWithName:(id)arg1 ;
-(void)signal;
-(NSString *)notificationName;
-(void)setNotificationName:(NSString *)arg1 ;
-(NSMutableArray *)clientList;
-(void)setClientList:(NSMutableArray *)arg1 ;
@end

