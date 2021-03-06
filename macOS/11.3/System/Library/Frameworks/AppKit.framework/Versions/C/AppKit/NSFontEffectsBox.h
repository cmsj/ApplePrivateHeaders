/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:50:57 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/AppKit.framework/Versions/C/AppKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AppKit/AppKit-Structs.h>
#import <AppKit/NSBox.h>
#import <libobjc.A.dylib/NSToolbarDelegate.h>

@class NSMutableDictionary, NSMutableArray, NSString;

@interface NSFontEffectsBox : NSBox <NSToolbarDelegate> {

	id _blurSlider;
	id _opacitySlider;
	id _radiusSlider;
	id _angleDial;
	id _mainControlsBox;
	id _shadowControlsBox;
	id _mainEffectsBox;
	id _angleLabel;
	id _underlineButton;
	id _strikeButton;
	id _shadowOpacitySliderToolbarItem;
	id _shadowBlurSliderToolbarItem;
	id _shadowOffsetSliderToolbarItem;
	id _shadowAngleDialToolbarItem;
	id _shadowToggleButton;
	id _textColorButton;
	id _documentColorButton;
	NSMutableDictionary* _attributesToAdd;
	NSMutableArray* _attributesToRemove;
	id _febUnused[5];
	int _shadowBlur;
	int _colorState;
	struct {
		unsigned showUnderline : 1;
		unsigned showStrikethrough : 1;
		unsigned showTextColor : 1;
		unsigned showDocumentColor : 1;
		unsigned showShadowEffects : 1;
		unsigned updatingAttributes : 1;
		unsigned reserved : 26;
	}  _febFlags;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)awakeFromNib;
-(id)toolbarDefaultItemIdentifiers:(id)arg1 ;
-(id)toolbarAllowedItemIdentifiers:(id)arg1 ;
-(void)changeColor:(id)arg1 ;
-(void)_changeShadowBlur:(id)arg1 ;
-(void)_changeShadowOpacity:(id)arg1 ;
-(void)_changeShadowAngle:(id)arg1 ;
-(void*)carbonNotificationProc;
-(void)_orderFrontModalColorPanel;
-(char)_sendChangeAttributesActionIfSupported;
-(void)_sendCarbonNotificationForTag:(unsigned)arg1 withValuePtr:(const void*)arg2 andSize:(unsigned long long)arg3 ;
-(void)_changeColorToColor:(id)arg1 ;
-(id)_currentShadowForFont:(id)arg1 ;
-(id)_foregroundColor;
-(id)_documentBackgroundColor;
-(long long)_underlineStyle;
-(long long)_strikethroughStyle;
-(long long)_lineStyleForLineStyleButton:(id)arg1 ;
-(void)_sendCarbonNotificationFor:(unsigned long long)arg1 tags:(const unsigned*)arg2 withValuePtrs:(const void*)arg3 andSizes:(const unsigned long long*)arg4 ;
-(char)_ignoreBadFirstResponders;
-(void)_changeTextColor:(id)arg1 ;
-(void)_changeDocumentColor:(id)arg1 ;
-(char)shadowsEnabled;
-(id)convertAttributes:(id)arg1 ;
-(void)_setAttributes:(id)arg1 isMultiple:(char)arg2 ;
-(void)_validateFontPanelFontAttributes:(id)arg1 ;
-(void)_openEffectsButton:(id)arg1 ;
-(void)_toggleShadow:(id)arg1 ;
-(void)_validateUnderline:(char)arg1 ;
-(void)_validateStrikethrough:(char)arg1 ;
-(void)_validateTextColor:(char)arg1 ;
-(void)_validateDocumentColor:(char)arg1 ;
-(void)_validateShadowEffect:(char)arg1 ;
@end

