/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:50:55 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/Foundation.framework/Versions/C/Foundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface NSAEDescriptorTranslator : NSObject {

	id _descToObjMap;
	id _objToDescMap;

}
+(id)sharedAEDescriptorTranslator;
+(id)_numberByTranslatingNumericDescriptor:(id)arg1 toType:(id)arg2 inSuite:(id)arg3 ;
+(id)_valueByTranslatingOSAErrorRangeDescriptor:(id)arg1 toType:(id)arg2 inSuite:(id)arg3 ;
+(id)_arrayByTranslatingAEList:(id)arg1 toType:(id)arg2 inSuite:(id)arg3 ;
+(id)_dictionaryByTranslatingAERecord:(id)arg1 toType:(id)arg2 inSuite:(id)arg3 ;
+(id)_stringByTranslatingTextDescriptor:(id)arg1 toType:(id)arg2 inSuite:(id)arg3 ;
+(id)_dateByTranslatingLongDateTimeDescriptor:(id)arg1 toType:(id)arg2 inSuite:(id)arg3 ;
+(id)_stringByTranslatingFSSpecDescriptor:(id)arg1 toType:(id)arg2 inSuite:(id)arg3 ;
+(id)_stringByTranslatingAliasDescriptor:(id)arg1 toType:(id)arg2 inSuite:(id)arg3 ;
+(id)_descriptorByTranslatingArray:(id)arg1 ofObjectsOfType:(id)arg2 inSuite:(id)arg3 ;
+(id)_descriptorByTranslatingData:(id)arg1 ofType:(id)arg2 inSuite:(id)arg3 ;
+(id)_descriptorByTranslatingDate:(id)arg1 ofType:(id)arg2 inSuite:(id)arg3 ;
+(id)_descriptorByTranslatingDictionary:(id)arg1 ofType:(id)arg2 inSuite:(id)arg3 ;
+(id)_descriptorByTranslatingNull:(id)arg1 ofType:(id)arg2 inSuite:(id)arg3 ;
+(id)_descriptorByTranslatingNumber:(id)arg1 ofType:(id)arg2 inSuite:(id)arg3 ;
+(id)_descriptorByTranslatingString:(id)arg1 ofType:(id)arg2 inSuite:(id)arg3 ;
+(id)_propertyContainerClassDescriptionFromDictionaryType:(id)arg1 inSuite:(id)arg2 ;
-(void)dealloc;
-(id)init;
-(void)_setUpFoundationTranslations;
-(void)registerTranslator:(id)arg1 selector:(SEL)arg2 toTranslateFromDescriptorType:(unsigned)arg3 ;
-(void)registerTranslator:(id)arg1 selector:(SEL)arg2 toTranslateFromClass:(Class)arg3 ;
-(id)objectByTranslatingDescriptor:(id)arg1 toType:(id)arg2 inSuite:(id)arg3 ;
-(id)descriptorByTranslatingObject:(id)arg1 ofType:(id)arg2 inSuite:(id)arg3 ;
@end

