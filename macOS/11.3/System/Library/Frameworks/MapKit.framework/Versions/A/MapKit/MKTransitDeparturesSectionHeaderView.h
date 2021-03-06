/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:16 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/MapKit.framework/Versions/A/MapKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MapKit/MKMouseOverActionView.h>
#import <libobjc.A.dylib/MKMultiLineLabelContainer.h>

@class _MKUILabel, NSStackView, NSTimer, NSLayoutConstraint, MKButtonWithTargetArgument, NSString;

@interface MKTransitDeparturesSectionHeaderView : MKMouseOverActionView <MKMultiLineLabelContainer> {

	unsigned long long _type;
	char _extraSpacing;
	_MKUILabel* _label;
	NSStackView* _updatingView;
	_MKUILabel* _updatingLabel;
	NSTimer* _updatingLabelTimestampRefreshTimer;
	NSTimer* _updatingViewRefreshTimer;
	NSLayoutConstraint* _topConstraint;
	NSLayoutConstraint* _bottomConstraint;
	MKButtonWithTargetArgument* _button;

}

@property (nonatomic,copy) NSString * text; 
@property (nonatomic,readonly) MKButtonWithTargetArgument * button;              //@synthesize button=_button - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)_font:(unsigned long long)arg1 ;
+(id)_buttonFont:(unsigned long long)arg1 ;
-(NSString *)text;
-(MKButtonWithTargetArgument *)button;
-(void)setText:(NSString *)arg1 ;
-(id)initWithType:(unsigned long long)arg1 extraSpacing:(char)arg2 ;
-(id)multilineTextFieldsWithinContainer;
-(id)initWithType:(unsigned long long)arg1 extraSpacing:(char)arg2 reuseIdentifier:(id)arg3 ;
@end

