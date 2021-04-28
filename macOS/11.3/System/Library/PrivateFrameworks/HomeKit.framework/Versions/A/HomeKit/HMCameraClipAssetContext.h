/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:00 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/HomeKit.framework/Versions/A/HomeKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HomeKit/HomeKit-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSURL, NSDate, NSDictionary;

@interface HMCameraClipAssetContext : NSObject <NSCopying, NSSecureCoding> {

	NSURL* _url;
	NSDate* _expirationDate;
	NSDictionary* _requiredHTTPHeaders;

}

@property (readonly) NSURL * url;                                          //@synthesize url=_url - In the implementation block
@property (readonly) NSDate * expirationDate;                              //@synthesize expirationDate=_expirationDate - In the implementation block
@property (copy,readonly) NSDictionary * requiredHTTPHeaders;              //@synthesize requiredHTTPHeaders=_requiredHTTPHeaders - In the implementation block
+(char)supportsSecureCoding;
-(id)copyWithZone:(NSZone*)arg1 ;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSURL *)url;
-(NSDate *)expirationDate;
-(NSDictionary *)requiredHTTPHeaders;
-(id)initWithURL:(id)arg1 expirationDate:(id)arg2 requiredHTTPHeaders:(id)arg3 ;
@end
