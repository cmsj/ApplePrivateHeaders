/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:28 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/SafariSharedUI.framework/Versions/A/SafariSharedUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol WBSDictionaryKeyValueStore;
@interface WBSForYouDataSourceWeightManager : NSObject {

	id<WBSDictionaryKeyValueStore> _store;

}
-(void)clear;
-(double)weightForSource:(unsigned long long)arg1 ;
-(void)downvoteSource:(unsigned long long)arg1 ;
-(id)initWithKeyValueStore:(id)arg1 ;
@end

