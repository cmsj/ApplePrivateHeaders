/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:37 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/CalendarPersistence.framework/Versions/A/CalendarPersistence
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSURL, NSString;

@interface CalDAVScanResponse : NSObject {

	NSURL* _fileURL;
	NSString* _etag;

}

@property (retain) NSURL * fileURL;              //@synthesize fileURL=_fileURL - In the implementation block
@property (retain) NSString * etag;              //@synthesize etag=_etag - In the implementation block
-(NSURL *)fileURL;
-(NSString *)etag;
-(void)setFileURL:(NSURL *)arg1 ;
-(void)setEtag:(NSString *)arg1 ;
-(id)initWithFileURL:(id)arg1 etag:(id)arg2 ;
@end

