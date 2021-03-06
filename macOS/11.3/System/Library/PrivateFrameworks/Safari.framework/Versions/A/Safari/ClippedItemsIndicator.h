/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:08 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/Safari.framework/Versions/A/Safari
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Safari/ChevronButton.h>
#import <libobjc.A.dylib/NSMenuDelegate.h>

@protocol ClippedItemsIndicatorDelegate;
@class NSString;

@interface ClippedItemsIndicator : ChevronButton <NSMenuDelegate> {

	id<ClippedItemsIndicatorDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<ClippedItemsIndicatorDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(Class)cellClass;
-(id<ClippedItemsIndicatorDelegate>)delegate;
-(void)setDelegate:(id<ClippedItemsIndicatorDelegate>)arg1 ;
-(void)mouseDown:(id)arg1 ;
-(void)performClick:(id)arg1 ;
-(void)moveRight:(id)arg1 ;
-(void)moveLeft:(id)arg1 ;
-(char)needsPanelToBecomeKey;
-(void)moveDown:(id)arg1 ;
-(void)moveUp:(id)arg1 ;
-(void)_popUpMenu;
@end

