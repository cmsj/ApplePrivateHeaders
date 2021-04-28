/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:40 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/AppStoreKit.framework/Versions/A/AppStoreKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol ASKAirplaneModeInquiryDelegate;
@interface ASKAirplaneModeInquiry : NSObject {

	id<ASKAirplaneModeInquiryDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<ASKAirplaneModeInquiryDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) char isEnabled; 
+(id)settingsURL;
-(id<ASKAirplaneModeInquiryDelegate>)delegate;
-(void)setDelegate:(id<ASKAirplaneModeInquiryDelegate>)arg1 ;
-(char)isEnabled;
@end
