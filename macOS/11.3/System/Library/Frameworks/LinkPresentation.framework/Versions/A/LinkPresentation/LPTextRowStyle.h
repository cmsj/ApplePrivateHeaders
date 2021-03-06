/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:19 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/LinkPresentation.framework/Versions/A/LinkPresentation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class LPTextViewStyle;

@interface LPTextRowStyle : NSObject {

	LPTextViewStyle* _leading;
	LPTextViewStyle* _trailing;
	long long _balancingMode;

}

@property (nonatomic,readonly) LPTextViewStyle * leading;               //@synthesize leading=_leading - In the implementation block
@property (nonatomic,readonly) LPTextViewStyle * trailing;              //@synthesize trailing=_trailing - In the implementation block
@property (assign,nonatomic) long long balancingMode;                   //@synthesize balancingMode=_balancingMode - In the implementation block
-(id)left;
-(LPTextViewStyle *)leading;
-(LPTextViewStyle *)trailing;
-(id)right;
-(id)initWithPlatform:(long long)arg1 ;
-(void)applyToAllTextViewStyles:(/*^block*/id)arg1 ;
-(long long)balancingMode;
-(void)setBalancingMode:(long long)arg1 ;
@end

