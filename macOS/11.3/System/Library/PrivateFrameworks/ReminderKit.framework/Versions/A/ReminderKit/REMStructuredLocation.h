/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:52 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/ReminderKit.framework/Versions/A/ReminderKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ReminderKit/ReminderKit-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSData;

@interface REMStructuredLocation : NSObject <NSCopying, NSSecureCoding> {

	NSString* _title;
	double _latitude;
	double _longitude;
	double _radius;
	NSString* _address;
	NSString* _routing;
	NSString* _referenceFrameString;
	NSString* _contactLabel;
	NSData* _mapKitHandle;
	NSString* _locationUID;

}

@property (nonatomic,readonly) NSString * locationUID;                   //@synthesize locationUID=_locationUID - In the implementation block
@property (nonatomic,copy) NSString * title;                             //@synthesize title=_title - In the implementation block
@property (assign,nonatomic) double latitude;                            //@synthesize latitude=_latitude - In the implementation block
@property (assign,nonatomic) double longitude;                           //@synthesize longitude=_longitude - In the implementation block
@property (assign,nonatomic) double radius;                              //@synthesize radius=_radius - In the implementation block
@property (nonatomic,copy) NSString * address;                           //@synthesize address=_address - In the implementation block
@property (nonatomic,copy) NSString * routing;                           //@synthesize routing=_routing - In the implementation block
@property (nonatomic,copy) NSString * referenceFrameString;              //@synthesize referenceFrameString=_referenceFrameString - In the implementation block
@property (nonatomic,copy) NSString * contactLabel;                      //@synthesize contactLabel=_contactLabel - In the implementation block
@property (nonatomic,copy) NSData * mapKitHandle;                        //@synthesize mapKitHandle=_mapKitHandle - In the implementation block
+(char)supportsSecureCoding;
+(double)minimumRegionMonitoringDistance;
-(id)copyWithZone:(NSZone*)arg1 ;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)debugDescription;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)displayName;
-(id)initWithTitle:(id)arg1 ;
-(void)setTitle:(NSString *)arg1 ;
-(NSString *)address;
-(NSString *)title;
-(void)setAddress:(NSString *)arg1 ;
-(double)latitude;
-(double)longitude;
-(void)setLatitude:(double)arg1 ;
-(void)setLongitude:(double)arg1 ;
-(double)radius;
-(NSData *)mapKitHandle;
-(void)setRadius:(double)arg1 ;
-(void)setMapKitHandle:(NSData *)arg1 ;
-(NSString *)routing;
-(void)setRouting:(NSString *)arg1 ;
-(NSString *)locationUID;
-(id)initWithTitle:(id)arg1 locationUID:(id)arg2 ;
-(NSString *)contactLabel;
-(void)setContactLabel:(NSString *)arg1 ;
-(void)setReferenceFrameString:(NSString *)arg1 ;
-(char)isContentEqual:(id)arg1 ;
-(NSString *)referenceFrameString;
-(id)initWithTitle:(id)arg1 locationUID:(id)arg2 latitude:(double)arg3 longitude:(double)arg4 radius:(double)arg5 address:(id)arg6 routing:(id)arg7 referenceFrameString:(id)arg8 contactLabel:(id)arg9 mapKitHandle:(id)arg10 ;
@end

