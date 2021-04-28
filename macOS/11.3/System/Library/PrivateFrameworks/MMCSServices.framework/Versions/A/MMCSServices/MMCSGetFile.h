/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:18 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/MMCSServices.framework/Versions/A/MMCSServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MMCSServices/MMCSSimpleFile.h>

@interface MMCSGetFile : MMCSSimpleFile {

	/*^block*/id _block;
	/*^block*/id _updateBlock;

}

@property (copy) id completionBlock;                  //@synthesize block=_block - In the implementation block
@property (copy) id progressUpdateBlock;              //@synthesize updateBlock=_updateBlock - In the implementation block
-(void)dealloc;
-(id)completionBlock;
-(void)setCompletionBlock:(id)arg1 ;
-(void)setProgress:(double)arg1 ;
-(void)setProgressUpdateBlock:(id)arg1 ;
-(id)progressUpdateBlock;
@end
