/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:12 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/CalendarUIKit.framework/Versions/A/CalendarUIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface CUIKTimeToLeaveDescriptionGenerator : NSObject
+(id)timeToLeaveStringWithEta:(double)arg1 transportType:(int)arg2 runningLate:(char)arg3 ;
+(id)_etaString:(double)arg1 ;
+(id)_travelTimeRunningLateTransitStringWithEta:(id)arg1 location:(id)arg2 ;
+(id)_travelTimeOnTimeTransitStringWithEta:(id)arg1 ;
+(id)_travelTimeWalkingStringWithEta:(id)arg1 location:(id)arg2 ;
+(id)_travelTimeOnTimeWalkingStringWithEta:(id)arg1 ;
+(id)_travelTimeDrivingSubstringWithEta:(id)arg1 location:(id)arg2 includeTransportType:(char)arg3 ;
+(id)_travelTimeOnTimeDrivingStringWithEta:(id)arg1 ;
+(id)_travelAdvisoryDescriptionOfType:(unsigned long long)arg1 hypothesis:(id)arg2 eta:(id)arg3 location:(id)arg4 ;
+(id)travelTimeRunningLateStringWithHypothesis:(id)arg1 eta:(id)arg2 location:(id)arg3 ;
+(id)travelTimeApproachingDepartureDateStringWithHypothesis:(id)arg1 eta:(id)arg2 location:(id)arg3 ;
+(id)travelTimeLeaveNowStringWithHypothesis:(id)arg1 eta:(id)arg2 location:(id)arg3 ;
+(id)timeToLeaveStringWithHypothesis:(id)arg1 eta:(id)arg2 location:(id)arg3 ;
+(id)departureDateString:(id)arg1 ;
+(id)_travelTimeWalkingStringWithHypothesis:(id)arg1 eta:(id)arg2 location:(id)arg3 ;
+(id)travelTimeApproachingDepartureDateTransitStringWithDepartureDate:(id)arg1 location:(id)arg2 ;
+(id)_travelTimeDrivingStringWithHypothesis:(id)arg1 eta:(id)arg2 location:(id)arg3 ;
+(id)_travelTimeLeaveNowWalkingStringWithHypothesis:(id)arg1 eta:(id)arg2 location:(id)arg3 ;
+(id)_travelTimeLeaveNowTransitStringWithLocation:(id)arg1 ;
+(id)_travelTimeLeaveNowTransitStringWithEta:(id)arg1 location:(id)arg2 ;
+(id)_travelTimeLeaveNowDrivingStringWithHypothesis:(id)arg1 eta:(id)arg2 location:(id)arg3 ;
+(id)_travelTimeLeaveNowWalkingStringWithEta:(id)arg1 location:(id)arg2 ;
+(id)_travelTimeLeaveNowDrivingStringIncludingTrafficWithHypothesis:(id)arg1 eta:(id)arg2 location:(id)arg3 ;
+(id)_travelTimeLeaveNowDrivingStringExcludingTrafficWithHypothesis:(id)arg1 eta:(id)arg2 location:(id)arg3 ;
+(id)_travelTimeLeaveNowDrivingSubstringWithEta:(id)arg1 location:(id)arg2 routeName:(id)arg3 includeTransportType:(char)arg4 ;
+(id)_travelTimeLeaveNowDrivingSubstringWithEta:(id)arg1 location:(id)arg2 includeTransportType:(char)arg3 ;
+(id)_travelTimeStringWithHypothesis:(id)arg1 eta:(id)arg2 location:(id)arg3 ;
+(id)_travelTimeDrivingStringIncludingTrafficWithHypothesis:(id)arg1 eta:(id)arg2 location:(id)arg3 ;
+(id)_travelTimeDrivingStringExcludingTrafficWithHypothesis:(id)arg1 eta:(id)arg2 location:(id)arg3 ;
+(id)_travelTimeDrivingSubstringWithEta:(id)arg1 location:(id)arg2 routeName:(id)arg3 includeTransportType:(char)arg4 ;
+(id)explanatoryText;
+(id)travelAdvisoryDescriptionOfType:(unsigned long long)arg1 hypothesis:(id)arg2 location:(id)arg3 ;
+(id)timeToLeaveStringWithHypothesis:(id)arg1 location:(id)arg2 ;
+(id)timeToLeaveAttributedStringWithAttributes:(id)arg1 hypothesis:(id)arg2 location:(id)arg3 ;
+(id)_attributedEtaString:(double)arg1 fontName:(id)arg2 fontSize:(double)arg3 ;
@end

