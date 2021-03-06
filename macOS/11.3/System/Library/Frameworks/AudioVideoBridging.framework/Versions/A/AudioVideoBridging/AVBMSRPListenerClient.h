/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:43 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/AudioVideoBridging.framework/Versions/A/AudioVideoBridging
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol AVBMSRPListenerClient
@optional
-(void)didRegisterListenerStreamID:(unsigned long long)arg1 event:(unsigned char)arg2;
-(void)didDeregisterListenerStreamID:(unsigned long long)arg1;

@required
-(void)didRegisterListenerStreamID:(unsigned long long)arg1 event:(unsigned char)arg2 onInterface:(id)arg3;
-(void)didDeregisterListenerStreamID:(unsigned long long)arg1 onInterface:(id)arg2;

@end

