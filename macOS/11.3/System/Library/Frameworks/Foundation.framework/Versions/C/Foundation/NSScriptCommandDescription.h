/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:50:55 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/Foundation.framework/Versions/C/Foundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Foundation/Foundation-Structs.h>
#import <libobjc.A.dylib/NSCoding.h>

@class NSString, NSObject, NSArray;

@interface NSScriptCommandDescription : NSObject <NSCoding> {

	NSString* _suiteName;
	NSString* _plistCommandName;
	unsigned _classAppleEventCode;
	unsigned _idAppleEventCode;
	NSString* _objcClassName;
	NSObject* _resultTypeNameOrDescription;
	unsigned _plistResultTypeAppleEventCode;
	id _moreVars;

}

@property (copy,readonly) NSString * suiteName; 
@property (copy,readonly) NSString * commandName; 
@property (readonly) unsigned appleEventClassCode; 
@property (readonly) unsigned appleEventCode; 
@property (copy,readonly) NSString * commandClassName; 
@property (copy,readonly) NSString * returnType; 
@property (readonly) unsigned appleEventCodeForReturnType; 
@property (copy,readonly) NSArray * argumentNames; 
+(id)_argumentDescriptionsFromUnnamedImplDeclaration:(id)arg1 presoDeclaration:(id)arg2 namedImplDeclarations:(id)arg3 presoDeclarations:(id)arg4 suiteName:(id)arg5 commandName:(id)arg6 ;
-(void)dealloc;
-(id)description;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(char)_isHidden;
-(id)replacementObjectForPortCoder:(id)arg1 ;
-(NSString *)returnType;
-(unsigned)appleEventCode;
-(id)_argumentDescriptionForKey:(id)arg1 ;
-(char)_isFromSDEF;
-(NSString *)suiteName;
-(id)_presentableDescription;
-(id)_presentableNames;
-(char)_hasHiddenParts;
-(id)_argumentDescriptions;
-(id)_resultTypeDescription;
-(unsigned)appleEventCodeForReturnType;
-(unsigned)appleEventClassCode;
-(id)_presentableResultDescription;
-(unsigned short)_appendEventDeclarationsToAETEData:(id)arg1 includingParts:(int)arg2 ;
-(id)_synonymDescriptions;
-(NSString *)commandName;
-(id)_firstPresentableName;
-(void)_addAccessGroups:(id)arg1 ;
-(void)_reconcileToSuiteRegistry:(id)arg1 ;
-(id)createCommandInstance;
-(NSString *)commandClassName;
-(id)_accessGroups;
-(id)_initWithSuiteName:(id)arg1 commandName:(id)arg2 implDeclaration:(id)arg3 presoDeclaration:(id)arg4 ;
-(id)_argumentDescriptionsByName;
-(id)createCommandInstanceWithZone:(NSZone*)arg1 ;
-(id)initWithSuiteName:(id)arg1 commandName:(id)arg2 dictionary:(id)arg3 ;
-(NSArray *)argumentNames;
-(id)typeForArgumentWithName:(id)arg1 ;
-(unsigned)appleEventCodeForArgumentWithName:(id)arg1 ;
-(char)isOptionalArgumentWithName:(id)arg1 ;
-(id)_initWithProperties:(const SCD_Struct_NS65*)arg1 ;
-(void)_setAccessGroups:(id)arg1 ;
-(id)_initWithProperties:(const SCD_Struct_NS65*)arg1 commandName:(id)arg2 resultTypeAppleEventCode:(unsigned)arg3 ;
-(char)_matchesAppleEventCode:(unsigned)arg1 classCode:(unsigned)arg2 ;
-(id)_descriptionWithTabCount:(unsigned long long)arg1 ;
@end
