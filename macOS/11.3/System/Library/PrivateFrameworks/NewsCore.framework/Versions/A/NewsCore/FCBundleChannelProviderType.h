/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:37 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/Versions/A/NewsCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSArray, NSString;


@protocol FCBundleChannelProviderType
@property (nonatomic,readonly) NSArray * bundleChannelIDs; 
@property (nonatomic,readonly) NSString * bundleChannelIDsVersion; 
@property (assign,nonatomic,__weak) id<FCBundleChannelProviderDelegate> delegate; 
@required
-(id<FCBundleChannelProviderDelegate>)delegate;
-(void)setDelegate:(id)arg1;
-(NSString *)bundleChannelIDsVersion;
-(NSArray *)bundleChannelIDs;
-(void)loadInitialBundleChannelIDsWithCompletion:(/*^block*/id)arg1;

@end

