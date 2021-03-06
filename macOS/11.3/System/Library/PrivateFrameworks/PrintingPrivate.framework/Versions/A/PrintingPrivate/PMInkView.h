/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:50 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/PrintingPrivate.framework/Versions/A/PrintingPrivate
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PrintingPrivate/PrintingPrivate-Structs.h>
#import <AppKit/NSView.h>

@interface PMInkView : NSView {

	OpaquePMPrinterRef _printer;

}

@property (assign) OpaquePMPrinterRef printer;              //@synthesize printer=_printer - In the implementation block
-(OpaquePMPrinterRef)printer;
-(void)setPrinter:(OpaquePMPrinterRef)arg1 ;
-(id)addStaticText:(id)arg1 withAttrs:(id)arg2 frame:(CGRect)arg3 alignment:(long long)arg4 axHelp:(id)arg5 ;
-(void)airprintButtonSelected:(id)arg1 ;
-(double)addColor:(id)arg1 at:(CGPoint)arg2 withLevel:(float)arg3 low:(float)arg4 ;
-(double)addSRGBColor:(id)arg1 at:(CGPoint)arg2 withLevel:(float)arg3 low:(float)arg4 ;
-(void)addLowInkBadgeAt:(CGPoint)arg1 withTooltip:(id)arg2 ;
-(id)addAirPrintSuppliesButtonAt:(CGPoint)arg1 inRect:(CGRect)arg2 ;
-(id)markerChangeTimeString:(double)arg1 ;
-(id)addTextViewForString:(id)arg1 at:(CGPoint)arg2 withAttrs:(id)arg3 width:(double)arg4 ;
-(id)getWarningToolTip:(id)arg1 ;
-(double)addConsumablesDict:(id)arg1 at:(CGPoint)arg2 withAttrs:(id)arg3 titleWidth:(double)arg4 warning:(id)arg5 ;
-(void)setSuppliesInfo:(id)arg1 ;
@end

