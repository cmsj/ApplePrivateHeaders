/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:47 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/IASUtilities.framework/Versions/A/IASUtilities
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <IASUtilities/IASUtilities-Structs.h>
#import <AppKit/NSClipView.h>

@class IASFirstResponderDisablingTextView;

@interface IASStandaloneTextView : NSClipView {

	IASFirstResponderDisablingTextView* textView;

}

@property (retain) IASFirstResponderDisablingTextView * textView; 
-(void)dealloc;
-(id)initWithFrame:(CGRect)arg1 ;
-(CGSize)intrinsicContentSize;
-(void)awakeFromNib;
-(void)setTextView:(IASFirstResponderDisablingTextView *)arg1 ;
-(IASFirstResponderDisablingTextView *)textView;
@end
