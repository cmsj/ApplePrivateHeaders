/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:07 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/CoreSpotlight.framework/Versions/A/CoreSpotlight
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreSpotlight/CoreSpotlight-Structs.h>
#import <libobjc.A.dylib/CSCoderEncoder.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSArray;

@interface CSPerson : NSObject <CSCoderEncoder, NSSecureCoding, NSCopying> {

	NSString* _displayName;
	NSArray* _handles;
	NSString* _handleIdentifier;
	NSString* _contactIdentifier;

}

@property (nonatomic,retain) NSString * displayName;                   //@synthesize displayName=_displayName - In the implementation block
@property (nonatomic,retain) NSArray * handles;                        //@synthesize handles=_handles - In the implementation block
@property (nonatomic,retain) NSString * handleIdentifier;              //@synthesize handleIdentifier=_handleIdentifier - In the implementation block
@property (copy) NSString * contactIdentifier;                         //@synthesize contactIdentifier=_contactIdentifier - In the implementation block
+(char)supportsSecureCoding;
-(id)copyWithZone:(NSZone*)arg1 ;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)displayName;
-(void)setDisplayName:(NSString *)arg1 ;
-(NSString *)contactIdentifier;
-(NSArray *)handles;
-(NSString *)handleIdentifier;
-(id)initWithDisplayName:(id)arg1 handles:(id)arg2 handleIdentifier:(id)arg3 ;
-(void)setContactIdentifier:(NSString *)arg1 ;
-(void)encodeWithCSCoder:(id)arg1 ;
-(void)setHandles:(NSArray *)arg1 ;
-(void)setHandleIdentifier:(NSString *)arg1 ;
@end
