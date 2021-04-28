/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:00 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/AppKit.framework/Versions/C/AppKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AppKit/AppKit-Structs.h>
#import <AppKit/NSViewController.h>
#import <libobjc.A.dylib/NSLegacyExternalColorPickerHostViewController.h>

@protocol NSLegacyExternalColorPickerHostViewController
@required
-(void)pickColor:(id)arg1;

@end

#import <libobjc.A.dylib/NSRemoteViewDelegate.h>
#import <libobjc.A.dylib/NSColorPickingInternal.h>

@class NSString, NSURL, NSColorPanel, NSColor;

@interface NSLegacyExternalColorPickerHostViewController : NSViewController <NSLegacyExternalColorPickerHostViewController, NSRemoteViewDelegate, NSColorPickingInternal> {

	NSURL* _bundleURL;
	unsigned long long _initialMask;
	char _firstLoad;
	NSColorPanel* _colorPanel;
	char _isActivePicker;
	NSColor* _currentColor;
	int _architecture;

}

@property (setter=_setCurrentColor:,copy) NSColor * _currentColor;              //@synthesize currentColor=_currentColor - In the implementation block
@property (readonly) char shouldRetainExportedObject; 
@property (assign) char isActivePicker; 
@property (copy,readonly) NSString * pickerIdentifier; 
+(void)warmupForArchitecture:(int)arg1 ;
-(void)dealloc;
-(id)description;
-(void)setMode:(long long)arg1 ;
-(long long)currentMode;
-(id)exportedInterface;
-(void)loadView;
-(void)setColor:(id)arg1 ;
-(id)initWithPickerMask:(unsigned long long)arg1 colorPanel:(id)arg2 ;
-(id)provideNewButtonImage;
-(void)insertNewButtonImage:(id)arg1 in:(id)arg2 ;
-(void)viewSizeChanged:(id)arg1 ;
-(void)alphaControlAddedOrRemoved:(id)arg1 ;
-(void)attachColorList:(id)arg1 ;
-(void)detachColorList:(id)arg1 ;
-(id)buttonToolTip;
-(CGSize)minContentSize;
-(char)supportsMode:(long long)arg1 ;
-(id)provideNewView:(char)arg1 ;
-(char)isActivePicker;
-(void)setIsActivePicker:(char)arg1 ;
-(NSString *)pickerIdentifier;
-(NSColor *)_currentColor;
-(id)remoteView;
-(id)serviceViewControllerInterface;
-(void)viewDidInvalidate:(id)arg1 ;
-(void)_setCurrentColor:(id)arg1 ;
-(void)pickColor:(id)arg1 ;
-(id)initWithPickerMask:(unsigned long long)arg1 colorPanel:(id)arg2 bundleURL:(id)arg3 architecture:(int)arg4 ;
-(void)preparePickerWithSandboxExtension:(char)arg1 completionHandler:(/*^block*/id)arg2 ;
@end
