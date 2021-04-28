/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:03 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/Lookup.framework/Versions/A/Lookup
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Lookup/Lookup-Structs.h>
#import <libobjc.A.dylib/NSDefinitionExternalModule.h>

@interface LULookupDefinitionModule : NSObject <NSDefinitionExternalModule>
+(void)hideDefinition;
+(void)showDefinitionForTerm:(id)arg1 atLocation:(CGPoint)arg2 options:(id)arg3 ;
+(void)showDefinitionForTerm:(id)arg1 relativeToRect:(CGRect)arg2 ofView:(id)arg3 options:(id)arg4 ;
+(id)_termWithOrigin:(CGPoint*)arg1 options:(id*)arg2 forRange:(NSRange)arg3 inString:(id)arg4 withOptions:(id)arg5 originProvider:(/*^block*/id)arg6 inView:(id)arg7 ;
+(void)_focusTermUsingQueue:(id)arg1 handler:(/*^block*/id)arg2 ;
+(void)_showDefinitionForTerm:(id)arg1 atLocation:(CGPoint)arg2 options:(id)arg3 ;
+(void)focusTermUsingQueue:(id)arg1 handler:(/*^block*/id)arg2 ;
+(NSRange)tokenRangeForString:(id)arg1 range:(NSRange)arg2 options:(id*)arg3 ;
+(id)optionDictionaryWithOptions:(id)arg1 key:(id)arg2 value:(id)arg3 force:(char)arg4 ;
+(id)lookupAnimationControllerForTerm:(id)arg1 atLocation:(CGPoint)arg2 options:(id)arg3 ;
+(id)lookupAnimationControllerForTerm:(id)arg1 relativeToRect:(CGRect)arg2 ofView:(id)arg3 options:(id)arg4 ;
-(void)showDefinitionForString:(id)arg1 range:(NSRange)arg2 options:(id)arg3 originProvider:(void*)arg4 inView:(id)arg5 ;
-(void)showDefinitionByHotKey;
-(id)lookupAnimationControllerForString:(id)arg1 range:(NSRange)arg2 options:(id)arg3 originProvider:(void*)arg4 inView:(id)arg5 ;
@end
