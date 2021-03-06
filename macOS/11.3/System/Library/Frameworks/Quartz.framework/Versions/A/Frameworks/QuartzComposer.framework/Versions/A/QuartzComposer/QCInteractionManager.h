/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:58 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/Quartz.framework/Versions/A/Frameworks/QuartzComposer.framework/Versions/A/QuartzComposer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <QuartzComposer/QuartzComposer-Structs.h>
@class QCRenderingPatch, QCPatch, NSArray;

@interface QCInteractionManager : NSObject {

	QCContactInfo _contacts[64];
	double _rotation;
	double _rotationOffset;
	double _scaleX;
	double _scaleOffsetX;
	double _scaleY;
	double _scaleOffsetY;
	CGPoint _translation;
	CGPoint _translationOffset;
	CGPoint _origin;
	unsigned long long _activeContactCount;
	unsigned long long _maxActiveContacts;
	unsigned long long _flags;
	unsigned long long _timestamp;
	unsigned long long _previousTimestamp;
	char _updated;
	char _exposeScale;
	char _exposeRotation;
	char _allowNonUniformScaling;
	QCDodRef _roi;
	CGAffineTransform _transform;
	QCRenderingPatch* _renderingPatch;
	QCPatch* _parent;
	void** _unused[6];

}

@property (readonly) CGPoint translation;                                //@synthesize translation=_translation - In the implementation block
@property (readonly) double rotation;                                    //@synthesize rotation=_rotation - In the implementation block
@property (readonly) double scaleX;                                      //@synthesize scaleX=_scaleX - In the implementation block
@property (readonly) double scaleY;                                      //@synthesize scaleY=_scaleY - In the implementation block
@property (readonly) CGPoint origin;                                     //@synthesize origin=_origin - In the implementation block
@property (readonly) char translating; 
@property (readonly) char scaling; 
@property (readonly) char rotating; 
@property (readonly) CGAffineTransform transform;                        //@synthesize transform=_transform - In the implementation block
@property (readonly) NSArray * activeContacts; 
@property (readonly) unsigned long long activeContactCount;              //@synthesize activeContactCount=_activeContactCount - In the implementation block
@property (readonly) double renderingDepth; 
@property (readonly) char updated;                                       //@synthesize updated=_updated - In the implementation block
@property (assign) char exposeScale;                                     //@synthesize exposeScale=_exposeScale - In the implementation block
@property (assign) char exposeRotation;                                  //@synthesize exposeRotation=_exposeRotation - In the implementation block
@property (assign) char allowNonUniformScaling;                          //@synthesize allowNonUniformScaling=_allowNonUniformScaling - In the implementation block
+(unsigned long long)maxActiveContacts;
-(id)init;
-(void)reset;
-(double)rotation;
-(CGAffineTransform)transform;
-(char)hitTest:(CGPoint)arg1 ;
-(char)_selected;
-(CGPoint)origin;
-(char)updated;
-(char)_updated;
-(double)scaleX;
-(double)scaleY;
-(CGPoint)translation;
-(id)initWithParentPatch:(id)arg1 ;
-(void)setRenderingPatch:(id)arg1 ;
-(id)renderingPatch;
-(void)setContactX:(double)arg1 Y:(double)arg2 state:(int)arg3 forIndex:(unsigned long long)arg4 ;
-(double)renderingDepth;
-(void)setRotation:(double)arg1 state:(int)arg2 ;
-(void)setScaleX:(double)arg1 Y:(double)arg2 state:(int)arg3 ;
-(unsigned long long)activeContactCount;
-(char)translating;
-(CGPoint)contactForIndex:(unsigned long long)arg1 ;
-(void)setContactOffsetX:(double)arg1 Y:(double)arg2 ;
-(void)setScaleOffsetX:(double)arg1 Y:(double)arg2 ;
-(void)setRotationOffset:(double)arg1 ;
-(char)scaling;
-(char)rotating;
-(void)_computeAffineTransform;
-(void)addDeltaContactX:(double)arg1 Y:(double)arg2 forIndex:(unsigned long long)arg3 ;
-(void)addDeltaScale:(double)arg1 ;
-(void)addDeltaRotation:(double)arg1 ;
-(NSArray *)activeContacts;
-(void)setExposeRotation:(char)arg1 ;
-(char)exposeScale;
-(void)setExposeScale:(char)arg1 ;
-(char)exposeRotation;
-(char)allowNonUniformScaling;
-(void)setAllowNonUniformScaling:(char)arg1 ;
@end

