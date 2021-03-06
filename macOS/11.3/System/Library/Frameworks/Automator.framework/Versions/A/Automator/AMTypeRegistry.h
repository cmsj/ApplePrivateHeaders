/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:43 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/Automator.framework/Versions/A/Automator
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSArray, NSDictionary, NSMutableDictionary, AMType;

@interface AMTypeRegistry : NSObject {

	NSArray* _basicTypes;
	NSDictionary* _categorizedBasicTypes;
	NSArray* _customApplicationTypes;
	NSDictionary* _categorizedCustomApplicationTypes;
	NSMutableDictionary* __typesByAutomatorIdentifier;
	NSDictionary* _typesByHeaderInputType;
	AMType* _nothingType;
	AMType* _unknownType;

}

@property (retain) AMType * nothingType;                                                     //@synthesize nothingType=_nothingType - In the implementation block
@property (retain) AMType * unknownType;                                                     //@synthesize unknownType=_unknownType - In the implementation block
@property (nonatomic,copy) NSDictionary * categorizedBasicTypes;                             //@synthesize categorizedBasicTypes=_categorizedBasicTypes - In the implementation block
@property (nonatomic,copy) NSDictionary * typesByHeaderInputType;                            //@synthesize typesByHeaderInputType=_typesByHeaderInputType - In the implementation block
@property (retain) NSDictionary * categorizedCustomApplicationTypes;                         //@synthesize categorizedCustomApplicationTypes=_categorizedCustomApplicationTypes - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * _typesByAutomatorIdentifier;              //@synthesize _typesByAutomatorIdentifier=__typesByAutomatorIdentifier - In the implementation block
@property (retain) NSArray * basicTypes;                                                     //@synthesize basicTypes=_basicTypes - In the implementation block
@property (retain) NSArray * customApplicationTypes;                                         //@synthesize customApplicationTypes=_customApplicationTypes - In the implementation block
@property (nonatomic,readonly) NSDictionary * typesByAutomatorIdentifier; 
@property (nonatomic,readonly) NSArray * orderedCategoryIdentifiers; 
@property (nonatomic,readonly) NSArray * appBundleIDsDeclaringTypes; 
+(id)sharedTypeRegistry;
-(id)init;
-(id)_automaticallyGuessedInputTypeForActionInputTypes:(id)arg1 allowNothingType:(char)arg2 ;
-(id)typeWithAutomatorIdentifier:(id)arg1 ;
-(AMType *)nothingType;
-(AMType *)unknownType;
-(id)humanReadableNameForObject:(id)arg1 delimiter:(id)arg2 ;
-(id)imageRepresentationForObject:(id)arg1 ;
-(id)imageRepresentationTypeForObject:(id)arg1 ;
-(void)set_typesByAutomatorIdentifier:(NSMutableDictionary *)arg1 ;
-(NSMutableDictionary *)_typesByAutomatorIdentifier;
-(void)_registerType:(id)arg1 ;
-(id)_internalCustomApplicationTypes;
-(id)_basicTypes;
-(void)setBasicTypes:(NSArray *)arg1 ;
-(NSArray *)basicTypes;
-(id)_categorizeBasicTypes:(id)arg1 ;
-(void)setCategorizedBasicTypes:(NSDictionary *)arg1 ;
-(void)_registerTypes:(id)arg1 ;
-(id)_customApplicationTypes;
-(void)setCustomApplicationTypes:(NSArray *)arg1 ;
-(NSArray *)customApplicationTypes;
-(id)_categorizeCustomApplicationTypes:(id)arg1 ;
-(void)setCategorizedCustomApplicationTypes:(NSDictionary *)arg1 ;
-(void)_generateTypesIfNeeded;
-(id)_organizeTypesByHeaderInputType;
-(void)setTypesByHeaderInputType:(NSDictionary *)arg1 ;
-(NSDictionary *)categorizedBasicTypes;
-(NSArray *)orderedCategoryIdentifiers;
-(id)typesForApplicationWithBundleIdentifier:(id)arg1 ;
-(NSDictionary *)typesByHeaderInputType;
-(id)orderedTypesIncludingApplicationIdentifier:(id)arg1 includeNothing:(char)arg2 includeUnkown:(char)arg3 ;
-(NSArray *)appBundleIDsDeclaringTypes;
-(NSDictionary *)typesByAutomatorIdentifier;
-(void)setNothingType:(AMType *)arg1 ;
-(void)setUnknownType:(AMType *)arg1 ;
-(NSDictionary *)categorizedCustomApplicationTypes;
@end

