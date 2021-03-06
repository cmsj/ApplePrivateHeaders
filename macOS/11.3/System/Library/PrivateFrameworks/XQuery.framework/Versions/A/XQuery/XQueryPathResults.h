/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:35 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/XQuery.framework/Versions/A/XQuery
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <XQuery/XQuery-Structs.h>
@class NSMutableArray;

@interface XQueryPathResults : NSObject {

	id _firstResult;
	NSMutableArray* _array;
	CFSetRef _unique;
	char _isReversed;
	long long _type;

}
+(id)pathResults;
-(void)finalize;
-(void)dealloc;
-(id)init;
-(id)value:(char)arg1 ;
-(void)setIsReversed:(char)arg1 ;
-(void)add:(id)arg1 context:(id)arg2 ;
@end

