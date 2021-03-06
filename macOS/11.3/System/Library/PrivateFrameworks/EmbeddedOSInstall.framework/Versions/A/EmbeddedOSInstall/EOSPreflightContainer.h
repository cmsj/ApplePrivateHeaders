/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:03 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/EmbeddedOSInstall.framework/Versions/A/EmbeddedOSInstall
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSURL, EOSRestoreBundle, NSString, NSData, NSDate;

@interface EOSPreflightContainer : NSObject {

	NSURL* _url;
	EOSRestoreBundle* _restoreBundle;
	NSString* _tag;
	NSURL* _fdrDataURL;
	NSData* _apNonce;
	NSDate* _datePreflighted;

}

@property (retain) NSURL * url;                                   //@synthesize url=_url - In the implementation block
@property (retain) EOSRestoreBundle * restoreBundle;              //@synthesize restoreBundle=_restoreBundle - In the implementation block
@property (retain) NSString * tag;                                //@synthesize tag=_tag - In the implementation block
@property (retain) NSURL * fdrDataURL;                            //@synthesize fdrDataURL=_fdrDataURL - In the implementation block
@property (retain) NSData * apNonce;                              //@synthesize apNonce=_apNonce - In the implementation block
@property (retain) NSDate * datePreflighted;                      //@synthesize datePreflighted=_datePreflighted - In the implementation block
-(id)description;
-(NSURL *)url;
-(void)setUrl:(NSURL *)arg1 ;
-(void)setTag:(NSString *)arg1 ;
-(NSString *)tag;
-(NSURL *)fdrDataURL;
-(void)setRestoreBundle:(EOSRestoreBundle *)arg1 ;
-(EOSRestoreBundle *)restoreBundle;
-(void)setFdrDataURL:(NSURL *)arg1 ;
-(void)setApNonce:(NSData *)arg1 ;
-(void)setDatePreflighted:(NSDate *)arg1 ;
-(NSDate *)datePreflighted;
-(NSData *)apNonce;
@end

