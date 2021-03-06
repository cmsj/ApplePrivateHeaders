/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:09 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/TemplateKit.framework/Versions/A/TemplateKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TemplateKit/TemplateKit-Structs.h>
#import <TemplateKit/TLKView.h>
#import <libobjc.A.dylib/NUIContainerViewDelegate.h>

@protocol TLKSelectableGridViewDelegate;
@class NSArray, NSMutableArray, NUIContainerGridView, NSString;

@interface TLKSelectableGridView : TLKView <NUIContainerViewDelegate> {

	long long _selectedIndex;
	NSArray* _tuples;
	id<TLKSelectableGridViewDelegate> _delegate;
	NSMutableArray* _buttons;

}

@property (nonatomic,retain) NUIContainerGridView * contentView; 
@property (nonatomic,retain) NSMutableArray * buttons;                        //@synthesize buttons=_buttons - In the implementation block
@property (nonatomic,retain) NSArray * tuples;                                //@synthesize tuples=_tuples - In the implementation block
@property (assign,nonatomic) long long selectedIndex;                         //@synthesize selectedIndex=_selectedIndex - In the implementation block
@property (__weak) id<TLKSelectableGridViewDelegate> delegate;                //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(unsigned long long)maxColumns;
+(unsigned long long)idealNumberOfColumnsForTitles:(id)arg1 fittingSize:(CGSize)arg2 containerView:(id)arg3 ;
-(id<TLKSelectableGridViewDelegate>)delegate;
-(void)setDelegate:(id<TLKSelectableGridViewDelegate>)arg1 ;
-(void)setSelectedIndex:(long long)arg1 ;
-(long long)selectedIndex;
-(NSMutableArray *)buttons;
-(void)setButtons:(NSMutableArray *)arg1 ;
-(id)_createButton;
-(CGSize)containerView:(id)arg1 systemLayoutSizeFittingSize:(CGSize)arg2 forArrangedSubview:(id)arg3 ;
-(void)containerView:(id)arg1 willMeasureArrangedSubviewsFittingSize:(CGSize)arg2 forReason:(long long)arg3 ;
-(id)setupContentView;
-(void)observedPropertiesChanged;
-(NSArray *)tuples;
-(void)selectableGridButtonPressed:(id)arg1 ;
-(void)setTuples:(NSArray *)arg1 ;
-(id)arrangedEntrySubviews;
@end

