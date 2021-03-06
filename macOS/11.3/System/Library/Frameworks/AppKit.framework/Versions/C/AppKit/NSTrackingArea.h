/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:50:59 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/AppKit.framework/Versions/C/AppKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AppKit/AppKit-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSCoding.h>

@class NSDictionary;

@interface NSTrackingArea : NSObject <NSCopying, NSCoding> {

	CGRect _rect;
	id _owner;
	NSDictionary* _userInfo;
	unsigned long long _options;
	long long _privateFlags;
	id _reserved;

}

@property (readonly) CGRect rect; 
@property (readonly) unsigned long long options; 
@property (__weak,readonly) id owner; 
@property (copy,readonly) NSDictionary * userInfo; 
+(void)initialize;
+(char)_isTrackingAreaObject:(id)arg1 ;
+(void)_releaseTrackingTag:(long long)arg1 ;
+(void)_autoreleaseTrackingTag:(long long)arg1 ;
+(void)_retainTrackingTag:(long long)arg1 ;
+(id)_areaSendingMouseEntered;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)dealloc;
-(id)description;
-(NSDictionary *)userInfo;
-(void*)_userInfo;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(char)_enabled;
-(unsigned long long)options;
-(id)owner;
-(id)initWithRect:(CGRect)arg1 options:(unsigned long long)arg2 owner:(id)arg3 userInfo:(id)arg4 ;
-(void)mouseMoved:(id)arg1 ;
-(CGRect)rect;
-(id)initWithRect:(CGRect)arg1 options:(unsigned long long)arg2 pressureConfigurations:(id)arg3 owner:(id)arg4 userInfo:(id)arg5 ;
-(void)_setInstalled:(char)arg1 ;
-(char)_suppressFirstMouseEntered;
-(void)_setSuppressFirstMouseEntered:(char)arg1 ;
-(char)_needsPressureConfigPushedToCG;
-(char)_installed;
-(void)_sendMouseCancelledFromWindow:(id)arg1 ;
-(char)_uninstallPending;
-(char)_suppressPressureConfiguration;
-(id)pressureConfigurations;
-(void)_setPressureConfigPushedToCG:(char)arg1 ;
-(void)_setInstallPending:(char)arg1 ;
-(void)_setEnabled:(char)arg1 ;
-(char)_removed;
-(void)_mouseEntered:(id)arg1 ;
-(void)_mouseExited:(id)arg1 ;
-(void)_setUninstallPending:(char)arg1 ;
-(void)_setRemoved:(char)arg1 ;
-(void)_setRect:(CGRect)arg1 ;
-(void)_forceInternalMouseExitIfNeeded;
-(char)_installPending;
-(char)_hasPressureConfigurations;
-(char)_representsGestureRecognizers;
-(void)_setRepresentsGestureRecognizers:(char)arg1 ;
-(void)_setPressureConfigurations:(id)arg1 ;
-(void)_setSuppressPressureConfiguration:(char)arg1 ;
-(void)_dispatchMouseEntered:(id)arg1 ;
-(void)_installDelayedRolloverForMouseEnteredEvent:(id)arg1 ;
-(void)_dispatchMouseExited:(id)arg1 ;
-(void)_internalMouseExitedWork;
-(char)_pressureConfigPushedToCG;
-(void)_doWork:(/*^block*/id)arg1 ;
-(id)gestureBehaviors;
-(void)setGestureBehaviors:(id)arg1 ;
@end

