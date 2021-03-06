/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:18 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/Contacts.framework/Versions/A/Contacts
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Contacts/Contacts-Structs.h>
#import <libobjc.A.dylib/NSMutableCopying.h>
#import <libobjc.A.dylib/CNKeyDescriptor_Private.h>

@class NSString;

@interface CNContactKeyVector : NSObject <NSMutableCopying, CNKeyDescriptor_Private> {

	long long _bitBuckets[1];

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(char)supportsSecureCoding;
+(id)keyVectorWithKeys:(id)arg1 ;
+(id)keyVector;
+(id)keyVectorWithKey:(id)arg1 ;
+(id)freezeIfClassIsImmutable:(id)arg1 ;
+(id)keyVectorWithAllKeys;
-(id)copyWithZone:(NSZone*)arg1 ;
-(char)isEqual:(id)arg1 ;
-(NSString *)description;
-(id)init;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(char)containsKey:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)_cn_requiredKeys;
-(char)intersectsKeyVector:(id)arg1 ;
-(void)_cn_executeGetterForRepresentedKeys:(/*^block*/id)arg1 ;
-(id)_cn_optionalKeys;
-(id)_cn_ignorableKeys;
-(void)enumeratePropertiesUsingBlock:(/*^block*/id)arg1 ;
-(id)keyVectorByAddingKey:(id)arg1 ;
-(id)keyVectorByAddingKeysFromKeyVector:(id)arg1 ;
-(id)keyVectorByRemovingKeysFromKeyVector:(id)arg1 ;
-(id)initWithKeys:(id)arg1 ;
-(id)initWithAllKeys;
-(void)_checkStorageSize;
-(long long*)_bitBuckets;
-(char)isEqualToKeyVector:(id)arg1 ;
-(id)keyVectorByAddingKeys:(id)arg1 ;
-(char)containsAllKeys;
-(char)isSubsetOfKeyVector:(id)arg1 ;
@end

