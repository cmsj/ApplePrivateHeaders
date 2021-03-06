/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:43 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/Automator.framework/Versions/A/Automator
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Automator/_AMSystemEventsDiskItem.h>

@class NSString;

@interface _AMSystemEventsFile : _AMSystemEventsDiskItem

@property (copy) id creatorType; 
@property (copy) id defaultApplication; 
@property (copy) id fileType; 
@property (copy,readonly) NSString * kind; 
@property (copy,readonly) NSString * productVersion; 
@property (copy,readonly) NSString * shortVersion; 
@property (assign) char stationery; 
@property (copy,readonly) NSString * typeIdentifier; 
@property (copy,readonly) NSString * version; 
-(id)open;
-(NSString *)version;
-(NSString *)typeIdentifier;
-(NSString *)kind;
-(id)fileType;
-(void)setFileType:(id)arg1 ;
-(NSString *)productVersion;
-(NSString *)shortVersion;
-(id)creatorType;
-(void)setCreatorType:(id)arg1 ;
-(id)defaultApplication;
-(void)setDefaultApplication:(id)arg1 ;
-(char)stationery;
-(void)setStationery:(char)arg1 ;
@end

