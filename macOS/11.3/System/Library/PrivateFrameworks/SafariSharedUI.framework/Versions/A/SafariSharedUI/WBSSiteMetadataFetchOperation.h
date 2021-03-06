/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:28 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/SafariSharedUI.framework/Versions/A/SafariSharedUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Foundation/NSOperation.h>

@class WBSSiteMetadataRequest;

@interface WBSSiteMetadataFetchOperation : NSOperation {

	WBSSiteMetadataRequest* _request;
	long long _status;

}

@property (setter=_setStatus:,getter=_status) long long status;               //@synthesize status=_status - In the implementation block
@property (nonatomic,readonly) WBSSiteMetadataRequest * request;              //@synthesize request=_request - In the implementation block
+(id)keyPathsForValuesAffectingValueForKey:(id)arg1 ;
-(id)init;
-(void)start;
-(long long)_status;
-(WBSSiteMetadataRequest *)request;
-(char)isFinished;
-(char)isExecuting;
-(void)_setStatus:(long long)arg1 ;
-(id)initWithRequest:(id)arg1 ;
@end

