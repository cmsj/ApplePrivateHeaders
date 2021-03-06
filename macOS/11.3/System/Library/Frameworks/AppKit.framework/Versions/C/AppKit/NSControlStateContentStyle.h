/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:50:57 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/AppKit.framework/Versions/C/AppKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSColor;


@protocol NSControlStateContentStyle <NSContentStyle>
@property (assign) long long state; 
@property (assign) long long value; 
@property (assign) long long presentationState; 
@property (getter=isEmphasized) char emphasized; 
@property (copy) NSColor * tintColor; 
@required
-(long long)state;
-(long long)value;
-(void)setState:(long long)arg1;
-(void)setValue:(long long)arg1;
-(NSColor *)tintColor;
-(void)setTintColor:(id)arg1;
-(char)isEmphasized;
-(void)setEmphasized:(char)arg1;
-(void)setPresentationState:(long long)arg1;
-(long long)presentationState;

@end

