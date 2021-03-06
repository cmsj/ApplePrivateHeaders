/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:46 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/Quartz.framework/Versions/A/Frameworks/QuickLookUI.framework/Versions/A/QuickLookUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <QuickLookUI/QuickLookUI-Structs.h>
#import <QuickLookUI/QLOverlayBaseButtonLayer.h>

@class NSMutableArray, NSArray;

@interface QLOverlayMultiButtonLayer : QLOverlayBaseButtonLayer {

	NSMutableArray* _imageLayers;
	unsigned long long _clickedIndex;

}

@property (readonly) unsigned long long clickedIndex;              //@synthesize clickedIndex=_clickedIndex - In the implementation block
@property (retain) NSArray * images; 
@property (assign) char leftEnabled; 
@property (assign) char rightEnabled; 
-(char)_enableClickAtPoint:(CGPoint)arg1 ;
-(void)_beginMouseDownAtPoint:(CGPoint)arg1 ;
-(void)_endMouseDownAtPoint:(CGPoint)arg1 ;
-(void)_setEnabled:(char)arg1 atIndex:(unsigned long long)arg2 ;
-(char)_enabledAtIndex:(unsigned long long)arg1 ;
-(void)setLeftEnabled:(char)arg1 ;
-(char)leftEnabled;
-(void)setRightEnabled:(char)arg1 ;
-(char)rightEnabled;
-(void)dealloc;
-(id)init;
-(NSArray *)images;
-(void)setImages:(NSArray *)arg1 ;
-(unsigned long long)clickedIndex;
@end

