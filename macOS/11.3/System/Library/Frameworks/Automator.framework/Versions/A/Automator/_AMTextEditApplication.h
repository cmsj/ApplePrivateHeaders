/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:43 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/Automator.framework/Versions/A/Automator
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ScriptingBridge/SBApplication.h>

@class NSString;

@interface _AMTextEditApplication : SBApplication

@property (readonly) char frontmost; 
@property (copy,readonly) NSString * name; 
@property (copy,readonly) NSString * version; 
-(NSString *)name;
-(NSString *)version;
-(id)open:(id)arg1 ;
-(id)windows;
-(id)documents;
-(char)frontmost;
-(id)classNamesForCodes;
-(id)codesForPropertyNames;
-(void)quitSaving:(int)arg1 ;
-(void)print:(id)arg1 printDialog:(char)arg2 withProperties:(id)arg3 ;
@end

