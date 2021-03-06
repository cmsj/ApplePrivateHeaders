/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:21 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/Versions/A/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SAObjects/SAObjects-Structs.h>
#import <libobjc.A.dylib/AFSecurityDigestibleChunksProviding.h>
#import <libobjc.A.dylib/AFAnalyticsContextVending.h>
#import <libobjc.A.dylib/AceObject.h>

@protocol AceObject <NSObject,NSCopying,NSMutableCopying,NSSecureCoding>
@required
-(id)init;
-(id)dictionary;
-(id)initWithDictionary:(id)arg1;
-(id)groupIdentifier;
-(id)properties;
-(id)encodedClassName;
-(id)initWithDictionary:(id)arg1 context:(id)arg2;

@end


@class NSNumber, NSString, NSData, NSMutableDictionary;

@interface AceObject : NSObject <AFSecurityDigestibleChunksProviding, AFAnalyticsContextVending, AceObject> {

	NSNumber* _deserializationDuration;
	NSNumber* _mutatingCommand;
	NSString* _aceId;
	NSString* _refId;
	NSNumber* _usefulnessScore;
	NSData* _plistData;
	NSMutableDictionary* _dict;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSData * plistData;                      //@synthesize plistData=_plistData - In the implementation block
@property (nonatomic,readonly) NSMutableDictionary * dict;              //@synthesize dict=_dict - In the implementation block
@property (nonatomic,copy) NSString * aceId;                            //@synthesize aceId=_aceId - In the implementation block
@property (nonatomic,copy) NSString * refId;                            //@synthesize refId=_refId - In the implementation block
@property (nonatomic,copy) NSNumber * usefulnessScore;                  //@synthesize usefulnessScore=_usefulnessScore - In the implementation block
@property (assign,nonatomic) char mutatingCommand; 
+(char)supportsSecureCoding;
+(id)aceObjectWithDictionary:(id)arg1 ;
+(id)newAceObjectWithGenericCommand:(id)arg1 context:(id)arg2 ;
+(id)_aceObjectWithMutableDictionary:(id)arg1 ;
+(id)newAceObjectWithDictionary:(id)arg1 context:(id)arg2 ;
+(id)_newAceObjectWithMutableDictionary:(id)arg1 ;
+(id)aceObjectArrayWithDictionaryArray:(id)arg1 baseClass:(Class)arg2 ;
+(id)aceObjectDictionaryWithDictionary:(id)arg1 baseClass:(Class)arg2 ;
+(id)aceObjectArrayWithDictionaryArray:(id)arg1 baseProtocol:(id)arg2 ;
+(id)aceObjectDictionaryWithDictionary:(id)arg1 baseProtocol:(id)arg2 ;
+(id)_filteredDictionaryForKeySet:(id)arg1 plistData:(id)arg2 ;
+(id)aceObjectWithGenericCommand:(id)arg1 ;
+(id)aceObjectWithGenericCommand:(id)arg1 context:(id)arg2 ;
+(id)aceObjectWithDictionary:(id)arg1 context:(id)arg2 ;
+(id)_aceObjectWithMutableDictionary:(id)arg1 context:(id)arg2 ;
+(id)aceObjectArrayWithDictionaryArray:(id)arg1 baseClass:(Class)arg2 context:(id)arg3 ;
+(id)aceObjectDictionaryWithDictionary:(id)arg1 baseClass:(Class)arg2 context:(id)arg3 ;
+(id)aceObjectArrayWithDictionaryArray:(id)arg1 baseProtocol:(id)arg2 context:(id)arg3 ;
+(id)aceObjectDictionaryWithDictionary:(id)arg1 baseProtocol:(id)arg2 context:(id)arg3 ;
+(id)dictionaryArrayWithAceObjectArray:(id)arg1 ;
+(id)dictionaryWithAceObjectDictionary:(id)arg1 ;
+(id)aceObjectWithPlistData:(id)arg1 ;
-(id)af_dialogIdentifier;
-(id)af_text;
-(id)af_speakableText;
-(void)af_enumerateDigestibleChunksWithOptions:(unsigned long long)arg1 usingBlock:(/*^block*/id)arg2 ;
-(char)af_isUtterance;
-(id)af_analyticsContext;
-(void)af_addEntriesToAnalyticsContext:(id)arg1 ;
-(id)af_dialogIdentifiersForAnalyticsContext;
-(char)_af_isKindOfDictationRequest;
-(char)af_isUserUtterance;
-(id)copyWithZone:(NSZone*)arg1 ;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)description;
-(id)init;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)propertyForKey:(id)arg1 ;
-(void)setProperty:(id)arg1 forKey:(id)arg2 ;
-(id)_dict;
-(id)dictionary;
-(id)initWithDictionary:(id)arg1 ;
-(NSMutableDictionary *)dict;
-(id)groupIdentifier;
-(id)properties;
-(NSData *)plistData;
-(id)fullDescription;
-(id)_serializedData;
-(id)encodedClassName;
-(id)initWithDictionary:(id)arg1 context:(id)arg2 ;
-(NSString *)aceId;
-(void)setAceId:(NSString *)arg1 ;
-(NSString *)refId;
-(void)setRefId:(NSString *)arg1 ;
-(id)_initWithPlistData:(id)arg1 aceId:(id)arg2 refId:(id)arg3 usefulnessScore:(id)arg4 mutatingCommand:(id)arg5 ;
-(id)_initWithMutableDictionary:(id)arg1 ;
-(void)_deserializeFromPlistData;
-(id)topLevelPropertyForKey:(id)arg1 ;
-(void)setTopLevelProperty:(id)arg1 forKey:(id)arg2 ;
-(id)forceEagerDeserialization;
-(id)_descriptionHint;
-(void)_appendDescriptionOfObject:(id)arg1 toString:(id)arg2 atDepth:(unsigned long long)arg3 withPrefixes:(id)arg4 hint:(id)arg5 ;
-(char)mutatingCommand;
-(void)setMutatingCommand:(char)arg1 ;
-(void)setUsefulnessScore:(NSNumber *)arg1 ;
-(id)propertyForKeyWithoutDeserializing:(id)arg1 ;
-(char)hasArrayForPropertyForKey:(id)arg1 ;
-(char)_isDeserialized;
-(id)deserializationDuration;
-(void)updateUsingSet:(id)arg1 add:(id)arg2 remove:(id)arg3 ;
-(NSNumber *)usefulnessScore;
@end

