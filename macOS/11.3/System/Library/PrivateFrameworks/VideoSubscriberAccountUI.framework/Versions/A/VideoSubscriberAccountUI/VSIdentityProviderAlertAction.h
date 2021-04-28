/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:54 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/VideoSubscriberAccountUI.framework/Versions/A/VideoSubscriberAccountUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface VSIdentityProviderAlertAction : NSObject {

	NSString* _title;
	long long _style;
	/*^block*/id _callback;

}

@property (nonatomic,copy) NSString * title;               //@synthesize title=_title - In the implementation block
@property (assign,nonatomic) long long style;              //@synthesize style=_style - In the implementation block
@property (nonatomic,copy) id callback;                    //@synthesize callback=_callback - In the implementation block
-(long long)style;
-(void)setTitle:(NSString *)arg1 ;
-(NSString *)title;
-(void)setStyle:(long long)arg1 ;
-(id)callback;
-(void)setCallback:(id)arg1 ;
@end
