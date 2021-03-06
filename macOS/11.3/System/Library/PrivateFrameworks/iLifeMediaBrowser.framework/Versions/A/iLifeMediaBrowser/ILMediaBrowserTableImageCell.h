/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:33 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/iLifeMediaBrowser.framework/Versions/A/iLifeMediaBrowser
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iLifeMediaBrowser/iLifeMediaBrowser-Structs.h>
#import <iLifeMediaBrowser/ILMediaBrowserTableThumbnailCell.h>

@interface ILMediaBrowserTableImageCell : ILMediaBrowserTableThumbnailCell {

	double mFrameInset;

}

@property (assign) double frameInset; 
-(CGSize)cellSize;
-(void)drawWithFrame:(CGRect)arg1 inView:(id)arg2 ;
-(CGRect)imageFrameForCellFrame:(CGRect)arg1 ;
-(void)setFrameInset:(double)arg1 ;
-(CGRect)textFrameForCellFrame:(CGRect)arg1 ;
-(double)frameInset;
@end

