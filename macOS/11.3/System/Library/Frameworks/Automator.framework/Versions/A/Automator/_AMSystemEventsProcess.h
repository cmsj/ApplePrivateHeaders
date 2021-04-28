/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:43 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/Automator.framework/Versions/A/Automator
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Automator/_AMSystemEventsUIElement.h>

@class NSString;

@interface _AMSystemEventsProcess : _AMSystemEventsUIElement

@property (readonly) char acceptsHighLevelEvents; 
@property (readonly) char acceptsRemoteEvents; 
@property (copy,readonly) NSString * architecture; 
@property (readonly) char backgroundOnly; 
@property (copy,readonly) NSString * bundleIdentifier; 
@property (readonly) char Classic; 
@property (copy,readonly) NSString * creatorType; 
@property (copy,readonly) NSString * displayedName; 
@property (copy,readonly) id file; 
@property (copy,readonly) NSString * fileType; 
@property (assign) char frontmost; 
@property (readonly) char hasScriptingTerminology; 
@property (copy,readonly) NSString * name; 
@property (readonly) long long partitionSpaceUsed; 
@property (copy,readonly) id shortName; 
@property (readonly) long long totalPartitionSize; 
@property (readonly) long long unixId; 
@property (assign) char visible; 
-(NSString *)name;
-(NSString *)bundleIdentifier;
-(NSString *)fileType;
-(id)file;
-(id)windows;
-(void)setVisible:(char)arg1 ;
-(char)visible;
-(NSString *)architecture;
-(id)shortName;
-(long long)id;
-(NSString *)displayedName;
-(char)frontmost;
-(void)setFrontmost:(char)arg1 ;
-(NSString *)creatorType;
-(id)menuBars;
-(char)acceptsHighLevelEvents;
-(char)acceptsRemoteEvents;
-(char)backgroundOnly;
-(char)Classic;
-(char)hasScriptingTerminology;
-(long long)partitionSpaceUsed;
-(long long)totalPartitionSize;
-(long long)unixId;
@end
