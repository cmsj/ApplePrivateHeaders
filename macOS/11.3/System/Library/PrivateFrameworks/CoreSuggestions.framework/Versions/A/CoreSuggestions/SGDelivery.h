/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:36 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/CoreSuggestions.framework/Versions/A/CoreSuggestions
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreSuggestions/CoreSuggestions-Structs.h>
#import <CoreSuggestions/SGObject.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSURL, NSString;

@interface SGDelivery : SGObject <NSSecureCoding> {

	NSURL* _parentURL;
	NSString* _externalIdentifier;
	unsigned long long _provider;
	NSString* _trackingNumber;

}

@property (nonatomic,readonly) NSURL * parentURL;                          //@synthesize parentURL=_parentURL - In the implementation block
@property (nonatomic,readonly) NSString * externalIdentifier;              //@synthesize externalIdentifier=_externalIdentifier - In the implementation block
@property (nonatomic,readonly) unsigned long long provider;                //@synthesize provider=_provider - In the implementation block
@property (nonatomic,readonly) NSString * trackingNumber;                  //@synthesize trackingNumber=_trackingNumber - In the implementation block
+(char)supportsSecureCoding;
+(id)stringForProvider:(unsigned long long)arg1 ;
+(unsigned long long)providerForString:(id)arg1 ;
+(id)deliveryForEntity:(id)arg1 store:(id)arg2 ;
+(id)deliveryForEntity:(id)arg1 origin:(id)arg2 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(unsigned long long)provider;
-(NSString *)trackingNumber;
-(NSString *)externalIdentifier;
-(NSURL *)parentURL;
-(id)initWithRecordId:(id)arg1 origin:(id)arg2 parentURL:(id)arg3 provider:(unsigned long long)arg4 trackingNumber:(id)arg5 ;
@end

