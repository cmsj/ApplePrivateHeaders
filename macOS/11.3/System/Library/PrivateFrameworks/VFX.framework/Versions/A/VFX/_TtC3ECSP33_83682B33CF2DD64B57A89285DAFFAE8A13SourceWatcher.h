/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:54 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/VFX.framework/Versions/A/VFX
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSFilePresenter.h>

@class NSURL, NSOperationQueue;

@interface _TtC3ECSP33_83682B33CF2DD64B57A89285DAFFAE8A13SourceWatcher : NSObject <NSFilePresenter> {

	 handler;
	 path;
	??? presentedItemURL;
	 presentedItemOperationQueue;

}

@property (copy,nonatomic) NSURL * presentedItemURL; 
@property (readonly,nonatomic) NSOperationQueue * presentedItemOperationQueue; 
-(id)init;
-(NSURL *)presentedItemURL;
-(NSOperationQueue *)presentedItemOperationQueue;
-(void)presentedSubitemDidAppearAtURL:(id)arg1 ;
-(void)presentedSubitemDidChangeAtURL:(id)arg1 ;
-(void)setPresentedItemURL:(NSURL *)arg1 ;
@end

