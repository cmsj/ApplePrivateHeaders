/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:46 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/CoreDAV.framework/Versions/A/CoreDAV
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreDAV/CoreDAVTask.h>

@class NSURL;

@interface CoreDAVCopyOrMoveTask : CoreDAVTask {

	int _overwrite;
	NSURL* _destinationURL;
	NSURL* _priorOrderedURL;
	char _shouldSendOrder;

}

@property (assign,nonatomic) int overwrite;                        //@synthesize overwrite=_overwrite - In the implementation block
@property (nonatomic,retain) NSURL * destinationURL;               //@synthesize destinationURL=_destinationURL - In the implementation block
@property (nonatomic,retain) NSURL * priorOrderedURL;              //@synthesize priorOrderedURL=_priorOrderedURL - In the implementation block
+(id)stringFromOverwriteValue:(int)arg1 ;
-(id)description;
-(id)initWithURL:(id)arg1 ;
-(NSURL *)destinationURL;
-(void)setDestinationURL:(NSURL *)arg1 ;
-(int)overwrite;
-(void)setOverwrite:(int)arg1 ;
-(id)additionalHeaderValues;
-(id)requestBody;
-(void)finishCoreDAVTaskWithError:(id)arg1 ;
-(id)initWithSourceURL:(id)arg1 destinationURL:(id)arg2 ;
-(void)setPriorOrderedURL:(NSURL *)arg1 ;
-(NSURL *)priorOrderedURL;
-(id)initWithSourceURL:(id)arg1 destinationURL:(id)arg2 andOverwrite:(int)arg3 ;
-(void)_callBackToDelegateWithResponses:(id)arg1 error:(id)arg2 ;
@end

