/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:58 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/QuickLook/iWork.qlgenerator/Contents/Frameworks/TSStyles.framework/Versions/A/TSStyles
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TSStyles/TSStyles-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <TSStyles/TSSMutablePropertySource.h>

@class NSArray, TSSPropertySet, NSString;

@interface TSSPropertyMap : NSObject <NSCopying, TSSMutablePropertySource> {

	TSSPropertyStoreRef mStore;

}

@property (nonatomic,readonly) unsigned long long count; 
@property (nonatomic,readonly) NSArray * allKeys; 
@property (nonatomic,readonly) TSSPropertySet * allProperties; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)propertyMap;
+(id)propertyMapWithPropertiesAndValues:(int)arg1 ;
+(id)propertyMapWithPropertyMap:(id)arg1 ;
+(id)propertyMapWithDictionary:(id)arg1 ;
-(void)pSetArrayOfFloats:(float)arg1 forProperty:(int)arg2 ;
-(void)pSetRepeatedArrayOfInts:(const RepeatedField<int>*)arg1 forProperty:(int)arg2 defaultValues:(int)arg3 min:(int)arg4 max:(int)arg5 validator:(id)arg6 usePreviousValueOnDefault:(char)arg7 ;
-(void)pSetArrayOfInts:(int)arg1 forProperty:(int)arg2 ;
-(void)pSetArrayOfBools:(BOOL)arg1 forProperty:(int)arg2 ;
-(void)pSetRepeatedArrayOfFloats:(const RepeatedField<float>*)arg1 forProperty:(int)arg2 defaultValues:(float)arg3 validator:(id)arg4 ;
-(void)pSetRepeatedArrayOfInts:(const RepeatedField<int>*)arg1 forProperty:(int)arg2 defaultValues:(int)arg3 min:(int)arg4 max:(int)arg5 validator:(id)arg6 ;
-(void)pSetRepeatedArrayOfBools:(const RepeatedField<bool>*)arg1 forProperty:(int)arg2 defaultValues:(BOOL)arg3 validator:(id)arg4 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)dealloc;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)description;
-(id)init;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(unsigned long long)count;
-(id)initWithCapacity:(unsigned long long)arg1 ;
-(NSArray *)allKeys;
-(TSSPropertySet *)allProperties;
-(void)removeValueForProperty:(int)arg1 ;
-(id)diff:(id)arg1 ;
-(void)setObject:(id)arg1 forProperty:(int)arg2 ;
-(id)objectForProperty:(int)arg1 ;
-(void)removeAllPropertyValues;
-(id)initWithPropertiesAndValues:(int)arg1 ;
-(void)setIntValue:(int)arg1 forProperty:(int)arg2 ;
-(float)floatValueForProperty:(int)arg1 ;
-(void)setFloatValue:(float)arg1 forProperty:(int)arg2 ;
-(char)containsProperty:(int)arg1 ;
-(void)setDoubleValue:(double)arg1 forProperty:(int)arg2 ;
-(id)initWithFirstKey:(int)arg1 andArgumentList:(_va_list_tag*)arg2 ;
-(id)boxedObjectForProperty:(int)arg1 ;
-(void)enumeratePropertiesAndObjectsUsingBlock:(/*^block*/id)arg1 ;
-(void)addValuesFromPropertyMap:(id)arg1 ;
-(void)removeValuesFromPropertyMap:(id)arg1 ;
-(void)filterWithProperties:(id)arg1 ;
-(int)intValueForProperty:(int)arg1 ;
-(double)doubleValueForProperty:(int)arg1 ;
-(double)CGFloatValueForProperty:(int)arg1 ;
-(id)initWithPropertyMap:(id)arg1 ;
-(void)p_getAllKeys:(int*)arg1 ;
-(id)old_description;
-(void)setBoxedObject:(id)arg1 forProperty:(int)arg2 ;
-(void)setCGFloatValue:(double)arg1 forProperty:(int)arg2 ;
-(void)setBoolValue:(char)arg1 forProperty:(int)arg2 ;
-(char)definesProperty:(int)arg1 ;
-(char)containsAnyPropertyInProperties:(id)arg1 ;
-(void)removeValuesForProperties:(id)arg1 ;
-(void)minusPropertyMap:(id)arg1 ;
-(id)diffOnlyDifferences:(id)arg1 ;
-(id)diffPropertyNames:(id)arg1 ;
-(id)propertyMapByAddingValuesFromPropertyMap:(id)arg1 ;
-(id)propertyMapByRemovingValuesFromPropertyMap:(id)arg1 ;
-(id)propertyMapByRemovingValuesForProperties:(id)arg1 ;
-(id)propertyMapWithProperties:(id)arg1 ;
-(char)isEqualToPropertyMap:(id)arg1 ;
-(void)p_enumerateReferencedDataForProperty:(int)arg1 withObject:(id)arg2 stop:(char*)arg3 usingBlock:(/*^block*/id)arg4 ;
-(void)enumerateReferencedDataForProperty:(int)arg1 usingBlock:(/*^block*/id)arg2 ;
-(void)enumerateDataPropertiesUsingBlock:(/*^block*/id)arg1 ;
-(void)setBoxedObjects:(id)arg1 forProperties:(int*)arg2 ;
@end
