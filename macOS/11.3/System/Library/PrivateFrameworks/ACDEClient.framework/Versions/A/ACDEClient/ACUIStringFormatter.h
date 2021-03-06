/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:45 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/ACDEClient.framework/Versions/A/ACDEClient
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ACDEClient/ACDEClient-Structs.h>
#import <Foundation/NSFormatter.h>

@class NSString;

@interface ACUIStringFormatter : NSFormatter {

	unsigned long long _limit;
	NSString* _limitErrorString;
	char _shouldBeepOnError;

}

@property (assign) unsigned long long limit;                 //@synthesize limit=_limit - In the implementation block
@property (retain) NSString * limitErrorString;              //@synthesize limitErrorString=_limitErrorString - In the implementation block
@property (assign) char shouldBeepOnError;                   //@synthesize shouldBeepOnError=_shouldBeepOnError - In the implementation block
-(void)dealloc;
-(id)init;
-(unsigned long long)limit;
-(void)setLimit:(unsigned long long)arg1 ;
-(id)stringForObjectValue:(id)arg1 ;
-(char)getObjectValue:(id*)arg1 forString:(id)arg2 errorDescription:(id*)arg3 ;
-(char)isPartialStringValid:(id*)arg1 proposedSelectedRange:(NSRange*)arg2 originalString:(id)arg3 originalSelectedRange:(NSRange)arg4 errorDescription:(id*)arg5 ;
-(void)setLimitErrorString:(NSString *)arg1 ;
-(void)setShouldBeepOnError:(char)arg1 ;
-(char)shouldBeepOnError;
-(NSString *)limitErrorString;
@end

