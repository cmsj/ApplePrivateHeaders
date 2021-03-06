/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:56 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/QuickLook/iWork.qlgenerator/Contents/Frameworks/TSCalculationEngine.framework/Versions/A/TSCalculationEngine
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <TSCalculationEngine/TSCalculationEngine-Structs.h>
@class NSString;

@interface TSCEFunctionSpec : NSObject {

	NSString* _functionName;
	short _minArguments;
	short _maxArguments;
	short _repeatingGroupSize;
	vector<TSCEFunctionArgSpec, std::__1::allocator<TSCEFunctionArgSpec>>* _arguments;
	vector<TSCEFunctionArgSpec, std::__1::allocator<TSCEFunctionArgSpec>>* _repeatingArguments;
	char _isOperator;
	int _shipVersion;
	int _functionIndex;

}

@property (readonly) NSString * functionName; 
@property (readonly) int functionIndex;                                        //@synthesize functionIndex=_functionIndex - In the implementation block
@property (readonly) const vector<TSCEFunctionArgSpec* arguments; 
@property (nonatomic,readonly) short minArguments;                             //@synthesize minArguments=_minArguments - In the implementation block
@property (nonatomic,readonly) short maxArguments;                             //@synthesize maxArguments=_maxArguments - In the implementation block
@property (nonatomic,readonly) unsigned long long numArguments; 
@property (nonatomic,readonly) char isOperator;                                //@synthesize isOperator=_isOperator - In the implementation block
@property (nonatomic,readonly) int versionShippedIn;                           //@synthesize shipVersion=_shipVersion - In the implementation block
@property (nonatomic,readonly) short repeatingGroupSize;                       //@synthesize repeatingGroupSize=_repeatingGroupSize - In the implementation block
+(id)specDictionary;
+(id)functionSpecForFunctionIndex:(int)arg1 ;
+(id)specWithFunctionName:(id)arg1 minArgs:(int)arg2 maxArgs:(int)arg3 repeatingGroupSize:(short)arg4 isOperator:(int)arg5 shipVersion:(int)arg6 arguments:(const vector<TSCEFunctionArgSpec, std::__1::allocator<TSCEFunctionArgSpec>>*)arg7 functionIndex:(int)arg8 ;
+(id)functionSpecForFunctionName:(id)arg1 ;
+(char)isModeEnabled:(short)arg1 functionIndex:(short)arg2 ;
+(id)unsupportedFunctionNameForLocale:(id)arg1 ;
+(char)hasAnyDateArgumentsToFunction:(int)arg1 ;
-(id)description;
-(const vector<TSCEFunctionArgSpec*)arguments;
-(NSString *)functionName;
-(id)initWithFunctionName:(id)arg1 minArgs:(int)arg2 maxArgs:(int)arg3 repeatingGroupSize:(short)arg4 isOperator:(char)arg5 shipVersion:(int)arg6 arguments:(const vector<TSCEFunctionArgSpec, std::__1::allocator<TSCEFunctionArgSpec>>*)arg7 functionIndex:(int)arg8 ;
-(int)functionIndex;
-(void)loadRepeatingArguments;
-(id)localizedFunctionNameForLocale:(id)arg1 ;
-(TSCEFunctionArgSpec*)argumentSpecForIndex:(unsigned long long)arg1 ;
-(void)p_ValidateArguments;
-(id)localizedToolTipStringForLocale:(id)arg1 ;
-(id)displayStringForLocale:(id)arg1 ;
-(unsigned long long)numArguments;
-(int)accessorModeForArgumentIndex:(unsigned long long)arg1 ;
-(int)preferredTypeForArgumentIndex:(unsigned long long)arg1 ;
-(id)nativeSyntaxStringForArgument:(int)arg1 ;
-(long long)modeNumberForLocalizedString:(id)arg1 argumentSpecIndex:(unsigned long long)arg2 attributeMax:(long long)arg3 locale:(id)arg4 ;
-(short)minArguments;
-(short)maxArguments;
-(char)isOperator;
-(int)versionShippedIn;
-(short)repeatingGroupSize;
@end

