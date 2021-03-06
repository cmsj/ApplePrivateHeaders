/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:16 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/EmailCore.framework/Versions/A/EmailCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <EmailCore/EmailCore-Structs.h>
#import <libobjc.A.dylib/ECEmailAddressConvertible.h>
#import <libobjc.A.dylib/EFPubliclyDescribable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSArray, ECEmailAddress;

@interface ECEmailAddressComponents : NSObject <ECEmailAddressConvertible, EFPubliclyDescribable, NSCopying> {

	NSString* _simpleAddress;
	NSString* _localPart;
	NSString* _domain;
	NSString* _idnaDomain;
	NSArray* _groupList;
	NSString* _displayName;

}

@property (copy,readonly) NSString * idnaAddress; 
@property (readonly) ECEmailAddress * emailAddressValue; 
@property (readonly) NSString * stringValue; 
@property (readonly) NSString * simpleAddress;                                    //@synthesize simpleAddress=_simpleAddress - In the implementation block
@property (copy) NSString * displayName;                                          //@synthesize displayName=_displayName - In the implementation block
@property (copy) NSString * localPart;                                            //@synthesize localPart=_localPart - In the implementation block
@property (copy) NSString * domain;                                               //@synthesize domain=_domain - In the implementation block
@property (setter=setIDNADomain:,copy) NSString * idnaDomain;                     //@synthesize idnaDomain=_idnaDomain - In the implementation block
@property (copy) NSArray * groupList;                                             //@synthesize groupList=_groupList - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy,readonly) NSString * ef_publicDescription; 
+(id)componentsWithString:(id)arg1 ;
+(id)componentsWithEmailAddress:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)description;
-(NSString *)debugDescription;
-(id)init;
-(NSString *)domain;
-(NSString *)stringValue;
-(id)initWithString:(id)arg1 ;
-(NSString *)displayName;
-(void)setDisplayName:(NSString *)arg1 ;
-(void)setDomain:(NSString *)arg1 ;
-(id)initWithEmailAddress:(id)arg1 ;
-(NSString *)localPart;
-(NSArray *)groupList;
-(NSString *)ef_publicDescription;
-(char)_nts_isValidDomain;
-(NSString *)simpleAddress;
-(ECEmailAddress *)emailAddressValue;
-(id)_initWithString:(id)arg1 displayName:(id)arg2 localPart:(id)arg3 domain:(id)arg4 groupList:(id)arg5 ;
-(NSString *)idnaDomain;
-(char)_nts_getValidatedDomain:(id*)arg1 idnaDomain:(id*)arg2 avoidReparse:(char)arg3 ;
-(char)_nts_getValidatedLocalPart:(id*)arg1 domain:(id*)arg2 idnaDomain:(id*)arg3 displayName:(id*)arg4 ;
-(char)_nts_isValid;
-(void)setLocalPart:(NSString *)arg1 ;
-(void)setIDNADomain:(id)arg1 ;
-(void)setGroupList:(NSArray *)arg1 ;
-(NSString *)idnaAddress;
@end

