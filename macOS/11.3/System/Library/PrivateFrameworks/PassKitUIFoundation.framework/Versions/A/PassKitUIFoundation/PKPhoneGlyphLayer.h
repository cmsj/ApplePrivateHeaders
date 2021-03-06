/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:32 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/PassKitUIFoundation.framework/Versions/A/PassKitUIFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PassKitUIFoundation/PassKitUIFoundation-Structs.h>
#import <PassKitCore/PKMicaLayer.h>

@class CALayer, CAFilter, NSString;

@interface PKPhoneGlyphLayer : PKMicaLayer {

	CALayer* _QRCodeLayer;
	CAFilter* _QRCodeColorFilter;
	CALayer* _highlightLayer;
	CGPoint _highlightOffscreenPosition;
	CGPoint _highlightOnscreenPosition;
	NSString* _phoneWiggleAnimationKey;
	CGColorRef _primaryColor;
	char _showQRCode;

}

@property (assign,nonatomic) char showQRCode;              //@synthesize showQRCode=_showQRCode - In the implementation block
-(void)dealloc;
-(id)init;
-(void)layoutSublayers;
-(void)layerDidBecomeVisible:(char)arg1 ;
-(void)setHighlighted:(char)arg1 animated:(char)arg2 ;
-(id)initWithFrame:(CGRect)arg1 package:(id)arg2 ;
-(void)setPrimaryColor:(CGColorRef)arg1 animated:(char)arg2 ;
-(void)_restartPhoneWiggleIfNecessary;
-(void)_applyEffectivePrimaryColorToQRCodeAnimated:(char)arg1 ;
-(void)_startPhoneWiggle;
-(void)_endPhoneWiggle;
-(void)setShowQRCode:(char)arg1 ;
-(char)showQRCode;
@end

