/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:50:58 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/AppKit.framework/Versions/C/AppKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AppKit/AppKit-Structs.h>
#import <AppKit/NSView.h>
#import <libobjc.A.dylib/NSCollectionViewElement.h>

@class NSButton, NSString;

@interface _NSTouchBarCustomizationPreviewDoneButton : NSView <NSCollectionViewElement> {

	NSButton* _doneButton;
	id _target;
	SEL _action;

}

@property (__weak) id target;                                       //@synthesize target=_target - In the implementation block
@property (assign) SEL action;                                      //@synthesize action=_action - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (copy) NSString * identifier; 
-(void)setTarget:(id)arg1 ;
-(id)target;
-(SEL)action;
-(void)prepareForReuse;
-(void)setAction:(SEL)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)done:(id)arg1 ;
@end

