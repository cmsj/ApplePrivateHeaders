/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:20 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/vCard.framework/Versions/A/vCard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSArray;

@interface CNVCardReadingOptions : NSObject {

	char _useConcurrentParsing;
	unsigned long long _contactLimit;
	NSArray* _propertiesToFetch;
	unsigned long long _maximumValueLength;

}

@property (assign,nonatomic) unsigned long long contactLimit;                    //@synthesize contactLimit=_contactLimit - In the implementation block
@property (nonatomic,copy) NSArray * propertiesToFetch;                          //@synthesize propertiesToFetch=_propertiesToFetch - In the implementation block
@property (assign,nonatomic) unsigned long long maximumValueLength;              //@synthesize maximumValueLength=_maximumValueLength - In the implementation block
@property (assign,nonatomic) char useConcurrentParsing;                          //@synthesize useConcurrentParsing=_useConcurrentParsing - In the implementation block
-(id)description;
-(id)init;
-(NSArray *)propertiesToFetch;
-(void)setPropertiesToFetch:(NSArray *)arg1 ;
-(void)setContactLimit:(unsigned long long)arg1 ;
-(void)setMaximumValueLength:(unsigned long long)arg1 ;
-(unsigned long long)contactLimit;
-(unsigned long long)maximumValueLength;
-(char)useConcurrentParsing;
-(void)setUseConcurrentParsing:(char)arg1 ;
@end

