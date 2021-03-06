/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:08 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/Safari.framework/Versions/A/Safari
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Safari/Safari-Structs.h>
#import <Foundation/NSFormatter.h>

@interface TextFieldWithLimitedMaxLengthFormatter : NSFormatter {

	unsigned long long _maxLength;

}

@property (assign,nonatomic) unsigned long long maxLength;              //@synthesize maxLength=_maxLength - In the implementation block
-(id)stringForObjectValue:(id)arg1 ;
-(char)getObjectValue:(id*)arg1 forString:(id)arg2 errorDescription:(id*)arg3 ;
-(char)isPartialStringValid:(id*)arg1 proposedSelectedRange:(NSRange*)arg2 originalString:(id)arg3 originalSelectedRange:(NSRange)arg4 errorDescription:(id*)arg5 ;
-(unsigned long long)maxLength;
-(void)setMaxLength:(unsigned long long)arg1 ;
@end

