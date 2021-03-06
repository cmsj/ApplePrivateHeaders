/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:52 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/PersonalizationPortrait.framework/Versions/A/PersonalizationPortrait
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PersonalizationPortrait/PersonalizationPortrait-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PPContact, NSArray;

@interface PPScoredContact : NSObject <NSSecureCoding, NSCopying> {

	unsigned char _flags;
	PPContact* _contact;
	double _score;
	NSArray* _scoredPhoneNumbers;
	NSArray* _scoredEmailAddresses;
	NSArray* _scoredSocialProfiles;
	NSArray* _scoredPostalAddresses;

}

@property (nonatomic,readonly) PPContact * contact;                          //@synthesize contact=_contact - In the implementation block
@property (nonatomic,readonly) double score;                                 //@synthesize score=_score - In the implementation block
@property (nonatomic,readonly) unsigned char flags;                          //@synthesize flags=_flags - In the implementation block
@property (nonatomic,readonly) NSArray * scoredPhoneNumbers;                 //@synthesize scoredPhoneNumbers=_scoredPhoneNumbers - In the implementation block
@property (nonatomic,readonly) NSArray * scoredEmailAddresses;               //@synthesize scoredEmailAddresses=_scoredEmailAddresses - In the implementation block
@property (nonatomic,readonly) NSArray * scoredSocialProfiles;               //@synthesize scoredSocialProfiles=_scoredSocialProfiles - In the implementation block
@property (nonatomic,readonly) NSArray * scoredPostalAddresses;              //@synthesize scoredPostalAddresses=_scoredPostalAddresses - In the implementation block
+(char)supportsSecureCoding;
+(id)scoredContactWithContact:(id)arg1 scoredPhoneNumbers:(id)arg2 scoredEmailAddresses:(id)arg3 scoredSocialProfiles:(id)arg4 scoredPostalAddresses:(id)arg5 score:(double)arg6 flags:(unsigned char)arg7 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(unsigned char)flags;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(long long)compare:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(double)score;
-(PPContact *)contact;
-(long long)reverseCompare:(id)arg1 ;
-(id)initWithContact:(id)arg1 scoredPhoneNumbers:(id)arg2 scoredEmailAddresses:(id)arg3 scoredSocialProfiles:(id)arg4 scoredPostalAddresses:(id)arg5 score:(double)arg6 flags:(unsigned char)arg7 ;
-(char)isEqualToScoredContact:(id)arg1 ;
-(NSArray *)scoredPhoneNumbers;
-(NSArray *)scoredEmailAddresses;
-(NSArray *)scoredSocialProfiles;
-(NSArray *)scoredPostalAddresses;
@end

