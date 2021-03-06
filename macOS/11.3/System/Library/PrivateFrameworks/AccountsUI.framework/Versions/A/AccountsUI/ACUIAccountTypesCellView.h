/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:49 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/AccountsUI.framework/Versions/A/AccountsUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AccountsUI/AccountsUI-Structs.h>
#import <AppKit/NSTableCellView.h>

@class ACUIAccountTypesViewController;

@interface ACUIAccountTypesCellView : NSTableCellView {

	char _isLastRow;
	char _isHovered;
	ACUIAccountTypesViewController* _accountTypesVC;

}

@property (assign) char isLastRow;                                               //@synthesize isLastRow=_isLastRow - In the implementation block
@property (assign) char isHovered;                                               //@synthesize isHovered=_isHovered - In the implementation block
@property (__weak) ACUIAccountTypesViewController * accountTypesVC;              //@synthesize accountTypesVC=_accountTypesVC - In the implementation block
-(void)mouseEntered:(id)arg1 ;
-(void)mouseExited:(id)arg1 ;
-(void)drawRect:(CGRect)arg1 ;
-(void)awakeFromNib;
-(char)isHovered;
-(void)setIsHovered:(char)arg1 ;
-(void)setIsLastRow:(char)arg1 ;
-(void)setAccountTypesVC:(ACUIAccountTypesViewController *)arg1 ;
-(char)isLastRow;
-(ACUIAccountTypesViewController *)accountTypesVC;
-(void)click:(id)arg1 ;
@end

