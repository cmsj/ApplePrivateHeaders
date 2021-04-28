/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:00 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/HomeKit.framework/Versions/A/HomeKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HomeKit/HomeKit-Structs.h>
#import <libobjc.A.dylib/HMFObject.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSUUID, NSString, NSArray;

@interface HMPersonLink : NSObject <HMFObject, NSCopying, NSSecureCoding> {

	NSUUID* _personUUID;
	NSUUID* _personManagerUUID;

}

@property (copy,readonly) NSUUID * personUUID;                                    //@synthesize personUUID=_personUUID - In the implementation block
@property (copy,readonly) NSUUID * personManagerUUID;                             //@synthesize personManagerUUID=_personManagerUUID - In the implementation block
@property (copy,readonly) NSString * shortDescription; 
@property (copy,readonly) NSString * privateDescription; 
@property (copy,readonly) NSString * propertyDescription; 
@property (nonatomic,copy,readonly) NSArray * attributeDescriptions; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(char)supportsSecureCoding;
+(id)shortDescription;
-(id)copyWithZone:(NSZone*)arg1 ;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)shortDescription;
-(NSString *)privateDescription;
-(NSUUID *)personUUID;
-(NSArray *)attributeDescriptions;
-(NSUUID *)personManagerUUID;
-(id)initWithPersonUUID:(id)arg1 personManagerUUID:(id)arg2 ;
@end
