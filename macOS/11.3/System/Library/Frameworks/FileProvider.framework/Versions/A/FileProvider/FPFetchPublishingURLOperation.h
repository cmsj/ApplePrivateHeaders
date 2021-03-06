/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:19 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/FileProvider.framework/Versions/A/FileProvider
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <FileProvider/FPActionOperation.h>
#import <libobjc.A.dylib/NSFilePresenter.h>

@class NSURL, NSOperationQueue, NSSet, FPItem, NSProgress, NSString;

@interface FPFetchPublishingURLOperation : FPActionOperation <NSFilePresenter> {

	FPItem* _item;
	char _isFilePresenter;
	NSOperationQueue* _operationQueue;
	NSURL* _itemURL;
	NSProgress* _remoteCancellableProgress;
	NSProgress* _itemUploadProgress;
	/*^block*/id _fetchCompletionBlock;
	/*^block*/id __t_filePresenterStarted;

}

@property (nonatomic,copy) id _t_filePresenterStarted;                                   //@synthesize _t_filePresenterStarted=__t_filePresenterStarted - In the implementation block
@property (nonatomic,copy) id fetchCompletionBlock;                                      //@synthesize fetchCompletionBlock=_fetchCompletionBlock - In the implementation block
@property (copy,readonly) NSURL * presentedItemURL; 
@property (retain,readonly) NSOperationQueue * presentedItemOperationQueue; 
@property (copy,readonly) NSURL * primaryPresentedItemURL; 
@property (readonly) NSSet * observedPresentedItemUbiquityAttributes; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)cancel;
-(NSURL *)presentedItemURL;
-(NSOperationQueue *)presentedItemOperationQueue;
-(void)accommodatePresentedItemDeletionWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)presentedItemDidMoveToURL:(id)arg1 ;
-(void)presentedItemDidChangeUbiquityAttributes:(id)arg1 ;
-(NSSet *)observedPresentedItemUbiquityAttributes;
-(id)initWithItem:(id)arg1 ;
-(void)finishWithResult:(id)arg1 error:(id)arg2 ;
-(void)actionMain;
-(void)_tryFetchingSharingURL;
-(id)_t_filePresenterStarted;
-(void)set_t_filePresenterStarted:(id)arg1 ;
-(void)_setupFilePresenterAndWaitForUpload;
-(id)fetchCompletionBlock;
-(void)setFetchCompletionBlock:(id)arg1 ;
@end

