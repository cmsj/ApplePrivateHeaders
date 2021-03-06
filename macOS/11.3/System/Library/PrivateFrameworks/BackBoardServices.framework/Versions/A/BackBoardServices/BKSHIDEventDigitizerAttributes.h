/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:33 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/BackBoardServices.framework/Versions/A/BackBoardServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <BackBoardServices/BackBoardServices-Structs.h>
#import <BackBoardServices/BKSHIDEventBaseAttributes.h>

@class NSArray;

@interface BKSHIDEventDigitizerAttributes : BKSHIDEventBaseAttributes {

	unsigned char _touchStreamIdentifier;
	char _systemGesturesPossible;
	char _systemGestureStateChange;
	float _maximumForce;
	double _digitizerSurfaceWidth;
	double _digitizerSurfaceHeight;
	NSArray* _pathAttributes;
	double _initialTouchTimestamp;

}

@property (assign,nonatomic) float maximumForce;                               //@synthesize maximumForce=_maximumForce - In the implementation block
@property (assign,nonatomic) double digitizerSurfaceWidth;                     //@synthesize digitizerSurfaceWidth=_digitizerSurfaceWidth - In the implementation block
@property (assign,nonatomic) double digitizerSurfaceHeight;                    //@synthesize digitizerSurfaceHeight=_digitizerSurfaceHeight - In the implementation block
@property (nonatomic,retain) NSArray * pathAttributes;                         //@synthesize pathAttributes=_pathAttributes - In the implementation block
@property (assign,nonatomic) double initialTouchTimestamp;                     //@synthesize initialTouchTimestamp=_initialTouchTimestamp - In the implementation block
@property (assign,nonatomic) unsigned char touchStreamIdentifier;              //@synthesize touchStreamIdentifier=_touchStreamIdentifier - In the implementation block
@property (assign,nonatomic) char systemGesturesPossible;                      //@synthesize systemGesturesPossible=_systemGesturesPossible - In the implementation block
@property (assign,nonatomic) char systemGestureStateChange;                    //@synthesize systemGestureStateChange=_systemGestureStateChange - In the implementation block
+(id)protobufSchema;
-(id)copyWithZone:(NSZone*)arg1 ;
-(char)isEqual:(id)arg1 ;
-(void)appendDescriptionToFormatter:(id)arg1 ;
-(float)maximumForce;
-(void)setMaximumForce:(float)arg1 ;
-(double)digitizerSurfaceWidth;
-(void)setDigitizerSurfaceWidth:(double)arg1 ;
-(double)digitizerSurfaceHeight;
-(void)setDigitizerSurfaceHeight:(double)arg1 ;
-(NSArray *)pathAttributes;
-(void)setPathAttributes:(NSArray *)arg1 ;
-(double)initialTouchTimestamp;
-(void)setInitialTouchTimestamp:(double)arg1 ;
-(unsigned char)touchStreamIdentifier;
-(void)setTouchStreamIdentifier:(unsigned char)arg1 ;
-(char)systemGesturesPossible;
-(void)setSystemGesturesPossible:(char)arg1 ;
-(char)systemGestureStateChange;
-(void)setSystemGestureStateChange:(char)arg1 ;
@end

