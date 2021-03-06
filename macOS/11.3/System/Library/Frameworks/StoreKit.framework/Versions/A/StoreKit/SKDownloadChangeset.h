/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:31 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/StoreKit.framework/Versions/A/StoreKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <StoreKit/StoreKit-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSNumber, NSURL, NSError;

@interface SKDownloadChangeset : NSObject <NSCopying> {

	NSNumber* _contentLength;
	NSURL* _contentURL;
	NSNumber* _downloadID;
	NSNumber* _downloadState;
	NSError* _error;
	NSNumber* _progress;
	NSNumber* _timeRemaining;

}

@property (nonatomic,copy) NSNumber * contentLength;              //@synthesize contentLength=_contentLength - In the implementation block
@property (nonatomic,copy) NSURL * contentURL;                    //@synthesize contentURL=_contentURL - In the implementation block
@property (nonatomic,copy) NSNumber * downloadID;                 //@synthesize downloadID=_downloadID - In the implementation block
@property (nonatomic,copy) NSNumber * downloadState;              //@synthesize downloadState=_downloadState - In the implementation block
@property (nonatomic,copy) NSError * error;                       //@synthesize error=_error - In the implementation block
@property (nonatomic,copy) NSNumber * progress;                   //@synthesize progress=_progress - In the implementation block
@property (nonatomic,copy) NSNumber * timeRemaining;              //@synthesize timeRemaining=_timeRemaining - In the implementation block
+(id)changesetWithDownloadID:(id)arg1 state:(long long)arg2 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSError *)error;
-(void)setError:(NSError *)arg1 ;
-(NSNumber *)progress;
-(void)setProgress:(NSNumber *)arg1 ;
-(NSURL *)contentURL;
-(void)setContentURL:(NSURL *)arg1 ;
-(NSNumber *)contentLength;
-(void)setContentLength:(NSNumber *)arg1 ;
-(NSNumber *)timeRemaining;
-(void)setTimeRemaining:(NSNumber *)arg1 ;
-(NSNumber *)downloadID;
-(NSNumber *)downloadState;
-(void)setDownloadState:(NSNumber *)arg1 ;
-(id)initWithXPCEncoding:(id)arg1 ;
-(id)copyXPCEncoding;
-(void)setDownloadID:(NSNumber *)arg1 ;
@end

