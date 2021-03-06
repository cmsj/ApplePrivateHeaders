/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:19 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/FileProvider.framework/Versions/A/FileProvider
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <FileProvider/FPActionOperation.h>

@class NSArray;

@interface FPTransformOperation : FPActionOperation {

	NSArray* _items;
	/*^block*/id _transformCompletionBlock;

}

@property (nonatomic,readonly) NSArray * items;                      //@synthesize items=_items - In the implementation block
@property (nonatomic,copy) id transformCompletionBlock;              //@synthesize transformCompletionBlock=_transformCompletionBlock - In the implementation block
-(NSArray *)items;
-(void)setTransformCompletionBlock:(id)arg1 ;
-(void)finishWithResult:(id)arg1 error:(id)arg2 ;
-(id)fp_prettyDescription;
-(void)actionMain;
-(void)presendNotifications;
-(id)initWithItemsOfDifferentProviders:(id)arg1 action:(id)arg2 ;
-(unsigned long long)transformItem:(id)arg1 atIndex:(unsigned long long)arg2 ;
-(id)finalItemsForStitcherForResult:(id)arg1 ;
-(void)postStitchingFinishWithResult:(id)arg1 error:(id)arg2 ;
-(id)transformCompletionBlock;
@end

