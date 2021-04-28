/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:11 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/InputMethodKit.framework/Versions/A/InputMethodKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <InputMethodKit/InputMethodKit-Structs.h>
#import <InputMethodKit/IMKUIView.h>

@class NSArray, IMKCandidateUIProperties;

@interface IMKCandidateGroupView : IMKUIView {

	NSArray* _groupsWithPositions;
	IMKCandidateUIProperties* _UIProperties;

}

@property (nonatomic,retain) NSArray * groupsWithPositions;                        //@synthesize groupsWithPositions=_groupsWithPositions - In the implementation block
@property (nonatomic,retain) IMKCandidateUIProperties * UIProperties;              //@synthesize UIProperties=_UIProperties - In the implementation block
-(IMKCandidateUIProperties *)UIProperties;
-(void)setUIProperties:(IMKCandidateUIProperties *)arg1 ;
-(void)setGroupsWithPositions:(NSArray *)arg1 ;
-(NSArray *)groupsWithPositions;
-(void)dealloc;
-(char)isFlipped;
-(void)drawRect:(CGRect)arg1 ;
@end
