/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:43 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/Automator.framework/Versions/A/Automator
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Automator/_AMFinderItem.h>

@class NSNumber, NSString;

@interface _AMFinderFile : _AMFinderItem

@property (copy) NSNumber * fileType; 
@property (copy) NSNumber * creatorType; 
@property (assign) char stationery; 
@property (copy,readonly) NSString * productVersion; 
@property (copy,readonly) NSString * version; 
-(NSString *)version;
-(NSNumber *)fileType;
-(void)setFileType:(NSNumber *)arg1 ;
-(NSString *)productVersion;
-(NSNumber *)creatorType;
-(void)setCreatorType:(NSNumber *)arg1 ;
-(char)stationery;
-(void)setStationery:(char)arg1 ;
@end
