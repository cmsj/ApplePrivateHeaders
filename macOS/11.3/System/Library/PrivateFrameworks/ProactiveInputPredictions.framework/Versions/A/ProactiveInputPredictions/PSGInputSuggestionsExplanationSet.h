/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:32 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/ProactiveInputPredictions.framework/Versions/A/ProactiveInputPredictions
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ProactiveInputPredictions/ProactiveInputPredictions-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class _PASLock;

@interface PSGInputSuggestionsExplanationSet : NSObject <NSSecureCoding, NSCopying> {

	_PASLock* _lock;

}
+(char)supportsSecureCoding;
+(id)stringFromExplanationCode:(unsigned)arg1 ;
+(id)_stringFromExplanation:(unsigned char)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)init;
-(unsigned long long)count;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithSet:(id)arg1 ;
-(void)enumerateExplanationCodeWithBlock:(/*^block*/id)arg1 ;
-(void)_pushExplanationCode:(unsigned short)arg1 namespaceId:(unsigned short)arg2 ;
-(void)pushInternalExplanationCode:(unsigned)arg1 ;
-(void)pushPortraitExplanationCode:(unsigned char)arg1 ;
-(char)hasPETLoggingData;
-(char)hasContactsServingError;
-(char)hasTriggeringXPCTimeout;
-(char)isEqualToExplanationSet:(id)arg1 ;
@end

