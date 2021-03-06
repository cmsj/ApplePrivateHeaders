/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:34 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/AuthKitUI.framework/Versions/A/AuthKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AuthKitUI/AKAuthorizationSubPane.h>

@class NSTextField, NSString;

@interface AKAuthorizationSubPaneInfoLabel : AKAuthorizationSubPane {

	double _marginInset;
	NSTextField* _infoLabel;
	unsigned long long _internalInfoLabelType;

}

@property (nonatomic,readonly) NSTextField * infoLabel;                             //@synthesize infoLabel=_infoLabel - In the implementation block
@property (assign,nonatomic) unsigned long long internalInfoLabelType;              //@synthesize internalInfoLabelType=_internalInfoLabelType - In the implementation block
@property (nonatomic,copy) NSString * string; 
@property (assign,nonatomic) double marginInset;                                    //@synthesize marginInset=_marginInset - In the implementation block
@property (assign,nonatomic) unsigned long long infoLabelType; 
-(NSString *)string;
-(void)setString:(NSString *)arg1 ;
-(id)initWithString:(id)arg1 ;
-(id)titleFont;
-(void)addToStackView:(id)arg1 context:(id)arg2 ;
-(void)addToConstraints:(id)arg1 context:(id)arg2 ;
-(void)setInfoLabelType:(unsigned long long)arg1 ;
-(id)infoLabelWithString:(id)arg1 ;
-(NSTextField *)infoLabel;
-(double)marginInset;
-(id)messageFont;
-(id)subTitleFont;
-(unsigned long long)internalInfoLabelType;
-(void)setInternalInfoLabelType:(unsigned long long)arg1 ;
-(void)setLabel:(id)arg1 toInfoLabelType:(unsigned long long)arg2 ;
-(unsigned long long)infoLabelType;
-(void)setMarginInset:(double)arg1 ;
@end

