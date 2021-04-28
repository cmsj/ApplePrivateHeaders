/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:11 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/InputMethodKit.framework/Versions/A/InputMethodKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <InputMethodKit/InputMethodKit-Structs.h>
#import <AppKit/NSView.h>

@class NSArray, NSMutableDictionary, IMKUICandidateLayoutTraits;

@interface IMKUICandidateGroupView : NSView {

	NSArray* _items;
	NSMutableDictionary* _itemToViewMapping;
	IMKUICandidateLayoutTraits* _layoutTraits;

}

@property (nonatomic,retain) NSMutableDictionary * itemToViewMapping;                //@synthesize itemToViewMapping=_itemToViewMapping - In the implementation block
@property (nonatomic,retain) IMKUICandidateLayoutTraits * layoutTraits;              //@synthesize layoutTraits=_layoutTraits - In the implementation block
@property (nonatomic,retain) NSArray * items;                                        //@synthesize items=_items - In the implementation block
-(NSMutableDictionary *)itemToViewMapping;
-(void)setItemToViewMapping:(NSMutableDictionary *)arg1 ;
-(char)isFlipped;
-(void)drawRect:(CGRect)arg1 ;
-(NSArray *)items;
-(void)setItems:(NSArray *)arg1 ;
-(IMKUICandidateLayoutTraits *)layoutTraits;
-(void)setLayoutTraits:(IMKUICandidateLayoutTraits *)arg1 ;
@end
