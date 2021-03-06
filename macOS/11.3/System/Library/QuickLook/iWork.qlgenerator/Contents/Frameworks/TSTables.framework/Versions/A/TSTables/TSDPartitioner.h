/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:53:00 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/QuickLook/iWork.qlgenerator/Contents/Frameworks/TSTables.framework/Versions/A/TSTables
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol TSDPartitioner
@property (nonatomic,readonly) CGRect totalPartitionFrame; 
@optional
-(void)reset;

@required
-(id)nextHintForSize:(CGSize)arg1 parentLayout:(id)arg2 previousHint:(id)arg3 horizontally:(char)arg4 outFinished:(out char*)arg5;
-(id)layoutForHint:(id)arg1 parentLayout:(id)arg2;
-(id)nextLayoutForSize:(CGSize)arg1 parentLayout:(id)arg2 previousHint:(id)arg3 horizontally:(char)arg4 outFinished:(out char*)arg5;
-(id)hintForLayout:(id)arg1;
-(void)setLayoutPartititionsRightToLeft:(char)arg1 contentPartitionsRightToLeft:(char)arg2;
-(CGRect)totalPartitionFrame;
-(char)didHint:(id)arg1 syncWithNextHint:(id)arg2 horizontally:(char)arg3;

@end

