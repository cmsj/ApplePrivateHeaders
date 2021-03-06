/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:00 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/AppKit.framework/Versions/C/AppKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AppKit/AppKit-Structs.h>
#import <AppKit/NSView.h>
#import <libobjc.A.dylib/NSCollectionViewElement.h>
#import <libobjc.A.dylib/NSAccessibilityButton.h>

@class NSString;

@interface NSTouchBarCustomizationPreviewSectionShade : NSView <NSCollectionViewElement, NSAccessibilityButton> {

	id _target;
	SEL _action;
	long long _tag;
	NSString* _accessibilityLabel;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (copy) NSString * identifier; 
@property (__weak) id target;                                       //@synthesize target=_target - In the implementation block
@property (assign) SEL action;                                      //@synthesize action=_action - In the implementation block
@property (assign) long long tag;                                   //@synthesize tag=_tag - In the implementation block
@property (copy) NSString * accessibilityLabel;                     //@synthesize accessibilityLabel=_accessibilityLabel - In the implementation block
-(void)dealloc;
-(void)setTarget:(id)arg1 ;
-(id)target;
-(SEL)action;
-(void)prepareForReuse;
-(void)setTag:(long long)arg1 ;
-(void)setAction:(SEL)arg1 ;
-(long long)tag;
-(id)initWithFrame:(CGRect)arg1 ;
-(NSString *)accessibilityLabel;
-(char)isAccessibilityElement;
-(void)setAccessibilityLabel:(NSString *)arg1 ;
-(id)accessibilityIdentifier;
-(char)accessibilityPerformPress;
-(void)handleClick:(id)arg1 ;
@end

