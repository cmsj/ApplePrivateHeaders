/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:38 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/AppleMediaServices.framework/Versions/A/AppleMediaServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSDictionary;

@interface AMSXDDevice : NSObject <NSSecureCoding> {

	NSString* _identifier;
	long long _type;

}

@property (readonly) NSDictionary * JSONDictionary; 
@property (readonly) NSString * identifier;                      //@synthesize identifier=_identifier - In the implementation block
@property (assign) long long type;                               //@synthesize type=_type - In the implementation block
+(char)supportsSecureCoding;
+(id)activePairedDevices;
+(id)allPairedDevices;
+(id)deviceFromIdentifier:(id)arg1 ;
-(void)setType:(long long)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(long long)type;
-(NSString *)identifier;
-(id)initWithDeviceID:(id)arg1 type:(long long)arg2 ;
-(NSDictionary *)JSONDictionary;
-(id)initWithJSONDictionary:(id)arg1 ;
@end
