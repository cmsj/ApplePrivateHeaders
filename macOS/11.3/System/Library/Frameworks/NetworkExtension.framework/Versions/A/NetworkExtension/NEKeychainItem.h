/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:10 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/NetworkExtension.framework/Versions/A/NetworkExtension
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NetworkExtension/NetworkExtension-Structs.h>
#import <libobjc.A.dylib/NEPrettyDescription.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSData;

@interface NEKeychainItem : NSObject <NEPrettyDescription, NSCopying, NSSecureCoding> {

	NSString* _password;
	NSString* _identifier;
	NSData* _persistentReference;
	char _legacy;
	long long _domain;
	NSString* _accessGroup;
	NEKeychainItem* _oldItem;

}

@property (copy) NEKeychainItem * oldItem;                  //@synthesize oldItem=_oldItem - In the implementation block
@property (readonly) char legacy;                           //@synthesize legacy=_legacy - In the implementation block
@property (assign) long long domain;                        //@synthesize domain=_domain - In the implementation block
@property (copy) NSString * identifier; 
@property (copy) NSString * password; 
@property (copy) NSData * persistentReference; 
@property (copy) NSString * accessGroup;                    //@synthesize accessGroup=_accessGroup - In the implementation block
+(int)getPreferencesDomainForItemDomain:(long long)arg1 ;
+(char)setDomain:(int)arg1 outOldDomain:(int*)arg2 ;
+(char)supportsSecureCoding;
-(id)initWithPassword:(id)arg1 domain:(long long)arg2 accessGroup:(id)arg3 ;
-(void)syncUsingConfiguration:(id)arg1 accountName:(id)arg2 passwordType:(long long)arg3 identifierSuffix:(id)arg4 ;
-(void)addAppPathsToACL:(id)arg1 ;
-(id)initWithIdentifier:(id)arg1 domain:(long long)arg2 accessGroup:(id)arg3 ;
-(id)initWithPersistentReference:(id)arg1 domain:(long long)arg2 accessGroup:(id)arg3 ;
-(id)initWithLegacyIdentifier:(id)arg1 domain:(long long)arg2 accessGroup:(id)arg3 ;
-(id)copyQueryWithReturnTypes:(id)arg1 ;
-(char)copyKeychainItem:(_SecKeychainItem*)arg1 copyPrivateKey:(char)arg2 ;
-(void)addPathtoTrustedApplications:(id)arg1 trustedApplications:(CFArrayRef)arg2 ;
-(char)copyDataFromKeychainItem:(void*)arg1 outPassword:(id*)arg2 outIdentifier:(id*)arg3 outPersistentReference:(id*)arg4 ;
-(id)copyKindForPasswordType:(long long)arg1 ;
-(void)setChangeACLList:(SecAccessRef)arg1 ;
-(char)addOrUpdateWithConfiguration:(id)arg1 passwordType:(long long)arg2 accountName:(id)arg3 identifierSuffix:(id)arg4 ;
-(id)initWithPassword:(id)arg1 domain:(long long)arg2 ;
-(id)initWithIdentifier:(id)arg1 domain:(long long)arg2 ;
-(id)initWithPersistentReference:(id)arg1 domain:(long long)arg2 ;
-(id)initWithLegacyIdentifier:(id)arg1 domain:(long long)arg2 ;
-(void)setIdentifierInternal:(id)arg1 ;
-(void)setPersistentReference:(NSData *)arg1 ;
-(void)migrateFromPreferences:(SCPreferencesRef)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(long long)domain;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)password;
-(NSString *)identifier;
-(char)legacy;
-(void)setIdentifier:(NSString *)arg1 ;
-(void)remove;
-(void)setPassword:(NSString *)arg1 ;
-(void)setDomain:(long long)arg1 ;
-(NSString *)accessGroup;
-(void)setAccessGroup:(NSString *)arg1 ;
-(NSData *)persistentReference;
-(id)copyPassword;
-(id)descriptionWithIndent:(int)arg1 options:(unsigned long long)arg2 ;
-(NEKeychainItem *)oldItem;
-(void)setOldItem:(NEKeychainItem *)arg1 ;
@end

