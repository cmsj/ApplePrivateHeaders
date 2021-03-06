/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:30 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/WebContentAnalysis.framework/Versions/A/WebContentAnalysis
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSURL, NSMutableData;

@interface WebFilterEvaluator : NSObject {

	unsigned long long _filterState;
	NSURL* _url;
	NSMutableData* _buffer;

}
+(id)createWithResponse:(id)arg1 ;
+(char)isManagedSession;
-(id)blockPageForPageWithTitle:(id)arg1 origURL:(id)arg2 ;
-(char)wasBlocked;
-(void)dealloc;
-(id)initWithResponse:(id)arg1 ;
-(id)addData:(id)arg1 ;
-(id)dataComplete;
-(int)filterState;
@end

