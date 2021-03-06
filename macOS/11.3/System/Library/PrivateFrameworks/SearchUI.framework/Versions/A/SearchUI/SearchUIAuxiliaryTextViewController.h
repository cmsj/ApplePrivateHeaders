/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:16 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/SearchUI.framework/Versions/A/SearchUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SearchUI/SearchUIAccessoryViewController.h>

@class TLKAuxilliaryTextView;

@interface SearchUIAuxiliaryTextViewController : SearchUIAccessoryViewController {

	char _shouldCenter;
	TLKAuxilliaryTextView* _auxilliaryTextView;

}

@property (nonatomic,retain) TLKAuxilliaryTextView * auxilliaryTextView;              //@synthesize auxilliaryTextView=_auxilliaryTextView - In the implementation block
@property (assign,nonatomic) char shouldCenter;                                       //@synthesize shouldCenter=_shouldCenter - In the implementation block
+(char)supportsRowModel:(id)arg1 ;
-(unsigned long long)type;
-(id)setupView;
-(void)updateWithRowModel:(id)arg1 ;
-(char)shouldVerticallyCenter;
-(void)setAuxilliaryTextView:(TLKAuxilliaryTextView *)arg1 ;
-(TLKAuxilliaryTextView *)auxilliaryTextView;
-(char)shouldCenter;
-(void)setShouldCenter:(char)arg1 ;
@end

