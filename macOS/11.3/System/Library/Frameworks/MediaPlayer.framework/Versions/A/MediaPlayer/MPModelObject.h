/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:57 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/Versions/A/MediaPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MediaPlayer/MediaPlayer-Structs.h>
#import <libobjc.A.dylib/_MPStateDumpPropertyListTransformable.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class MPIdentifierSet, NSMutableDictionary, NSString;

@interface MPModelObject : NSObject <_MPStateDumpPropertyListTransformable, NSCopying, NSSecureCoding> {

	MPIdentifierSet* _originalIdentifierSet;
	NSMutableDictionary* _storage;
	char _isFinalized;
	MPIdentifierSet* _identifiers;

}

@property (nonatomic,readonly) MPIdentifierSet * originalIdentifierSet; 
@property (nonatomic,readonly) NSString * humanDescription; 
@property (nonatomic,copy,readonly) MPIdentifierSet * identifiers;                   //@synthesize identifiers=_identifiers - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)initialize;
+(char)resolveInstanceMethod:(SEL)arg1 ;
+(char)supportsSecureCoding;
+(id)classesForSecureCoding;
+(void)performWithoutEnforcement:(/*^block*/id)arg1 ;
+(void)_indexProperties;
+(char)_lookupPropertyForSelector:(SEL)arg1 result:(/*^block*/id)arg2 ;
+(id)_modelKeyForPropertySelector:(SEL)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)description;
-(NSString *)debugDescription;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)valueForUndefinedKey:(id)arg1 ;
-(void)setValue:(id)arg1 forUndefinedKey:(id)arg2 ;
-(MPIdentifierSet *)identifiers;
-(id)initWithIdentifiers:(id)arg1 ;
-(id)mergeWithObject:(id)arg1 ;
-(id)_stateDumpObject;
-(NSString *)humanDescription;
-(id)mediaItemPropertyValues;
-(void)setValue:(id)arg1 forModelKey:(id)arg2 ;
-(id)valueForModelKey:(id)arg1 ;
-(id)initWithIdentifiers:(id)arg1 block:(/*^block*/id)arg2 ;
-(id)copyWithIdentifiers:(id)arg1 ;
-(id)copyWithIdentifiers:(id)arg1 block:(/*^block*/id)arg2 ;
-(id)copyWithPropertySet:(id)arg1 ;
-(id)copyWithIdentifiers:(id)arg1 propertySet:(id)arg2 ;
-(MPIdentifierSet *)originalIdentifierSet;
-(char)hasLoadedValueForKey:(id)arg1 ;
-(char)hasLoadedValuesForPropertySet:(id)arg1 ;
-(char)_isModelKey:(id)arg1 ;
-(id)_sanitizedStorage;
@end

