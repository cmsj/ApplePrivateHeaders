/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:48 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/ProactiveEventTracker.framework/Versions/A/ProactiveEventTracker
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ProactiveEventTracker/ProactiveEventTracker-Structs.h>
#import <ProactiveEventTracker/PETEventProperty.h>

@interface PETEventNumericalProperty : PETEventProperty {

	NSRange _validRange;
	char _clampValues;

}
-(id)description;
-(unsigned long long)cardinality;
-(char)isValidValue:(id)arg1 ;
-(id)_loggingKeyStringRepresentationForValue:(id)arg1 ;
-(id)longestValueString;
-(NSRange)validRange;
-(id)initWithName:(id)arg1 range:(NSRange)arg2 clampValues:(char)arg3 ;
-(unsigned long long)_unsignedIntegerValueForNumericValue:(id)arg1 ;
@end
