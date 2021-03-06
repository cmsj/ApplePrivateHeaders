/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:04 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/CloudDocs.framework/Versions/A/CloudDocs
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Foundation/NSProgress.h>

@class NSMetadataQuery, NSOperationQueue;

@interface BRDownloadProgressProxy : NSProgress {

	NSMetadataQuery* _query;
	NSOperationQueue* _queue;

}
-(id)initWithURL:(id)arg1 ;
-(void)start;
-(void)stop;
-(void)_queryDidReceiveUpdate:(id)arg1 ;
@end

