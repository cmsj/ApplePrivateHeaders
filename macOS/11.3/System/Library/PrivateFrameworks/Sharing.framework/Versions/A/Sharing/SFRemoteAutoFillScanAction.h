/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:11 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/Sharing.framework/Versions/A/Sharing
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSURL;

@interface SFRemoteAutoFillScanAction : NSObject {

	NSString* _message;
	NSString* _title;
	NSURL* _url;

}

@property (nonatomic,copy) NSString * message;              //@synthesize message=_message - In the implementation block
@property (nonatomic,copy) NSString * title;                //@synthesize title=_title - In the implementation block
@property (nonatomic,copy) NSURL * url;                     //@synthesize url=_url - In the implementation block
+(void)actionForURL:(id)arg1 completion:(/*^block*/id)arg2 ;
-(NSURL *)url;
-(NSString *)message;
-(void)setUrl:(NSURL *)arg1 ;
-(void)setTitle:(NSString *)arg1 ;
-(void)setMessage:(NSString *)arg1 ;
-(NSString *)title;
-(void)performWithCompletion:(/*^block*/id)arg1 ;
@end
