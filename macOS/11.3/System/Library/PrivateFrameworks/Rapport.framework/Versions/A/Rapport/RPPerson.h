/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:22 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/Rapport.framework/Versions/A/Rapport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSArray, CURangingMeasurement, NSMutableDictionary;

@interface RPPerson : NSObject <NSSecureCoding> {

	int _activityLevel;
	unsigned _flags;
	int _proximity;
	NSString* _contactID;
	NSArray* _devices;
	NSString* _identifier;
	NSString* _name;
	CURangingMeasurement* _relativeLocation;
	NSMutableDictionary* _deviceDict;

}

@property (nonatomic,retain) NSMutableDictionary * deviceDict;              //@synthesize deviceDict=_deviceDict - In the implementation block
@property (nonatomic,copy) NSString * identifier;                           //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,readonly) int activityLevel;                           //@synthesize activityLevel=_activityLevel - In the implementation block
@property (nonatomic,copy,readonly) NSString * contactID;                   //@synthesize contactID=_contactID - In the implementation block
@property (nonatomic,copy,readonly) NSArray * devices;                      //@synthesize devices=_devices - In the implementation block
@property (nonatomic,readonly) unsigned flags;                              //@synthesize flags=_flags - In the implementation block
@property (nonatomic,copy,readonly) NSString * name;                        //@synthesize name=_name - In the implementation block
@property (nonatomic,readonly) int proximity;                               //@synthesize proximity=_proximity - In the implementation block
@property (readonly) CURangingMeasurement * relativeLocation;               //@synthesize relativeLocation=_relativeLocation - In the implementation block
+(char)supportsSecureCoding;
-(unsigned)flags;
-(id)description;
-(NSString *)name;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)identifier;
-(void)setIdentifier:(NSString *)arg1 ;
-(NSArray *)devices;
-(NSString *)contactID;
-(CURangingMeasurement *)relativeLocation;
-(id)descriptionWithLevel:(int)arg1 ;
-(int)proximity;
-(int)activityLevel;
-(unsigned)_updateDeviceDerivedInfo;
-(unsigned)removeRPDevice:(id)arg1 ;
-(unsigned)updateWithRPDevice:(id)arg1 ;
-(NSMutableDictionary *)deviceDict;
-(void)setDeviceDict:(NSMutableDictionary *)arg1 ;
@end
