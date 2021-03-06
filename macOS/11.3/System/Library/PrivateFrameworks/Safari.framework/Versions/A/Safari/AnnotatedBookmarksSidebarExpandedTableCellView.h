/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:07 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/Safari.framework/Versions/A/Safari
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Safari/Safari-Structs.h>
#import <Safari/AnnotatedBookmarksSidebarTableCellView.h>
#import <libobjc.A.dylib/NSControlTextEditingDelegate.h>

@protocol AnnotatedBookmarksSidebarExpandedTableCellViewDelegate;
@class NSLayoutConstraint, NSTextField, NSString;

@interface AnnotatedBookmarksSidebarExpandedTableCellView : AnnotatedBookmarksSidebarTableCellView <NSControlTextEditingDelegate> {

	NSLayoutConstraint* _editingTitleHeightConstraint;
	NSLayoutConstraint* _editingDescriptionHeightConstraint;
	char _showingThumbnail;
	NSTextField* _descriptionTextField;
	NSTextField* _addressTextField;
	id<AnnotatedBookmarksSidebarExpandedTableCellViewDelegate> _expandedCellViewDelegate;
	NSLayoutConstraint* _leadingPaddingConstraint;
	NSLayoutConstraint* _trailingPaddingConstraint;
	NSLayoutConstraint* _spaceBetweenImageAndTextConstraint;
	NSLayoutConstraint* _spaceBetweenDescriptionTextAndBottomConstraint;
	NSLayoutConstraint* _spaceBetweenImageAndBottomConstraint;

}

@property (assign,nonatomic,__weak) NSLayoutConstraint * leadingPaddingConstraint;                                                    //@synthesize leadingPaddingConstraint=_leadingPaddingConstraint - In the implementation block
@property (assign,nonatomic,__weak) NSLayoutConstraint * trailingPaddingConstraint;                                                   //@synthesize trailingPaddingConstraint=_trailingPaddingConstraint - In the implementation block
@property (assign,nonatomic,__weak) NSLayoutConstraint * spaceBetweenImageAndTextConstraint;                                          //@synthesize spaceBetweenImageAndTextConstraint=_spaceBetweenImageAndTextConstraint - In the implementation block
@property (assign,nonatomic,__weak) NSLayoutConstraint * spaceBetweenDescriptionTextAndBottomConstraint;                              //@synthesize spaceBetweenDescriptionTextAndBottomConstraint=_spaceBetweenDescriptionTextAndBottomConstraint - In the implementation block
@property (assign,nonatomic,__weak) NSLayoutConstraint * spaceBetweenImageAndBottomConstraint;                                        //@synthesize spaceBetweenImageAndBottomConstraint=_spaceBetweenImageAndBottomConstraint - In the implementation block
@property (assign,nonatomic,__weak) NSTextField * descriptionTextField;                                                               //@synthesize descriptionTextField=_descriptionTextField - In the implementation block
@property (assign,nonatomic,__weak) NSTextField * addressTextField;                                                                   //@synthesize addressTextField=_addressTextField - In the implementation block
@property (assign,nonatomic,__weak) id<AnnotatedBookmarksSidebarExpandedTableCellViewDelegate> expandedCellViewDelegate;              //@synthesize expandedCellViewDelegate=_expandedCellViewDelegate - In the implementation block
@property (nonatomic,readonly) double fittingHeight; 
@property (assign,nonatomic) char showingThumbnail;                                                                                   //@synthesize showingThumbnail=_showingThumbnail - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)awakeFromNib;
-(void)controlTextDidEndEditing:(id)arg1 ;
-(NSTextField *)descriptionTextField;
-(void)setDescriptionTextField:(NSTextField *)arg1 ;
-(void)didRecognizeLongPress:(id)arg1 ;
-(void)editTitle;
-(void)editPreviewText;
-(void)updateTextFieldMaxLayoutWidths;
-(double)fittingHeight;
-(NSTextField *)addressTextField;
-(void)setAddressTextField:(NSTextField *)arg1 ;
-(id<AnnotatedBookmarksSidebarExpandedTableCellViewDelegate>)expandedCellViewDelegate;
-(void)setExpandedCellViewDelegate:(id<AnnotatedBookmarksSidebarExpandedTableCellViewDelegate>)arg1 ;
-(char)showingThumbnail;
-(void)setShowingThumbnail:(char)arg1 ;
-(NSLayoutConstraint *)leadingPaddingConstraint;
-(void)setLeadingPaddingConstraint:(NSLayoutConstraint *)arg1 ;
-(NSLayoutConstraint *)trailingPaddingConstraint;
-(void)setTrailingPaddingConstraint:(NSLayoutConstraint *)arg1 ;
-(NSLayoutConstraint *)spaceBetweenImageAndTextConstraint;
-(void)setSpaceBetweenImageAndTextConstraint:(NSLayoutConstraint *)arg1 ;
-(NSLayoutConstraint *)spaceBetweenDescriptionTextAndBottomConstraint;
-(void)setSpaceBetweenDescriptionTextAndBottomConstraint:(NSLayoutConstraint *)arg1 ;
-(NSLayoutConstraint *)spaceBetweenImageAndBottomConstraint;
-(void)setSpaceBetweenImageAndBottomConstraint:(NSLayoutConstraint *)arg1 ;
@end

