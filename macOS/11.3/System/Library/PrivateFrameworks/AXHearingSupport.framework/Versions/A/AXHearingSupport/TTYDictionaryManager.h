/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:45 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/AXHearingSupport.framework/Versions/A/AXHearingSupport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSCondition, NSArray;

@interface TTYDictionaryManager : NSObject {

	NSCondition* _condition;
	NSArray* _availableDictionaries;

}

@property (nonatomic,retain) NSArray * availableDictionaries;              //@synthesize availableDictionaries=_availableDictionaries - In the implementation block
+(id)availableDictionaryAssetsUsingRemoteInfo:(char)arg1 ;
-(void)dealloc;
-(id)init;
-(void)downloadIfNeeded;
-(void)deleteIfNeeded;
-(void)activateTTYDictionary;
-(void)deactivateTTYDictionary;
-(void)setAvailableDictionaries:(NSArray *)arg1 ;
-(id)_ttyDictionaryAsset;
-(NSArray *)availableDictionaries;
-(char)downloadAsset:(id)arg1 withError:(id*)arg2 ;
-(char)_isStalledAutoDownloadAsset:(id)arg1 ;
@end

