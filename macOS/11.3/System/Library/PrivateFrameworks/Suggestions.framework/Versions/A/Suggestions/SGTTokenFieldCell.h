/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:42 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/Suggestions.framework/Versions/A/Suggestions
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Suggestions/Suggestions-Structs.h>
#import <AppKit/NSTokenFieldCell.h>

@class SGTSearchFieldCell;

@interface SGTTokenFieldCell : NSTokenFieldCell {

	SGTSearchFieldCell* _searchFieldCell;

}

@property (__weak) SGTSearchFieldCell * searchFieldCell;              //@synthesize searchFieldCell=_searchFieldCell - In the implementation block
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)controlView;
-(void)mouseMoved:(id)arg1 ;
-(CGRect)drawingRectForBounds:(CGRect)arg1 ;
-(id)_searchField;
-(char)_isEditingTextView:(id)arg1 ;
-(id)fieldEditorForView:(id)arg1 ;
-(id)_defaultPlaceholderString;
-(char)hasMenuForTokenAttachment:(id)arg1 ;
-(id)menuForTokenAttachment:(id)arg1 ;
-(char)tokenAttachment:(id)arg1 doubleClickedInRect:(CGRect)arg2 ofView:(id)arg3 atCharacterIndex:(unsigned long long)arg4 ;
-(id)setUpTokenAttachmentCell:(id)arg1 forRepresentedObject:(id)arg2 ;
-(id)_stringForRepresentedObjects:(id)arg1 ;
-(char)tokenTextView:(id)arg1 writeSelectionToPasteboard:(id)arg2 type:(id)arg3 ;
-(void)setSearchFieldCell:(SGTSearchFieldCell *)arg1 ;
-(SGTSearchFieldCell *)searchFieldCell;
-(id)_sgt_representedObjectsForAttributedString:(id)arg1 range:(NSRange)arg2 ;
@end

