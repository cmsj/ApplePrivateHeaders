/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:03 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/MetadataUtilities.framework/Versions/A/MetadataUtilities
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <MetadataUtilities/MetadataUtilities-Structs.h>
@class NSString, NSMutableDictionary;

@interface FilterElementDefinition : NSObject {

	NSString* _rootName;
	unsigned long long _rule;
	unsigned long long _mask;
	unsigned long long _subRule;
	unsigned long long _subMask;
	int _subAuxValueCount;
	char _hasAuxValue;
	unsigned long long _auxValue;
	NSMutableDictionary* _setOfMatches;
	NSString* _namedLink;
	FilterElementDefinition* _wildCard;
	FilterElementDefinition* _superWildCard;

}
-(void)dealloc;
-(char)isBottomValue;
-(SCD_Struct_MD2)encodeInto:(MDPlistContainerRef)arg1 auxArray:(id)arg2 namedRootMap:(id)arg3 ;
-(id)initAsRoot:(id)arg1 ;
-(void)addRuleField:(int)arg1 value:(int)arg2 hasAuxValue:(char)arg3 auxValue:(unsigned long long)arg4 inside:(char)arg5 forPathComponents:(id)arg6 permitLink:(char)arg7 componentIndex:(int)arg8 parentElement:(id)arg9 copyParentWildcardLink:(char)arg10 ;
-(void)dumpAttributesInto:(char*)arg1 forLevel:(int)arg2 ;
-(void)dump:(int)arg1 ;
@end

