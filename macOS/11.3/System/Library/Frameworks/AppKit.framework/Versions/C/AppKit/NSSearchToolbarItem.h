/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:50:57 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/AppKit.framework/Versions/C/AppKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AppKit/AppKit-Structs.h>
#import <AppKit/NSToolbarItem.h>
#import <libobjc.A.dylib/NSSearchFieldDelegate.h>
#import <libobjc.A.dylib/_NSTextFieldHostingToolbarItem.h>

@protocol NSSearchToolbarItemDelegate;
@class NSObject, NSString, NSSearchToolbarItemView, NSSearchField, NSView;

@interface NSSearchToolbarItem : NSToolbarItem <NSSearchFieldDelegate, _NSTextFieldHostingToolbarItem> {

	char _isEditing;
	char _forceVisbility;
	NSObject*<NSSearchToolbarItemDelegate> _delegate;
	char _resignsFirstResponderWithCancel;
	char _allowsButtonRepresentation;
	SEL _cancelButtonAction;
	id _cancelButtonTarget;
	double _minimumWidthForSearchFieldRepresentation;
	double _preferredWidthForSearchField;

}

@property (copy) NSString * stringValue; 
@property (copy) NSString * placeholderString; 
@property (__weak) NSObject*<NSSearchToolbarItemDelegate> delegate; 
@property (readonly) NSSearchToolbarItemView * _view; 
@property (assign) id cancelButtonTarget;                                          //@synthesize cancelButtonTarget=_cancelButtonTarget - In the implementation block
@property (assign) SEL cancelButtonAction;                                         //@synthesize cancelButtonAction=_cancelButtonAction - In the implementation block
@property (assign) char allowsButtonRepresentation;                                //@synthesize allowsButtonRepresentation=_allowsButtonRepresentation - In the implementation block
@property (assign) double minimumWidthForSearchFieldRepresentation;                //@synthesize minimumWidthForSearchFieldRepresentation=_minimumWidthForSearchFieldRepresentation - In the implementation block
@property (assign) double preferredWidthForSearchFieldRepresentation; 
@property (retain) NSSearchField * searchField; 
@property (retain) NSView * view; 
@property (assign) char resignsFirstResponderWithCancel;                           //@synthesize resignsFirstResponderWithCancel=_resignsFirstResponderWithCancel - In the implementation block
@property (assign) double preferredWidthForSearchField;                            //@synthesize preferredWidthForSearchField=_preferredWidthForSearchField - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(void)beginEditing;
-(void)endEditing;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSObject*<NSSearchToolbarItemDelegate>)delegate;
-(NSString *)stringValue;
-(void)setDelegate:(NSObject*<NSSearchToolbarItemDelegate>)arg1 ;
-(void)setTarget:(id)arg1 ;
-(id)target;
-(SEL)action;
-(id)classFallbacksForKeyedArchiver;
-(void)setTag:(long long)arg1 ;
-(void)setAction:(SEL)arg1 ;
-(NSView *)view;
-(void)cancel;
-(void)setStringValue:(NSString *)arg1 ;
-(void)setView:(NSView *)arg1 ;
-(long long)tag;
-(id)initWithItemIdentifier:(id)arg1 ;
-(NSSearchToolbarItemView *)_view;
-(void)configureForDisplayMode:(unsigned long long)arg1 andSizeMode:(unsigned long long)arg2 ;
-(long long)visibilityPriority;
-(CGSize)compressedMinSize;
-(unsigned long long)itemPosition;
-(char)isEditing;
-(NSSearchField *)searchField;
-(id)_searchField;
-(void)setPlaceholderString:(NSString *)arg1 ;
-(NSString *)placeholderString;
-(id)_computeDefaultMenuFormRepresentation;
-(double)minimumWidthForSearchFieldRepresentation;
-(double)preferredWidthForSearchField;
-(char)allowsButtonRepresentation;
-(void)setSearchField:(NSSearchField *)arg1 ;
-(void)beginSearchInteraction;
-(void)setPreferredWidthForSearchField:(double)arg1 ;
-(void)setResignsFirstResponderWithCancel:(char)arg1 ;
-(id)cancelButtonTarget;
-(SEL)cancelButtonAction;
-(void)endSearchInteraction;
-(void)setCancelButtonTarget:(id)arg1 ;
-(void)_searchToolbarItemSearchCancelled:(id)arg1 ;
-(void)setCancelButtonAction:(SEL)arg1 ;
-(char)resignsFirstResponderWithCancel;
-(void)_expandWindowForSearchToolbarItem:(id)arg1 ;
-(void)textFieldDidAttachFieldEditor;
-(void)textFieldDidDetachFieldEditor;
-(double)preferredWidthForSearchFieldRepresentation;
-(void)setPreferredWidthForSearchFieldRepresentation:(double)arg1 ;
-(id)_viewForCoder:(id)arg1 ;
-(void)_copyViewToCopiedItem:(id)arg1 ;
-(void)_setView:(id)arg1 fromCoder:(id)arg2 ;
-(void)beginSearchSession;
-(void)endSearchSession;
-(void)setAllowsButtonRepresentation:(char)arg1 ;
-(void)setMinimumWidthForSearchFieldRepresentation:(double)arg1 ;
@end
