/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:58 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/AnnotationKit.framework/Versions/A/AnnotationKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AnnotationKit/AnnotationKit-Structs.h>
#import <AppKit/NSViewController.h>

@class AKController;

@interface AKToolbarViewController : NSViewController {

	AKController* _controller;

}

@property (__weak) AKController * controller;               //@synthesize controller=_controller - In the implementation block
@property (readonly) char isPresentingPopover; 
+(CGSize)minimumSize;
+(char)isOptionKeyPressed;
+(id)titleForToolbarButtonItemOfType:(unsigned long long)arg1 ;
+(id)_imageNameForToolbarButtonItemOfType:(unsigned long long)arg1 ;
+(id)imageForToolbarButtonItemOfType:(unsigned long long)arg1 ;
+(id)alternateImageForToolbarButtonItemOfType:(unsigned long long)arg1 ;
+(unsigned long long)buttonTypeForToolbarButtonItemOfType:(unsigned long long)arg1 ;
-(AKController *)controller;
-(id)initWithController:(id)arg1 ;
-(void)setController:(AKController *)arg1 ;
-(void)teardown;
-(id)_toolbarButtonItemOfType:(unsigned long long)arg1 style:(unsigned long long)arg2 ;
-(char)isPresentingPopover;
-(void)revalidateItems;
-(void)setFillColorUIDisplayToColor:(id)arg1 ;
-(void)setStrokeColorUIDisplayToColor:(id)arg1 ;
@end

