/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:03 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/NearField.framework/Versions/A/NearField
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@protocol NFAppletCollection;
@class NSString, NSArray, NSObject, NSData;

@interface NFApplet : NSObject <NSSecureCoding> {

	NSString* _groupHeadID;
	NSArray* _groupMemberIDs;
	NSArray* _referencedAppIDs;
	char _isContainer;
	char _isProxy;
	NSString* _packageIdentifier;
	NSString* _moduleIdentifier;
	NSArray* _multiSEApplicationGroupMemberIDs;
	unsigned char _appletGPState;
	unsigned char _groupActivationStyle;
	NSObject*<NFAppletCollection> _appletCollection;
	NSData* _typeFSystemCode;
	unsigned char _family;
	unsigned char _activationState;
	char _authTransientSupport;
	char _authTransientConfigurable;
	NSString* _identifier;
	NSString* _seIdentifier;
	NSData* _identifierAsData;
	NSData* _discretionaryData;

}

@property (nonatomic,retain,readonly) NSString * identifier;                     //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,retain,readonly) NSString * seIdentifier;                   //@synthesize seIdentifier=_seIdentifier - In the implementation block
@property (nonatomic,retain,readonly) NSData * identifierAsData;                 //@synthesize identifierAsData=_identifierAsData - In the implementation block
@property (nonatomic,retain,readonly) NSData * discretionaryData;                //@synthesize discretionaryData=_discretionaryData - In the implementation block
@property (nonatomic,retain,readonly) NSString * packageIdentifier; 
@property (nonatomic,readonly) unsigned char family;                             //@synthesize family=_family - In the implementation block
@property (nonatomic,readonly) unsigned char lifecycleState; 
@property (nonatomic,readonly) unsigned char activationState;                    //@synthesize activationState=_activationState - In the implementation block
@property (nonatomic,readonly) char authTransientSupport;                        //@synthesize authTransientSupport=_authTransientSupport - In the implementation block
@property (nonatomic,retain,readonly) NFApplet * groupHead; 
@property (nonatomic,retain,readonly) NSArray * groupMembers; 
@property (nonatomic,retain,readonly) NSArray * referencedApps; 
@property (nonatomic,readonly) char authTransientConfigurable;                   //@synthesize authTransientConfigurable=_authTransientConfigurable - In the implementation block
@property (nonatomic,readonly) char isTypeF; 
@property (nonatomic,readonly) char suppressTypeB; 
@property (nonatomic,readonly) unsigned char supportedTypeFSystem; 
@property (nonatomic,readonly) char isGPLocked; 
@property (nonatomic,readonly) char containsSubKeys; 
+(char)supportsSecureCoding;
-(char)isEqual:(id)arg1 ;
-(char)isProxy;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(NSString *)identifier;
-(char)isContainer;
-(unsigned char)family;
-(NSArray *)groupMembers;
-(unsigned char)activationState;
-(id)asDictionary;
-(char)authTransientSupport;
-(id)groupMemberIDs;
-(id)multiSEGroupMemberIDs;
-(id)groupHeadID;
-(unsigned char)lifecycleState;
-(NSString *)packageIdentifier;
-(char)isGPLocked;
-(char)containsSubKeys;
-(id)moduleIdentifier;
-(void)setAppletCollection:(id)arg1 ;
-(char)isEqualToApplet:(id)arg1 ;
-(NSData *)identifierAsData;
-(NSString *)seIdentifier;
-(char)isTypeF;
-(char)suppressTypeB;
-(unsigned char)supportedTypeFSystem;
-(void)_setIsActive:(char)arg1 ;
-(unsigned char)groupActivationStyle;
-(id)appletCollection;
-(NFApplet *)groupHead;
-(NSArray *)referencedApps;
-(id)multiSSDMembers;
-(char)isPPSEControllable;
-(unsigned long long)rawGPState;
-(NSData *)discretionaryData;
-(char)authTransientConfigurable;
@end

