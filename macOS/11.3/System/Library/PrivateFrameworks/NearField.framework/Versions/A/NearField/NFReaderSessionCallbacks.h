/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:03 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/NearField.framework/Versions/A/NearField
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol NFReaderSessionCallbacks <NSObject,NFSessionCallbackInterface>
@required
-(void)didTerminate:(id)arg1;
-(void)didUIControllerInvalidate:(id)arg1;
-(void)didDetectTags:(id)arg1 connectedTagIndex:(unsigned long long)arg2;
-(void)didDetectNDEFMessages:(id)arg1 fromTags:(id)arg2 updateUICallback:(/*^block*/id)arg3;
-(void)didDetectExternalReaderWithNotification:(id)arg1;

@end

