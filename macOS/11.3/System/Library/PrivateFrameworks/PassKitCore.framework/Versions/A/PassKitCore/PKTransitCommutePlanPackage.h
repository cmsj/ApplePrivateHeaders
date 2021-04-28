/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:41 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/Versions/A/PassKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PassKitCore/PassKitCore-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSArray, NSMutableDictionary;

@interface PKTransitCommutePlanPackage : NSObject <NSSecureCoding, NSCopying> {

	NSArray* _transitCommutePlans;
	unsigned long long _transitCommutePlanType;
	NSMutableDictionary* _commutePlanLookupDictionary;

}

@property (nonatomic,copy) NSArray * transitCommutePlans;                                    //@synthesize transitCommutePlans=_transitCommutePlans - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * commutePlanLookupDictionary;              //@synthesize commutePlanLookupDictionary=_commutePlanLookupDictionary - In the implementation block
@property (assign,nonatomic) unsigned long long transitCommutePlanType;                      //@synthesize transitCommutePlanType=_transitCommutePlanType - In the implementation block
+(char)supportsSecureCoding;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(unsigned long long)transitCommutePlanType;
-(NSArray *)transitCommutePlans;
-(void)setTransitCommutePlanType:(unsigned long long)arg1 ;
-(void)setTransitCommutePlans:(NSArray *)arg1 ;
-(void)setCommutePlanLookupDictionary:(NSMutableDictionary *)arg1 ;
-(id)initWithDictionary:(id)arg1 backFieldBuckets:(id)arg2 bundle:(id)arg3 privateBundle:(id)arg4 ;
-(id)planForIdentifier:(id)arg1 ;
-(NSMutableDictionary *)commutePlanLookupDictionary;
@end
