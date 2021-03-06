/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:43 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/Automator.framework/Versions/A/Automator
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSURL, NSMutableDictionary;

@interface AMActionMetadataStore : NSObject {

	char _cacheDataIsDirty;
	NSURL* _cacheFileURL;
	NSMutableDictionary* _actionMetadataByBundleIdentifier;

}

@property (retain) NSURL * cacheFileURL;                                                //@synthesize cacheFileURL=_cacheFileURL - In the implementation block
@property (retain) NSMutableDictionary * actionMetadataByBundleIdentifier;              //@synthesize actionMetadataByBundleIdentifier=_actionMetadataByBundleIdentifier - In the implementation block
@property (assign) char cacheDataIsDirty;                                               //@synthesize cacheDataIsDirty=_cacheDataIsDirty - In the implementation block
+(id)actionMetadataCacheFileURL;
-(NSMutableDictionary *)actionMetadataByBundleIdentifier;
-(void)setCacheDataIsDirty:(char)arg1 ;
-(void)writeUpdatedStoreFileIfNeeded;
-(NSURL *)cacheFileURL;
-(void)setActionMetadataByBundleIdentifier:(NSMutableDictionary *)arg1 ;
-(void)_removeDeadEntries;
-(void)setCacheFileURL:(NSURL *)arg1 ;
-(void)_loadCacheFileData;
-(char)cacheDataIsDirty;
-(id)initWithCacheFileURL:(id)arg1 ;
-(id)valueForKey:(id)arg1 forActionWithBundleIdentifier:(id)arg2 ;
-(void)setValue:(id)arg1 forKey:(id)arg2 forActionWithBundleIdentifier:(id)arg3 ;
@end

