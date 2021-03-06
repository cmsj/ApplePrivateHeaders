/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:11 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/InputMethodKit.framework/Versions/A/InputMethodKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <InputMethodKit/InputMethodKit-Structs.h>
#import <InputMethodKit/IMKUICandidateListView.h>

@class NSArray;

@interface IMKUISingleCandidateListView : IMKUICandidateListView {

	NSArray* _selectionKeys;

}

@property (nonatomic,retain) NSArray * selectionKeys;              //@synthesize selectionKeys=_selectionKeys - In the implementation block
-(id)viewForLineWithIndex:(long long)arg1 frame:(CGRect)arg2 ;
-(void)didUpdateViewBounds;
-(id)groupTitleForLineWithIndex:(long long)arg1 ;
-(void)setSelectionKeys:(NSArray *)arg1 ;
-(NSArray *)selectionKeys;
@end

