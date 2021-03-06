/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:56 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/QuickLook/iWork.qlgenerator/Contents/Frameworks/KeynoteQuicklook.framework/Versions/A/KeynoteQuicklook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <KeynoteQuicklook/KeynoteQuicklook-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSDictionary;

@interface KNAnimationAttributes : NSObject <NSCopying> {

	NSString* _effect;
	NSDictionary* _attributes;

}

@property (nonatomic,readonly) NSString * effect;                      //@synthesize effect=_effect - In the implementation block
@property (nonatomic,readonly) NSDictionary * attributes;              //@synthesize attributes=_attributes - In the implementation block
+(id)supportedCustomAttributes;
+(id)attributesWithEffect:(id)arg1 attributes:(id)arg2 ;
+(char)customAttributeKeyIsValid:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(NSDictionary *)attributes;
-(NSString *)effect;
-(id)attributesByAddingAttributesFromDictionary:(id)arg1 ;
-(id)valueForAttributeKey:(id)arg1 ;
-(id)attributesAdjustedForTheme:(id)arg1 ;
-(id)attributesBySettingValue:(id)arg1 forAttributeKey:(id)arg2 ;
-(char)containsAttributeForKey:(id)arg1 ;
-(id)initWithEffect:(id)arg1 attributes:(id)arg2 ;
-(id)p_curveForNameKey:(id)arg1 forTheme:(id)arg2 ;
-(id)attributesByAddingAttributes:(id)arg1 ;
-(id)attributesByChangingEffectToEffect:(id)arg1 ;
-(id)attributesByRemovingAttributeForKey:(id)arg1 ;
-(id)attributesByUpdatingThemeCurveNamesWithOldToNewCurveNameMap:(id)arg1 ;
@end

