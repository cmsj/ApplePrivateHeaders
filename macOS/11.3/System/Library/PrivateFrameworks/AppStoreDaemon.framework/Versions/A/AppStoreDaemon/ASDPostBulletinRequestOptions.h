/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:04 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/AppStoreDaemon.framework/Versions/A/AppStoreDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AppStoreDaemon/ASDRequestOptions.h>

@class NSString, NSURL, NSDate;

@interface ASDPostBulletinRequestOptions : ASDRequestOptions {

	NSString* _actionButtonTitle;
	NSURL* _actionButtonURL;
	NSDate* _creationDate;
	unsigned long long _destinations;
	NSURL* _launchURL;
	NSString* _message;
	NSString* _recordID;
	NSString* _title;

}

@property (nonatomic,copy) NSString * actionButtonTitle;                   //@synthesize actionButtonTitle=_actionButtonTitle - In the implementation block
@property (nonatomic,copy) NSURL * actionButtonURL;                        //@synthesize actionButtonURL=_actionButtonURL - In the implementation block
@property (nonatomic,copy) NSDate * creationDate;                          //@synthesize creationDate=_creationDate - In the implementation block
@property (assign,nonatomic) unsigned long long destinations;              //@synthesize destinations=_destinations - In the implementation block
@property (nonatomic,copy) NSURL * launchURL;                              //@synthesize launchURL=_launchURL - In the implementation block
@property (nonatomic,copy) NSString * message;                             //@synthesize message=_message - In the implementation block
@property (nonatomic,copy) NSString * recordID;                            //@synthesize recordID=_recordID - In the implementation block
@property (nonatomic,copy) NSString * title;                               //@synthesize title=_title - In the implementation block
-(id)init;
-(NSString *)message;
-(void)setTitle:(NSString *)arg1 ;
-(void)setMessage:(NSString *)arg1 ;
-(NSString *)title;
-(NSString *)actionButtonTitle;
-(void)setActionButtonTitle:(NSString *)arg1 ;
-(NSDate *)creationDate;
-(NSString *)recordID;
-(void)setCreationDate:(NSDate *)arg1 ;
-(void)setRecordID:(NSString *)arg1 ;
-(unsigned long long)destinations;
-(void)setDestinations:(unsigned long long)arg1 ;
-(NSURL *)actionButtonURL;
-(void)setActionButtonURL:(NSURL *)arg1 ;
-(NSURL *)launchURL;
-(void)setLaunchURL:(NSURL *)arg1 ;
@end

