/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:28 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/SafariSharedUI.framework/Versions/A/SafariSharedUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/WBSMobileAssetControllerProtocol.h>

@protocol OS_dispatch_queue, WBSMobileAssetControllerDelegate;
@class NSDate, NSURL, NSObject;

@interface WBSLocalAssetController : NSObject <WBSMobileAssetControllerProtocol> {

	NSURL* _url;
	NSObject*<OS_dispatch_queue> _queue;
	id<WBSMobileAssetControllerDelegate> _delegate;

}

@property (__weak) id<WBSMobileAssetControllerDelegate> delegate; 
@property (nonatomic,retain) NSDate * lastUpdateDate; 
@property (nonatomic,readonly) double updateInterval; 
-(id<WBSMobileAssetControllerDelegate>)delegate;
-(id)initWithURL:(id)arg1 ;
-(void)setDelegate:(id<WBSMobileAssetControllerDelegate>)arg1 ;
-(void)setLastUpdateDate:(NSDate *)arg1 ;
-(NSDate *)lastUpdateDate;
-(double)updateInterval;
-(void)queryURL:(/*^block*/id)arg1 ;
@end

