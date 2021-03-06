/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:43 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/Automator.framework/Versions/A/Automator
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableDictionary, NSDictionary, NSArray;

@interface AMVariablesRegistry : NSObject {

	NSMutableDictionary* __variables;
	NSMutableDictionary* __variableDefinitionsByIdentifier;
	NSMutableDictionary* __variablesByApplication;
	NSMutableDictionary* __variablesByCategory;

}

@property (retain) NSMutableDictionary * _variables;                                        //@synthesize _variables=__variables - In the implementation block
@property (retain) NSMutableDictionary * _variableDefinitionsByIdentifier;                  //@synthesize _variableDefinitionsByIdentifier=__variableDefinitionsByIdentifier - In the implementation block
@property (retain) NSMutableDictionary * _variablesByApplication;                           //@synthesize _variablesByApplication=__variablesByApplication - In the implementation block
@property (retain) NSMutableDictionary * _variablesByCategory;                              //@synthesize _variablesByCategory=__variablesByCategory - In the implementation block
@property (nonatomic,readonly) NSDictionary * variables; 
@property (nonatomic,readonly) NSArray * variablesByCategory; 
@property (nonatomic,readonly) NSArray * variablesByApplication; 
@property (nonatomic,readonly) NSDictionary * variableDefinitionsByIdentifier; 
+(id)iconForVariableWithIdentifier:(id)arg1 ;
+(id)sharedVariablesRegistry;
+(id)largeIconForVariableWithIdentifier:(id)arg1 ;
-(id)init;
-(NSDictionary *)variables;
-(NSMutableDictionary *)_variables;
-(void)addVariable:(id)arg1 ;
-(id)variableWithUUID:(id)arg1 ;
-(void)set_variables:(NSMutableDictionary *)arg1 ;
-(id)variableWithIdentifier:(id)arg1 ;
-(void)loadAllVariables;
-(void)loadVariablesFromDisk;
-(void)addVariablesWithPropertyLists:(id)arg1 ;
-(void)set_variableDefinitionsByIdentifier:(NSMutableDictionary *)arg1 ;
-(void)mapVariableIdentifiersToSelectorAndNames;
-(NSMutableDictionary *)_variablesByCategory;
-(void)set_variablesByCategory:(NSMutableDictionary *)arg1 ;
-(void)calculateVariablesByCategory;
-(NSMutableDictionary *)_variablesByApplication;
-(void)set_variablesByApplication:(NSMutableDictionary *)arg1 ;
-(void)calculateVariablesByApplication;
-(NSMutableDictionary *)_variableDefinitionsByIdentifier;
-(void)_mapDateAndTimeVariableIdentifiers;
-(void)_mapLocationsVariableIdentifiers;
-(void)_mapSystemVariableIdentifiers;
-(void)_mapUserVariableIdentifiers;
-(void)_mapUtilitiesVariableIdentifiers;
-(id)templateVariableIdentifiers;
-(void)createTemplateVariables;
-(void)createBuiltInVariables;
-(void)loadVariablesByApplication;
-(void)_setupVariable:(id)arg1 ;
-(void)removeVariables:(id)arg1 ;
-(id)variableWithAllChildrenWithUUID:(id)arg1 ;
-(id)userVariableIdentifiers;
-(id)dateAndTimeVariableIdentifiers;
-(id)locationsVariableIdentifiers;
-(id)systemVariableIdentifiers;
-(id)textAndDataVariableIdentifiers;
-(id)utilitiesVariableIdentifiers;
-(NSArray *)variablesByCategory;
-(NSArray *)variablesByApplication;
-(id)variableWithName:(id)arg1 identifier:(id)arg2 value:(id)arg3 ;
-(void)addVariables:(id)arg1 ;
-(void)addCustomVariableDictionary:(id)arg1 ;
-(void)reallyRemoveVariables:(id)arg1 ;
-(NSDictionary *)variableDefinitionsByIdentifier;
@end

