/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:18 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/CoreHAP.framework/Versions/A/CoreHAP
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreHAP/HAPFieldWrapper.h>

@class NSNumber;

@interface HAPUint8Wrapper : HAPFieldWrapper {

	NSNumber* _field;

}

@property (nonatomic,retain) NSNumber * field;              //@synthesize field=_field - In the implementation block
+(id)wrappertlv:(unsigned long long)arg1 name:(id)arg2 ;
-(NSNumber *)field;
-(void)setField:(NSNumber *)arg1 ;
@end
