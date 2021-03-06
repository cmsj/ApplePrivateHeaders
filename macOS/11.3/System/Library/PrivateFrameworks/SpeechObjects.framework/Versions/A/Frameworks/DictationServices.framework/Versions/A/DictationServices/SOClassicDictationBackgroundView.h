/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:18 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/SpeechObjects.framework/Versions/A/Frameworks/DictationServices.framework/Versions/A/DictationServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AppKit/NSPopoverFrame.h>
#import <libobjc.A.dylib/SOClassicDictationBackgroundProtocol.h>

@class NSString;

@interface SOClassicDictationBackgroundView : NSPopoverFrame <SOClassicDictationBackgroundProtocol> {

	unsigned char _pointerPosition;
	char _drawWithRoomForLanguagePopup;

}

@property (assign,nonatomic) char drawWithRoomForLanguagePopup;              //@synthesize drawWithRoomForLanguagePopup=_drawWithRoomForLanguagePopup - In the implementation block
@property (assign,nonatomic) unsigned char pointerPosition;                  //@synthesize pointerPosition=_pointerPosition - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(char)acceptsFirstMouse:(id)arg1 ;
-(void)shapeWindow;
-(unsigned char)pointerPosition;
-(char)drawWithRoomForLanguagePopup;
-(void)setDrawWithRoomForLanguagePopup:(char)arg1 ;
-(void)setPointerPosition:(unsigned char)arg1 ;
@end

