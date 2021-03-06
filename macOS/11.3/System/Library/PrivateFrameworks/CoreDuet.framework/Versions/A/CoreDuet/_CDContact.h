/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:01 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/CoreDuet.framework/Versions/A/CoreDuet
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreDuet/CoreDuet-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, _CDContactStatistics;

@interface _CDContact : NSObject <NSCopying, NSSecureCoding> {

	unsigned long long _type;
	NSString* _identifier;
	NSString* _customIdentifier;
	NSString* _personId;
	unsigned long long _personIdType;
	NSString* _displayName;
	unsigned long long _displayType;
	_CDContactStatistics* _statistics;

}

@property (retain) NSString * identifierType; 
@property (retain) _CDContactStatistics * statistics;              //@synthesize statistics=_statistics - In the implementation block
@property (assign) unsigned long long type;                        //@synthesize type=_type - In the implementation block
@property (retain) NSString * identifier;                          //@synthesize identifier=_identifier - In the implementation block
@property (retain) NSString * customIdentifier;                    //@synthesize customIdentifier=_customIdentifier - In the implementation block
@property (readonly) NSString * handle; 
@property (retain) NSString * personId;                            //@synthesize personId=_personId - In the implementation block
@property (assign) unsigned long long personIdType;                //@synthesize personIdType=_personIdType - In the implementation block
@property (retain) NSString * displayName;                         //@synthesize displayName=_displayName - In the implementation block
@property (assign) unsigned long long displayType;                 //@synthesize displayType=_displayType - In the implementation block
+(char)supportsSecureCoding;
+(unsigned long long)typeFromString:(id)arg1 ;
+(id)typeAsCNContactPropertyKey:(unsigned long long)arg1 ;
+(id)contactWithIdentifier:(id)arg1 type:(unsigned long long)arg2 displayName:(id)arg3 personId:(id)arg4 personIdType:(unsigned long long)arg5 ;
+(id)predicateForContactWithType:(unsigned long long)arg1 ;
+(id)predicateForContactWithPersonId:(id)arg1 personIdType:(unsigned long long)arg2 ;
+(id)predicateForContactWithIdentifier:(id)arg1 ;
+(id)predicateForContactWithDisplayName:(id)arg1 ;
+(id)predicateForContact:(id)arg1 ;
+(id)contactPropertiesForContacts:(id)arg1 ;
+(id)contactPropertiesForContacts:(id)arg1 mechanismHints:(id)arg2 ;
+(id)_contactPropertiesForContacts:(id)arg1 mechanismHints:(id)arg2 ;
+(id)_CDValueForContactProperty:(id)arg1 ;
+(id)contactWithIdentifier:(id)arg1 identifierType:(id)arg2 personId:(id)arg3 personIdType:(unsigned long long)arg4 ;
+(id)contactWithIdentifier:(id)arg1 identifierType:(id)arg2 displayName:(id)arg3 personId:(id)arg4 personIdType:(unsigned long long)arg5 ;
+(id)normalizedStringKey:(id)arg1 ;
+(id)contactWithIdentifier:(id)arg1 identifierType:(id)arg2 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(void)setType:(unsigned long long)arg1 ;
-(NSString *)handle;
-(long long)compare:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(unsigned long long)type;
-(NSString *)identifier;
-(NSString *)displayName;
-(void)setIdentifier:(NSString *)arg1 ;
-(_CDContactStatistics *)statistics;
-(void)setDisplayName:(NSString *)arg1 ;
-(NSString *)customIdentifier;
-(NSString *)identifierType;
-(void)setIdentifierType:(NSString *)arg1 ;
-(id)initWithIdentifier:(id)arg1 type:(unsigned long long)arg2 customIdentifier:(id)arg3 displayName:(id)arg4 displayType:(unsigned long long)arg5 personId:(id)arg6 personIdType:(unsigned long long)arg7 ;
-(id)initWithINPerson:(id)arg1 ;
-(id)initWithIdentifier:(id)arg1 type:(unsigned long long)arg2 displayName:(id)arg3 personId:(id)arg4 personIdType:(unsigned long long)arg5 ;
-(void)setCustomIdentifier:(NSString *)arg1 ;
-(NSString *)personId;
-(void)setPersonId:(NSString *)arg1 ;
-(unsigned long long)personIdType;
-(void)setPersonIdType:(unsigned long long)arg1 ;
-(unsigned long long)displayType;
-(void)setDisplayType:(unsigned long long)arg1 ;
-(void)setStatistics:(_CDContactStatistics *)arg1 ;
-(char)mayRepresentSamePersonAs:(id)arg1 ;
-(void)mergeWithContact:(id)arg1 ;
-(char)mayContainPrefix:(id)arg1 ;
-(id)initWithContactProperty:(id)arg1 ;
-(id)contactProperty;
-(id)contactPropertyWithMechanismHint:(long long)arg1 ;
-(id)contactPropertyWithOptionalMechanismHint:(long long*)arg1 ;
@end

