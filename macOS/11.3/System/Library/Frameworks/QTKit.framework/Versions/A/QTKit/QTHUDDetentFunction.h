/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:37 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/QTKit.framework/Versions/A/QTKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface QTHUDDetentFunction : NSObject {

	double* _sortedDetents;
	unsigned long long _detentCount;
	double _detentMagnitude;

}
-(void)dealloc;
-(id)init;
-(id)initWithDetents:(id)arg1 detentMagnitude:(double)arg2 ;
-(double)detentMagnitude;
-(double)outputValueAtInputValue:(double)arg1 isInDetent:(char*)arg2 indexOfDetent:(unsigned long long*)arg3 ;
-(id)detents;
-(double)inputValueAtOutputValue:(double)arg1 ;
-(double)outputValueAtInputValue:(double)arg1 ;
@end
