/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:00 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/AppKit.framework/Versions/C/AppKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AppKit/AppKit-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSView;

@interface NSTouch : NSObject <NSCopying> {

	long long _index;
	id _identity;
	unsigned long long _phase;
	CGPoint _pos1;
	long long _privateFlags;
	NSView* _view;
	id _reserved1;
	CGPoint _pos0;
	long long _reserved4;
	id _device;
	CGSize _deviceSize;
	long long _contextId;
	double _timestamp;

}

@property (readonly) CGPoint previousNormalizedPosition; 
@property (readonly) double timestamp; 
@property (readonly) id<NSObject><NSCopying> identity;                //@synthesize identity=_identity - In the implementation block
@property (readonly) unsigned long long phase;                        //@synthesize phase=_phase - In the implementation block
@property (readonly) CGPoint normalizedPosition; 
@property (getter=isResting,readonly) char resting; 
@property (readonly) id device;                                       //@synthesize device=_device - In the implementation block
@property (readonly) CGSize deviceSize;                               //@synthesize deviceSize=_deviceSize - In the implementation block
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)dealloc;
-(id)description;
-(long long)_index;
-(long long)type;
-(id)device;
-(double)timestamp;
-(id<NSObject><NSCopying>)identity;
-(CGPoint)locationInView:(id)arg1 ;
-(id)_view;
-(CGPoint)previousLocationInView:(id)arg1 ;
-(unsigned long long)phase;
-(long long)_contextId;
-(CGSize)deviceSize;
-(double)_force;
-(id)_initWithIndex:(long long)arg1 phase:(unsigned long long)arg2 contextId:(long long)arg3 position:(CGPoint)arg4 previousPosition:(CGPoint)arg5 touchType:(long long)arg6 timestamp:(double)arg7 isResting:(char)arg8 view:(id)arg9 device:(id)arg10 deviceSize:(CGSize)arg11 force:(double)arg12 ;
-(id)_touchByCancellingTouch;
-(CGPoint)normalizedPosition;
-(char)isResting;
-(id)_initWithPreviousTouch:(id)arg1 newPhase:(unsigned long long)arg2 position:(CGPoint)arg3 timestamp:(double)arg4 isResting:(char)arg5 force:(double)arg6 ;
-(id)_initWithIdentity:(id)arg1 index:(long long)arg2 phase:(unsigned long long)arg3 contextId:(long long)arg4 position:(CGPoint)arg5 previousPosition:(CGPoint)arg6 touchType:(long long)arg7 timestamp:(double)arg8 isResting:(char)arg9 view:(id)arg10 device:(id)arg11 deviceSize:(CGSize)arg12 force:(double)arg13 ;
-(CGPoint)previousNormalizedPosition;
@end

