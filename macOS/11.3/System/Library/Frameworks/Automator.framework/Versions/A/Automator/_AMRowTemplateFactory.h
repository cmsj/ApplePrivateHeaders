/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:43 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/Automator.framework/Versions/A/Automator
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <Automator/Automator-Structs.h>
@interface _AMRowTemplateFactory : NSObject
+(id)_spotlightFriendlyPredicate:(id)arg1 ;
+(id)generateMetadataDescriptionForPredicate:(id)arg1 ;
-(id)longStringRowTemplatesWithName:(id)arg1 andKeyPath:(id)arg2 ;
-(id)stringRowTemplatesWithName:(id)arg1 andKeyPath:(id)arg2 ;
-(id)pastOrFutureDatesRowTemplatesWithName:(id)arg1 andKeyPath:(id)arg2 ;
-(id)pastDatesRowTemplatesWithName:(id)arg1 andKeyPath:(id)arg2 ;
-(id)rowTemplateBestMatchingPredicate:(id)arg1 withItemType:(id)arg2 ;
-(id)convertToEvaluationPredicateFromUIPredicate:(id)arg1 withItemType:(id)arg2 ;
-(id)rowTemplatesForItemType:(id)arg1 ;
-(id)rowTemplatesForRowTemplateFactoryTypes:(SCD_Struct_AM9*)arg1 ;
-(id)convertToEvaluationPredicateFromComparisonUIPredicate:(id)arg1 withItemType:(id)arg2 ;
-(id)numberPredicateOperatorTypes;
-(id)trueRowTemplateWithName:(id)arg1 andKeyPath:(id)arg2 andValueName:(id)arg3 ;
-(id)falseRowTemplateWithName:(id)arg1 andKeyPath:(id)arg2 andValueName:(id)arg3 ;
-(id)fileSizeRowTemplatesWithName:(id)arg1 andKeyPath:(id)arg2 ;
-(id)nonNegativeIntegerRowTemplatesWithName:(id)arg1 andKeyPath:(id)arg2 ;
-(id)boolRowTemplatesWithName:(id)arg1 andKeyPath:(id)arg2 ;
-(id)compoundPredicateTypes;
-(id)convertToEvaluationPredicateFromCompoundUIPredicate:(id)arg1 withItemType:(id)arg2 ;
-(id)stringPredicateOperatorTypes;
-(id)integerRowTemplateWithName:(id)arg1 andKeyPath:(id)arg2 withMinimum:(long long)arg3 ;
-(id)positiveIntegerRowTemplatesWithName:(id)arg1 andKeyPath:(id)arg2 ;
-(id)ratingRowTemplatesWithName:(id)arg1 andKeyPath:(id)arg2 ;
@end
