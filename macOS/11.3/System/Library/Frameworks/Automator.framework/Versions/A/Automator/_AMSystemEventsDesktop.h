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

@interface _AMSystemEventsDesktop : SBObject <_AMSystemEventsGenericMethods>

@property (copy,readonly) NSString * name; 
@property (assign) double changeInterval; 
@property (copy,readonly) NSString * displayName; 
@property (copy) id picture; 
@property (assign) long long pictureRotation; 
@property (copy) id picturesFolder; 
@property (assign) char randomOrder; 
@property (assign) char translucentMenuBar; 
-(NSString *)name;
-(NSString *)displayName;
-(void)delete;
-(void)setPicture:(id)arg1 ;
-(id)picture;
-(long long)id;
-(void)closeSaving:(int)arg1 savingIn:(id)arg2 ;
-(void)duplicateTo:(id)arg1 withProperties:(id)arg2 ;
-(void)moveTo:(id)arg1 ;
-(void)saveIn:(id)arg1 as:(int)arg2 ;
-(void)printWithProperties:(id)arg1 printDialog:(char)arg2 ;
-(double)changeInterval;
-(void)setChangeInterval:(double)arg1 ;
-(long long)pictureRotation;
-(void)setPictureRotation:(long long)arg1 ;
-(id)picturesFolder;
-(void)setPicturesFolder:(id)arg1 ;
-(char)randomOrder;
-(void)setRandomOrder:(char)arg1 ;
-(char)translucentMenuBar;
-(void)setTranslucentMenuBar:(char)arg1 ;
@end

