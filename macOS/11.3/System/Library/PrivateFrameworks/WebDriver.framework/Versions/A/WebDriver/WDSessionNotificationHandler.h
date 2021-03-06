/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:55 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/WebDriver.framework/Versions/A/WebDriver
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface WDSessionNotificationHandler : NSObject {

	unsigned long long _registrationID;
	NSString* _type;
	/*^block*/id _block;

}

@property (assign,nonatomic) unsigned long long registrationID;              //@synthesize registrationID=_registrationID - In the implementation block
@property (nonatomic,retain) NSString * type;                                //@synthesize type=_type - In the implementation block
@property (nonatomic,copy) id block;                                         //@synthesize block=_block - In the implementation block
+(id)handlerForNotification:(id)arg1 withBlock:(/*^block*/id)arg2 ;
-(void)setType:(NSString *)arg1 ;
-(NSString *)type;
-(id)block;
-(void)setBlock:(id)arg1 ;
-(unsigned long long)registrationID;
-(void)setRegistrationID:(unsigned long long)arg1 ;
@end

