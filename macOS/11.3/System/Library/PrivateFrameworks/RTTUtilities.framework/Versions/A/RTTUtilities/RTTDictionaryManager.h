/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:19 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/RTTUtilities.framework/Versions/A/RTTUtilities
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSArray;

@interface RTTDictionaryManager : NSObject {

	NSArray* _availableDictionaries;

}

@property (nonatomic,retain) NSArray * availableDictionaries;              //@synthesize availableDictionaries=_availableDictionaries - In the implementation block
+(id)_availableDictionaryAssetsUsingRemoteInfo:(char)arg1 ;
-(void)dealloc;
-(id)init;
-(void)downloadIfNeeded;
-(void)deleteIfNeeded;
-(void)activateTTYDictionary;
-(void)deactivateTTYDictionary;
-(void)setAvailableDictionaries:(NSArray *)arg1 ;
-(id)_ttyDictionaryAsset;
-(void)_downloadAsset:(id)arg1 ;
-(NSArray *)availableDictionaries;
@end

