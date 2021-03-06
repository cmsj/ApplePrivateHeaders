/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:16 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/MapKit.framework/Versions/A/MapKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MapKit/MKPlaceSectionRowView.h>

@class NSSegmentedControl, NSButton, NSMutableArray, NSLayoutConstraint, _MKPlaceReservationInfo, NSString;

@interface MKPlaceReservationRowView : MKPlaceSectionRowView {

	NSSegmentedControl* _openTimesControl;
	NSButton* _buttonMakeReservation;
	NSButton* _buttonAttribution;
	NSMutableArray* _mutableConstraints;
	NSLayoutConstraint* _constraintButtonTopMargin;
	NSLayoutConstraint* _constraintButtonBottomMargin;
	_MKPlaceReservationInfo* _reservationInfo;

}

@property (nonatomic,readonly) _MKPlaceReservationInfo * reservationInfo;              //@synthesize reservationInfo=_reservationInfo - In the implementation block
@property (assign,nonatomic) unsigned long long selectedTimeIndex; 
@property (nonatomic,retain) NSString * selectedTimeString; 
-(void)_mapkit_tintColorDidChange;
-(_MKPlaceReservationInfo *)reservationInfo;
-(id)_newButtonForAttribution:(char)arg1 ;
-(id)_attributedStringFromButtonTitle:(id)arg1 useSmallFont:(char)arg2 ;
-(void)_actionMakeReservation;
-(void)_updateTintColor;
-(void)_setupImmutableConstraints;
-(void)_updateWithReservationInfo;
-(unsigned long long)selectedTimeIndex;
-(void)setSelectedTimeIndex:(unsigned long long)arg1 ;
-(id)_buttonFontLarge;
-(id)_buttonFontSmall;
-(void)_updateMutableConstraints;
-(double)_buttonBottomMargin;
-(double)_buttonTopMargin;
-(void)_updateButtonTitleAttributes;
-(id)initWithReservationInfo:(id)arg1 ;
-(NSString *)selectedTimeString;
-(void)setSelectedTimeString:(NSString *)arg1 ;
@end

