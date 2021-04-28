/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:20 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/FrontBoardServices.framework/Versions/A/FrontBoardServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <FrontBoardServices/FBSSceneAction.h>
#import <libobjc.A.dylib/FBSSceneSnapshotRequestDelegate.h>

@class NSMutableArray, FBSSceneSnapshotRequestHandle, BSSettings, NSString;

@interface FBSSceneSnapshotAction : FBSSceneAction <FBSSceneSnapshotRequestDelegate> {

	NSMutableArray* _requests;
	/*^block*/id _requestHandler;
	/*^block*/id _completionHandler;
	FBSSceneSnapshotRequestHandle* _outgoingRequestHandle;
	int _expired;
	BSSettings* _clientExtendedData;

}

@property (nonatomic,copy) id requestHandler;                            //@synthesize requestHandler=_requestHandler - In the implementation block
@property (nonatomic,copy) id completionHandler;                         //@synthesize completionHandler=_completionHandler - In the implementation block
@property (getter=isExpired,readonly) char expired; 
@property (nonatomic,readonly) double expirationInterval; 
@property (nonatomic,copy) BSSettings * clientExtendedData;              //@synthesize clientExtendedData=_clientExtendedData - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setInvalidationHandler:(/*^block*/id)arg1 ;
-(void)setCompletionHandler:(id)arg1 ;
-(id)completionHandler;
-(void)encodeWithXPCDictionary:(id)arg1 ;
-(Class)fallbackXPCEncodableClass;
-(id)initWithXPCDictionary:(id)arg1 ;
-(char)isExpired;
-(id)requestHandler;
-(void)setRequestHandler:(id)arg1 ;
-(BSSettings *)clientExtendedData;
-(void)setClientExtendedData:(BSSettings *)arg1 ;
-(char)snapshotRequestAllowSnapshot:(id)arg1 ;
-(char)snapshotRequest:(id)arg1 performWithContext:(id)arg2 ;
-(double)expirationInterval;
-(void)setExpired:(char)arg1 ;
-(void)_executeNextRequest;
-(char)_remainsActionable;
-(void)_finishAllRequests;
-(id)initWithRequests:(id)arg1 expirationInterval:(double)arg2 responseHandler:(/*^block*/id)arg3 ;
-(void)executeRequestsWithHandler:(/*^block*/id)arg1 completionHandler:(/*^block*/id)arg2 expirationHandler:(/*^block*/id)arg3 ;
@end
