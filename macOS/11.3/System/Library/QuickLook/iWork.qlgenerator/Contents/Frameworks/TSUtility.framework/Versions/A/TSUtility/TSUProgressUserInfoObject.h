/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:53:01 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/QuickLook/iWork.qlgenerator/Contents/Frameworks/TSUtility.framework/Versions/A/TSUtility
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class TSUProgress;

@interface TSUProgressUserInfoObject : NSObject {

	TSUProgress* _progress;
	id _progressObserver;

}

@property (assign,nonatomic,__weak) TSUProgress * progress;              //@synthesize progress=_progress - In the implementation block
@property (nonatomic,retain) id progressObserver;                        //@synthesize progressObserver=_progressObserver - In the implementation block
-(TSUProgress *)progress;
-(void)setProgress:(TSUProgress *)arg1 ;
-(id)progressObserver;
-(void)setProgressObserver:(id)arg1 ;
@end

