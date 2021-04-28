/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:40 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/Versions/A/PassKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PassKitCore/PassKitCore-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PKOSVersionRequirement;

@interface PKOSVersionRequirementRange : NSObject <NSSecureCoding, NSCopying> {

	PKOSVersionRequirement* _minimum;
	PKOSVersionRequirement* _maximum;

}

@property (nonatomic,readonly) PKOSVersionRequirement * minimum;              //@synthesize minimum=_minimum - In the implementation block
@property (nonatomic,readonly) PKOSVersionRequirement * maximum;              //@synthesize maximum=_maximum - In the implementation block
+(char)supportsSecureCoding;
-(id)copyWithZone:(NSZone*)arg1 ;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(PKOSVersionRequirement *)minimum;
-(PKOSVersionRequirement *)maximum;
-(BOOL)versionMeetsRequirements:(id)arg1 deviceClass:(id)arg2 ;
-(id)asDictionary;
-(id)initWithMinimumVersion:(id)arg1 maximumVersion:(id)arg2 ;
-(char)isEqualToOSVersionRequirementRange:(id)arg1 ;
@end
