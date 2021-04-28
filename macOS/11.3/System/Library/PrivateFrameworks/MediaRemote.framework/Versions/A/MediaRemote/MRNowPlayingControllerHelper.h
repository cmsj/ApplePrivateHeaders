/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:38 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/MediaRemote.framework/Versions/A/MediaRemote
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/MRNowPlayingControllerDelegate.h>

@class MRBlockGuard, NSString;

@interface MRNowPlayingControllerHelper : NSObject <MRNowPlayingControllerDelegate> {

	MRBlockGuard* _guard;
	/*^block*/id _completion;

}

@property (nonatomic,copy) id completion;                           //@synthesize completion=_completion - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)completion;
-(void)setCompletion:(id)arg1 ;
-(void)controller:(id)arg1 didLoadResponse:(id)arg2 ;
-(void)controller:(id)arg1 didFailWithError:(id)arg2 ;
-(void)_invokeCompletionWithResponse:(id)arg1 error:(id)arg2 ;
@end
