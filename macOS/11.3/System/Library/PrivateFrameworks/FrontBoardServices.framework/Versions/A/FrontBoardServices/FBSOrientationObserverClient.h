/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:20 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/FrontBoardServices.framework/Versions/A/FrontBoardServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <FrontBoardServices/FBSServiceFacilityClient.h>

@protocol FBSOrientationObserverClientDelegate;
@interface FBSOrientationObserverClient : FBSServiceFacilityClient {

	id<FBSOrientationObserverClientDelegate> _delegate;
	unsigned _interest;

}
-(void)invalidate;
-(void)handleMessage:(id)arg1 withType:(long long)arg2 ;
-(id)initWithDelegate:(id)arg1 calloutQueue:(id)arg2 ;
-(long long)activeInterfaceOrientation;
-(void)activeInterfaceOrientationWithCompletion:(/*^block*/id)arg1 ;
-(void)registerOrientationInterest:(unsigned)arg1 ;
-(void)_getActiveInterfaceOrientationSynchronously:(char)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)configureConnectMessage:(id)arg1 ;
@end

