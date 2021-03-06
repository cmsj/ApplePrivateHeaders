/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:04 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/OpenDirectory.framework/Versions/A/OpenDirectory
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <OpenDirectory/OpenDirectory-Structs.h>
@class NSArray;

@interface ODSession : NSObject {

	void* _internal;

}

@property (copy,readonly) NSArray * configurationTemplateNames; 
@property (copy,readonly) NSArray * mappingTemplateNames; 
+(id)allocWithZone:(NSZone*)arg1 ;
+(void)initialize;
+(id)defaultSession;
+(id)sessionWithOptions:(id)arg1 error:(id*)arg2 ;
-(ODSessionRef)__getODSessionRef;
-(char)externalizedAuthorizationForm:(SCD_Struct_OD2*)arg1 authorization:(id)arg2 node:(id)arg3 error:(id*)arg4 ;
-(id)sendConfigurationCode:(long long)arg1 propertyList:(id)arg2 authorization:(id)arg3 error:(id*)arg4 ;
-(id)configurationDictionaryForNodename:(id)arg1 ;
-(id)templatesInFolder:(id)arg1 ;
-(id)configurationAuthorizationAllowingUserInteraction:(char)arg1 error:(id*)arg2 ;
-(char)addConfiguration:(id)arg1 authorization:(id)arg2 error:(id*)arg3 ;
-(char)deleteConfiguration:(id)arg1 authorization:(id)arg2 error:(id*)arg3 ;
-(id)configurationForNodename:(id)arg1 ;
-(NSArray *)configurationTemplateNames;
-(NSArray *)mappingTemplateNames;
-(void)dealloc;
-(id)description;
-(unsigned long long)_cfTypeID;
-(id)initWithOptions:(id)arg1 error:(id*)arg2 ;
-(id)nodeNamesAndReturnError:(id*)arg1 ;
-(char)deleteConfigurationWithNodename:(id)arg1 authorization:(id)arg2 error:(id*)arg3 ;
@end

