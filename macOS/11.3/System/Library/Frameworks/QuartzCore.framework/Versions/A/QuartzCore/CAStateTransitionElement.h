/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:03 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/QuartzCore.framework/Versions/A/QuartzCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <QuartzCore/QuartzCore-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class CALayer, CAAnimation, NSString;

@interface CAStateTransitionElement : NSObject <NSCopying, NSSecureCoding> {

	CALayer* _target;
	CAAnimation* _animation;
	NSString* _key;
	char _enabled;

}

@property (getter=isEnabled) char enabled;                         //@synthesize enabled=_enabled - In the implementation block
@property (assign,nonatomic,__weak) CALayer * target;              //@synthesize target=_target - In the implementation block
@property (nonatomic,retain) CAAnimation * animation;              //@synthesize animation=_animation - In the implementation block
@property (nonatomic,copy) NSString * key;                         //@synthesize key=_key - In the implementation block
@property (assign,nonatomic) double beginTime; 
@property (assign,nonatomic) double duration; 
+(void)CAMLParserStartElement:(id)arg1 ;
+(char)supportsSecureCoding;
-(void)CAMLParser:(id)arg1 setValue:(id)arg2 forKey:(id)arg3 ;
-(id)CAMLTypeForKey:(id)arg1 ;
-(void)encodeWithCAMLWriter:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)dealloc;
-(id)debugDescription;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setTarget:(CALayer *)arg1 ;
-(CALayer *)target;
-(void)setEnabled:(char)arg1 ;
-(char)isEnabled;
-(NSString *)key;
-(void)setKey:(NSString *)arg1 ;
-(double)duration;
-(void)setDuration:(double)arg1 ;
-(CAAnimation *)animation;
-(double)beginTime;
-(void)setBeginTime:(double)arg1 ;
-(void)setAnimation:(CAAnimation *)arg1 ;
@end

