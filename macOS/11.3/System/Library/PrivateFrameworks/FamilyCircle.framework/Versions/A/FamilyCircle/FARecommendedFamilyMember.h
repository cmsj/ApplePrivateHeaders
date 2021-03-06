/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:19 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/FamilyCircle.framework/Versions/A/FamilyCircle
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, CNContact;

@interface FARecommendedFamilyMember : NSObject <NSSecureCoding> {

	NSString* _handle;
	NSString* _displayName;
	CNContact* _contact;

}

@property (copy) NSString * handle;                   //@synthesize handle=_handle - In the implementation block
@property (copy) NSString * displayName;              //@synthesize displayName=_displayName - In the implementation block
@property (retain) CNContact * contact;               //@synthesize contact=_contact - In the implementation block
+(char)supportsSecureCoding;
-(char)isEqual:(id)arg1 ;
-(NSString *)handle;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)displayName;
-(void)setDisplayName:(NSString *)arg1 ;
-(CNContact *)contact;
-(void)setContact:(CNContact *)arg1 ;
-(void)setHandle:(NSString *)arg1 ;
-(id)_safeClasses;
-(id)initWithRecommendation:(id)arg1 ;
@end

