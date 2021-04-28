/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:43 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/Automator.framework/Versions/A/Automator
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ScriptingBridge/SBObject.h>
#import <libobjc.A.dylib/_AMSystemEventsGenericMethods.h>

@class NSString;

@interface _AMSystemEventsXMLElement : SBObject <_AMSystemEventsGenericMethods>

@property (copy,readonly) NSString * name; 
@property (copy) id value; 
-(NSString *)name;
-(id)value;
-(void)setValue:(id)arg1 ;
-(void)delete;
-(id)id;
-(void)closeSaving:(int)arg1 savingIn:(id)arg2 ;
-(void)duplicateTo:(id)arg1 withProperties:(id)arg2 ;
-(void)moveTo:(id)arg1 ;
-(void)saveIn:(id)arg1 as:(int)arg2 ;
-(void)printWithProperties:(id)arg1 printDialog:(char)arg2 ;
-(id)XMLElements;
-(id)XMLAttributes;
@end
