/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:10 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/IMDaemonCore.framework/Versions/A/IMDaemonCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/CSSearchableIndexDelegate.h>

@class NSString;

@interface IMDSpotlightIndexDelegate : NSObject <CSSearchableIndexDelegate>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedInstance;
-(void)dealloc;
-(void)searchableIndex:(id)arg1 reindexSearchableItemsWithIdentifiers:(id)arg2 acknowledgementHandler:(/*^block*/id)arg3 ;
-(void)searchableIndex:(id)arg1 reindexAllSearchableItemsWithAcknowledgementHandler:(/*^block*/id)arg2 ;
@end

