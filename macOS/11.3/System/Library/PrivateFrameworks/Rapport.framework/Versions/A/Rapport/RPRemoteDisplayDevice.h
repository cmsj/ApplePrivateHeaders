/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:22 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/Rapport.framework/Versions/A/Rapport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Rapport/RPEndpoint.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString;

@interface RPRemoteDisplayDevice : RPEndpoint <NSSecureCoding> {

	unsigned _flags;
	NSString* _persistentIdentifier;

}

@property (nonatomic,copy) NSString * persistentIdentifier;              //@synthesize persistentIdentifier=_persistentIdentifier - In the implementation block
@property (nonatomic,readonly) unsigned flags;                           //@synthesize flags=_flags - In the implementation block
+(char)supportsSecureCoding;
-(unsigned)flags;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)persistentIdentifier;
-(void)setPersistentIdentifier:(NSString *)arg1 ;
-(id)descriptionWithLevel:(int)arg1 ;
-(unsigned)updateWithEndpoint:(id)arg1 ;
@end
