/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:14 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/CloudPhotoLibrary.framework/Versions/A/CloudPhotoLibrary
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CloudPhotoLibrary/CPLRecordChange.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSData, NSDictionary;

@interface CPLPersonChange : CPLRecordChange <NSSecureCoding, NSCopying> {

	NSString* _fullName;
	long long _personType;
	long long _manualSortOrder;
	NSString* _displayName;
	long long _verifiedType;
	NSString* _mergeTargetPersonIdentifier;
	NSData* _contactDescriptor;

}

@property (nonatomic,copy) NSData * contactDescriptor;                            //@synthesize contactDescriptor=_contactDescriptor - In the implementation block
@property (nonatomic,copy) NSString * fullName;                                   //@synthesize fullName=_fullName - In the implementation block
@property (assign,nonatomic) long long personType;                                //@synthesize personType=_personType - In the implementation block
@property (assign,nonatomic) long long manualSortOrder;                           //@synthesize manualSortOrder=_manualSortOrder - In the implementation block
@property (nonatomic,copy) NSDictionary * contactMatchingDictionary; 
@property (nonatomic,copy) NSString * displayName;                                //@synthesize displayName=_displayName - In the implementation block
@property (assign,nonatomic) long long verifiedType;                              //@synthesize verifiedType=_verifiedType - In the implementation block
@property (nonatomic,copy) NSString * mergeTargetPersonIdentifier;                //@synthesize mergeTargetPersonIdentifier=_mergeTargetPersonIdentifier - In the implementation block
+(char)serverSupportsGraphPeopleHome;
+(char)serverSupportsMergeTargetRef;
+(char)cplShouldIgnorePropertyForCoding:(id)arg1 ;
+(char)cplShouldIgnorePropertyForEquality:(id)arg1 ;
-(NSString *)displayName;
-(void)setDisplayName:(NSString *)arg1 ;
-(NSString *)fullName;
-(void)setFullName:(NSString *)arg1 ;
-(id)relatedIdentifier;
-(char)supportsDeletion;
-(long long)verifiedType;
-(void)setVerifiedType:(long long)arg1 ;
-(NSDictionary *)contactMatchingDictionary;
-(void)setContactMatchingDictionary:(NSDictionary *)arg1 ;
-(NSString *)mergeTargetPersonIdentifier;
-(long long)manualSortOrder;
-(long long)personType;
-(void)setPersonType:(long long)arg1 ;
-(void)setManualSortOrder:(long long)arg1 ;
-(void)setMergeTargetPersonIdentifier:(NSString *)arg1 ;
-(char)supportsDirectDeletion;
-(void)setRelatedIdentifier:(id)arg1 ;
-(NSData *)contactDescriptor;
-(void)setContactDescriptor:(NSData *)arg1 ;
-(char)validateRecordForTracker:(id)arg1 ;
@end
