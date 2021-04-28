/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:28 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/MapsSupport.framework/Versions/A/MapsSupport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol MSPContainerPersisterDelegate;
@interface MSPContainerPersister : NSObject {

	id<MSPContainerPersisterDelegate> _delegate;
	long long _duplicatesPolicy;

}

@property (assign,nonatomic,__weak) id<MSPContainerPersisterDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) long long duplicatesPolicy;                                   //@synthesize duplicatesPolicy=_duplicatesPolicy - In the implementation block
-(id<MSPContainerPersisterDelegate>)delegate;
-(void)setDelegate:(id<MSPContainerPersisterDelegate>)arg1 ;
-(void)eraseWithCompletion:(/*^block*/id)arg1 ;
-(void)fetchStateSnapshotWithCompletion:(/*^block*/id)arg1 ;
-(void)commitEditWithNewContents:(id)arg1 edits:(id)arg2 appliedToOldContents:(id)arg3 completion:(/*^block*/id)arg4 ;
-(void)commitByMergingWithStateSnapshot:(id)arg1 mergeOptions:(id)arg2 completion:(/*^block*/id)arg3 ;
-(long long)duplicatesPolicy;
@end
