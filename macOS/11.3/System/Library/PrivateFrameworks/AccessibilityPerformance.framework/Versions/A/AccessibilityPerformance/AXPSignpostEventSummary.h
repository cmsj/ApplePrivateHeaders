/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:46 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/AccessibilityPerformance.framework/Versions/A/AccessibilityPerformance
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AccessibilityPerformance/AccessibilityPerformance-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString;

@interface AXPSignpostEventSummary : NSObject <NSCopying, NSSecureCoding> {

	NSString* _identifier;
	NSString* _subsystem;
	NSString* _category;
	long long _totalCount;
	double _totalIntervalTime;

}

@property (nonatomic,copy) NSString * identifier;                       //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,copy) NSString * subsystem;                        //@synthesize subsystem=_subsystem - In the implementation block
@property (nonatomic,copy) NSString * category;                         //@synthesize category=_category - In the implementation block
@property (assign,nonatomic) long long totalCount;                      //@synthesize totalCount=_totalCount - In the implementation block
@property (assign,nonatomic) double totalIntervalTime;                  //@synthesize totalIntervalTime=_totalIntervalTime - In the implementation block
@property (nonatomic,readonly) double averageIntervalTime; 
+(char)supportsSecureCoding;
+(id)makeIdentifierFromSignpostName:(id)arg1 metadata1:(id)arg2 metadata2:(id)arg3 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)identifier;
-(void)setIdentifier:(NSString *)arg1 ;
-(NSString *)category;
-(void)setCategory:(NSString *)arg1 ;
-(long long)totalCount;
-(NSString *)subsystem;
-(void)setSubsystem:(NSString *)arg1 ;
-(void)setTotalCount:(long long)arg1 ;
-(double)totalIntervalTime;
-(void)setTotalIntervalTime:(double)arg1 ;
-(double)averageIntervalTime;
@end

