/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:46 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/AppStoreComponents.framework/Versions/A/AppStoreComponents
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AppStoreComponents/AppStoreComponents-Structs.h>
#import <AppStoreComponents/ASCUIView.h>

@class NSColor, NSString;

@interface ASCBorderView : ASCUIView {

	NSColor* _color;

}

@property (nonatomic,retain) NSColor * color;                            //@synthesize color=_color - In the implementation block
@property (assign,nonatomic) double width; 
@property (assign,nonatomic) double cornerRadius; 
@property (nonatomic,retain) NSString * cornerCurve; 
@property (assign,nonatomic) unsigned long long cornerMask; 
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setWidth:(double)arg1 ;
-(double)width;
-(void)updateLayer;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setCornerRadius:(double)arg1 ;
-(double)cornerRadius;
-(NSColor *)color;
-(void)setColor:(NSColor *)arg1 ;
-(void)setCornerCurve:(NSString *)arg1 ;
-(void)setCornerMask:(unsigned long long)arg1 ;
-(unsigned long long)cornerMask;
-(NSString *)cornerCurve;
-(void)updateBorderColor;
@end

