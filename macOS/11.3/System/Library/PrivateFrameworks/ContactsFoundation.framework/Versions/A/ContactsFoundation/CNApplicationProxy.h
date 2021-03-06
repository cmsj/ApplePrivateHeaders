/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:18 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/ContactsFoundation.framework/Versions/A/ContactsFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSArray;

@interface CNApplicationProxy : NSObject <NSSecureCoding> {

	NSString* _bundleIdentifier;
	NSString* _teamIdentifier;
	NSString* _localizedName;
	NSArray* _activityTypes;

}

@property (nonatomic,copy) NSString * bundleIdentifier;              //@synthesize bundleIdentifier=_bundleIdentifier - In the implementation block
@property (nonatomic,copy) NSString * teamIdentifier;                //@synthesize teamIdentifier=_teamIdentifier - In the implementation block
@property (nonatomic,copy) NSString * localizedName;                 //@synthesize localizedName=_localizedName - In the implementation block
@property (nonatomic,copy) NSArray * activityTypes;                  //@synthesize activityTypes=_activityTypes - In the implementation block
+(char)supportsSecureCoding;
-(id)description;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)bundleIdentifier;
-(NSArray *)activityTypes;
-(NSString *)localizedName;
-(NSString *)teamIdentifier;
-(void)setBundleIdentifier:(NSString *)arg1 ;
-(void)setTeamIdentifier:(NSString *)arg1 ;
-(void)setLocalizedName:(NSString *)arg1 ;
-(id)initWithLSApplicationProxy:(id)arg1 ;
-(id)initWithBundleIdentifier:(id)arg1 teamIdentifier:(id)arg2 localizedName:(id)arg3 activityTypes:(id)arg4 ;
-(void)setActivityTypes:(NSArray *)arg1 ;
@end

