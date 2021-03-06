/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:49 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/NewsToday.framework/Versions/A/NewsToday
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NewsToday/NewsToday-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSOrderedSet, NSDate, NSObject;

@interface NTTodayResults : NSObject <NSCopying, NSSecureCoding> {

	int _promotionCriterion;
	NSString* _sourceIdentifier;
	NSOrderedSet* _sections;
	NSDate* _expirationDate;
	double _headlineScale;
	NSObject* _assetsHoldToken;
	NSObject* _recordsHoldToken;

}

@property (nonatomic,copy,readonly) NSString * sourceIdentifier;              //@synthesize sourceIdentifier=_sourceIdentifier - In the implementation block
@property (nonatomic,copy,readonly) NSOrderedSet * sections;                  //@synthesize sections=_sections - In the implementation block
@property (nonatomic,readonly) int promotionCriterion;                        //@synthesize promotionCriterion=_promotionCriterion - In the implementation block
@property (nonatomic,copy,readonly) NSDate * expirationDate;                  //@synthesize expirationDate=_expirationDate - In the implementation block
@property (nonatomic,readonly) double headlineScale;                          //@synthesize headlineScale=_headlineScale - In the implementation block
@property (nonatomic,readonly) NSObject * assetsHoldToken;                    //@synthesize assetsHoldToken=_assetsHoldToken - In the implementation block
@property (nonatomic,readonly) NSObject * recordsHoldToken;                   //@synthesize recordsHoldToken=_recordsHoldToken - In the implementation block
+(char)supportsSecureCoding;
-(id)copyWithZone:(NSZone*)arg1 ;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(unsigned long long)itemCount;
-(NSDate *)expirationDate;
-(NSOrderedSet *)sections;
-(NSString *)sourceIdentifier;
-(int)promotionCriterion;
-(double)headlineScale;
-(id)initWithSourceIdentifier:(id)arg1 sections:(id)arg2 expirationDate:(id)arg3 headlineScale:(double)arg4 ;
-(NSObject *)assetsHoldToken;
-(NSObject *)recordsHoldToken;
-(id)initWithSourceIdentifier:(id)arg1 sections:(id)arg2 promotionCriterion:(int)arg3 expirationDate:(id)arg4 headlineScale:(double)arg5 assetsHoldToken:(id)arg6 recordsHoldToken:(id)arg7 ;
@end

