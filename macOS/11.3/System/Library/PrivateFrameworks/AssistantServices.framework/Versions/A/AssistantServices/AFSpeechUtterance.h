/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:39 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/AssistantServices.framework/Versions/A/AssistantServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSArray;

@interface AFSpeechUtterance : NSObject <NSSecureCoding> {

	NSArray* _interpretationIndices;
	long long _confidenceScore;
	long long _source;

}

@property (nonatomic,copy) NSArray * interpretationIndices;              //@synthesize interpretationIndices=_interpretationIndices - In the implementation block
@property (assign,nonatomic) long long confidenceScore;                  //@synthesize confidenceScore=_confidenceScore - In the implementation block
@property (assign,nonatomic) long long source;                           //@synthesize source=_source - In the implementation block
+(char)supportsSecureCoding;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(long long)source;
-(id)dictionaryRepresentation;
-(void)setSource:(long long)arg1 ;
-(void)setConfidenceScore:(long long)arg1 ;
-(long long)confidenceScore;
-(NSArray *)interpretationIndices;
-(void)setInterpretationIndices:(NSArray *)arg1 ;
-(id)initWithInterpretationIndices:(id)arg1 confidenceScore:(long long)arg2 ;
@end

