/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:59 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/MusicLibrary.framework/Versions/A/MusicLibrary
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class ML3LanguageResources, NSObject;

@interface ML3LanguageResourceManager : NSObject {

	ML3LanguageResources* _cachedResources;
	NSObject*<OS_dispatch_queue> _serialQueue;

}

@property (nonatomic,retain) ML3LanguageResources * cachedResources;                //@synthesize cachedResources=_cachedResources - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> serialQueue;              //@synthesize serialQueue=_serialQueue - In the implementation block
@property (nonatomic,readonly) ML3LanguageResources * resources; 
+(id)sharedResourceManager;
-(id)_init;
-(NSObject*<OS_dispatch_queue>)serialQueue;
-(ML3LanguageResources *)resources;
-(void)setSerialQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)invalidateCachedResources;
-(id)_buildLanguageResources;
-(ML3LanguageResources *)cachedResources;
-(void)setCachedResources:(ML3LanguageResources *)arg1 ;
@end

