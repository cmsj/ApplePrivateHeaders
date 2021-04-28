/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:37 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/Versions/A/NewsCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/SKRequestDelegate.h>
#import <libobjc.A.dylib/FCReceiptRefresherType.h>

@class NSString, SKReceiptRefreshRequest, NFPendingPromise;

@interface FCReceiptRefresher : NSObject <SKRequestDelegate, FCReceiptRefresherType> {

	NSString* _restoreBundleID;
	SKReceiptRefreshRequest* _request;
	NFPendingPromise* _pendingPromise;

}

@property (nonatomic,copy) NSString * restoreBundleID;                       //@synthesize restoreBundleID=_restoreBundleID - In the implementation block
@property (nonatomic,retain) SKReceiptRefreshRequest * request;              //@synthesize request=_request - In the implementation block
@property (nonatomic,retain) NFPendingPromise * pendingPromise;              //@synthesize pendingPromise=_pendingPromise - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(SKReceiptRefreshRequest *)request;
-(void)setRequest:(SKReceiptRefreshRequest *)arg1 ;
-(void)request:(id)arg1 didFailWithError:(id)arg2 ;
-(void)requestDidFinish:(id)arg1 ;
-(id)refreshForPurchase:(id)arg1 ;
-(void)setPendingPromise:(NFPendingPromise *)arg1 ;
-(void)setRestoreBundleID:(NSString *)arg1 ;
-(NSString *)restoreBundleID;
-(id)refreshReceiptDirectoryURLWithBundleID:(id)arg1 ;
-(NFPendingPromise *)pendingPromise;
@end
