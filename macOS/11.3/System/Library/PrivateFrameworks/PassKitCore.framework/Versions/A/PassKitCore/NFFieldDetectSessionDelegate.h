/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:40 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/Versions/A/PassKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol NFFieldDetectSessionDelegate <NSObject>
@optional
-(void)fieldDetectSession:(id)arg1 didDetectField:(char)arg2;
-(void)fieldDetectSession:(id)arg1 didDetectTechnology:(id)arg2;
-(void)fieldDetectSession:(id)arg1 didEnterFieldWithNotification:(id)arg2;
-(void)fieldDetectSessionDidExitField:(id)arg1;
-(void)fieldDetectSessionDidEndUnexpectedly:(id)arg1;

@end

