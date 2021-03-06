/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:00 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/AppleMediaServicesUI.framework/Versions/A/AppleMediaServicesUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol CRCodeRedeemerViewDelegate <NSObject>
@optional
-(void)codeRedeemerView:(id)arg1 willRecognizeCodes:(id)arg2;

@required
-(void)codeRedeemerView:(id)arg1 didSucceedWithCodes:(id)arg2;
-(void)codeRedeemerView:(id)arg1 didFailWithError:(id)arg2;
-(void)codeRedeemerViewWillFadeStatus:(id)arg1;
-(void)codeRedeemerViewDidFadeStatus:(id)arg1;
-(void)codeRedeemerViewDidFindBox:(id)arg1;
-(void)codeRedeemerViewCameraDidStart:(id)arg1;

@end

