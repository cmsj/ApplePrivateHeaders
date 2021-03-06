/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:18 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/CoreHAP.framework/Versions/A/CoreHAP
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HMFoundation/HMFObject.h>

@class NSString, NSNumber;

@interface HAPMetadataProperty : HMFObject {

	NSString* _propertyDescription;
	NSString* _propertyType;
	NSNumber* _bitPosition;

}

@property (nonatomic,retain) NSString * propertyType;              //@synthesize propertyType=_propertyType - In the implementation block
@property (nonatomic,retain) NSNumber * bitPosition;               //@synthesize bitPosition=_bitPosition - In the implementation block
@property (copy) NSString * propertyDescription;                   //@synthesize propertyDescription=_propertyDescription - In the implementation block
+(id)init:(id)arg1 withDictionary:(id)arg2 ;
-(id)description;
-(void)dump;
-(NSString *)propertyType;
-(id)generateDictionary;
-(void)setPropertyType:(NSString *)arg1 ;
-(NSString *)propertyDescription;
-(id)initWithType:(id)arg1 bitPosition:(id)arg2 description:(id)arg3 ;
-(NSNumber *)bitPosition;
-(void)setPropertyDescription:(NSString *)arg1 ;
-(void)setBitPosition:(NSNumber *)arg1 ;
@end

