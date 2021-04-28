/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:19 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/LinkPresentation.framework/Versions/A/LinkPresentation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <LinkPresentation/LPFetcherResponse.h>

@class NSError;

@interface LPFetcherErrorResponse : LPFetcherResponse {

	NSError* _error;

}

@property (nonatomic,retain,readonly) NSError * error;              //@synthesize error=_error - In the implementation block
-(NSError *)error;
-(id)initWithError:(id)arg1 fetcher:(id)arg2 ;
@end
