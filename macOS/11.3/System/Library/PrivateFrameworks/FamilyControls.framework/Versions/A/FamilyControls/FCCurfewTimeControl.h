/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:38 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/FamilyControls.framework/Versions/A/FamilyControls
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <FamilyControls/FCTimeControl.h>

@class FCTime;

@interface FCCurfewTimeControl : FCTimeControl {

	FCTime* _start;
	FCTime* _end;

}

@property (retain) FCTime * start;              //@synthesize start=_start - In the implementation block
@property (retain) FCTime * end;                //@synthesize end=_end - In the implementation block
+(id)weekdayDefault;
+(id)weekendDefault;
+(id)curfewWithRange:(long long)arg1 start:(id)arg2 end:(id)arg3 enabled:(char)arg4 ;
+(id)curfewFromDictionary:(id)arg1 ;
-(char)dateIsInEffect:(id)arg1 ;
-(id)initWithRange:(long long)arg1 start:(id)arg2 end:(id)arg3 ;
-(void)dealloc;
-(id)description;
-(FCTime *)start;
-(id)range;
-(FCTime *)end;
-(void)setEnd:(FCTime *)arg1 ;
-(void)setStart:(FCTime *)arg1 ;
-(id)plistRepresentation;
@end

