/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:04 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/AddressBook.framework/Versions/A/AddressBook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AddressBook/AddressBook-Structs.h>
#import <AppKit/NSButton.h>

@class NSString;

@interface ABOnBlueButton : NSButton {

	id _privateTarget;
	SEL _privateAction;
	char _roundPlatterStyle;
	NSString* _tintedImageCacheKey;

}

@property (__weak) id privateTarget;                                                         //@synthesize privateTarget=_privateTarget - In the implementation block
@property (assign) SEL privateAction;                                                        //@synthesize privateAction=_privateAction - In the implementation block
@property (nonatomic,retain) NSString * tintedImageCacheKey;                                 //@synthesize tintedImageCacheKey=_tintedImageCacheKey - In the implementation block
@property (assign,getter=isRoundPlatterStyle,nonatomic) char roundPlatterStyle;              //@synthesize roundPlatterStyle=_roundPlatterStyle - In the implementation block
-(void)setTarget:(id)arg1 ;
-(void)setEnabled:(char)arg1 ;
-(void)setAction:(SEL)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(CGSize)intrinsicContentSize;
-(void)setRoundPlatterStyle:(char)arg1 ;
-(void)buttonWasClicked:(id)arg1 ;
-(void)setNamedImageWrapper:(id)arg1 ;
-(void)setPrivateTarget:(id)arg1 ;
-(void)setPrivateAction:(SEL)arg1 ;
-(char)isRoundPlatterStyle;
-(void)performPrivateAction;
-(id)privateTarget;
-(SEL)privateAction;
-(void)resetButtonStateAfterMouseUp;
-(void)setTintedImageCacheKey:(NSString *)arg1 ;
-(NSString *)tintedImageCacheKey;
@end
