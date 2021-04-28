/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:57 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/ScreenTimeCore.framework/Versions/A/ScreenTimeCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ScreenTimeCore/ScreenTimeCore-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString;

@interface STUsageTrustIdentifier : NSObject <NSCopying, NSSecureCoding> {

	char _usageTrusted;
	NSString* _identifier;

}

@property (copy,readonly) NSString * identifier;              //@synthesize identifier=_identifier - In the implementation block
@property (readonly) char usageTrusted;                       //@synthesize usageTrusted=_usageTrusted - In the implementation block
+(char)supportsSecureCoding;
-(id)copyWithZone:(NSZone*)arg1 ;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)identifier;
-(char)usageTrusted;
-(id)initWithIdentifier:(id)arg1 usageTrusted:(char)arg2 ;
-(void)_stUsageTrustIdentifierCommonInitWithIdentifier:(id)arg1 usageTrusted:(char)arg2 ;
@end
