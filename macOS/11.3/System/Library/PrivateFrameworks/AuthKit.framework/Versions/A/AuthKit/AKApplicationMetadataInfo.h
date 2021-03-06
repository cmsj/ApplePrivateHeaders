/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:07 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/AuthKit.framework/Versions/A/AuthKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSDictionary;

@interface AKApplicationMetadataInfo : NSObject <NSSecureCoding> {

	NSString* _authorizedAppListVersion;
	NSDictionary* _teams;

}

@property (nonatomic,copy,readonly) NSString * authorizedAppListVersion;              //@synthesize authorizedAppListVersion=_authorizedAppListVersion - In the implementation block
@property (nonatomic,copy,readonly) NSDictionary * teams;                             //@synthesize teams=_teams - In the implementation block
+(char)supportsSecureCoding;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSDictionary *)teams;
-(NSString *)authorizedAppListVersion;
-(id)initWithResponseInfo:(id)arg1 ;
@end

