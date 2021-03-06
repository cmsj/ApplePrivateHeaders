/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:47 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/DigitalTouchShared.framework/Versions/A/DigitalTouchShared
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <DigitalTouchShared/DigitalTouchShared-Structs.h>
#import <DigitalTouchShared/ETMessage.h>

@class NSMutableArray, NSArray;

@interface ETSketchMessage : ETMessage {

	NSMutableArray* _strokes;
	NSMutableArray* _colorsInMessage;
	char _hasMultipleColors;
	char _didEndWisping;
	char _didDrawPoints;
	char _hideComet;

}

@property (assign,nonatomic) char hasMultipleColors;                           //@synthesize hasMultipleColors=_hasMultipleColors - In the implementation block
@property (nonatomic,readonly) unsigned long long numberOfColors; 
@property (assign,nonatomic) char didEndWisping;                               //@synthesize didEndWisping=_didEndWisping - In the implementation block
@property (assign,nonatomic) char didDrawPoints;                               //@synthesize didDrawPoints=_didDrawPoints - In the implementation block
@property (nonatomic,readonly) NSArray * strokes; 
@property (nonatomic,readonly) NSArray * colorsInMessage; 
@property (assign,nonatomic) char hideComet;                                   //@synthesize hideComet=_hideComet - In the implementation block
+(unsigned short)messageType;
-(id)init;
-(id)archiveData;
-(NSArray *)strokes;
-(char)didEndWisping;
-(void)didEndWisp;
-(void)addStrokeWithColor:(id)arg1 ;
-(double)messageDuration;
-(char)didDrawPoints;
-(char)hasMultipleColors;
-(NSArray *)colorsInMessage;
-(void)willBeginWisp;
-(void)setDidDrawPoints:(char)arg1 ;
-(void)setDidEndWisping:(char)arg1 ;
-(void)addSketchPoint:(CGPoint)arg1 ;
-(void)didReachRendererLimit;
-(id)initWithArchiveData:(id)arg1 ;
-(char)_decodeWithDoodle:(id)arg1 ;
-(void)setParentMessage:(id)arg1 ;
-(unsigned long long)numberOfColors;
-(void)addSketchPoint:(CGPoint)arg1 atTime:(double)arg2 ;
-(id)messageTypeAsString;
-(void)convertToSimulatedPlaybackSpeed;
-(void)setHasMultipleColors:(char)arg1 ;
-(char)hideComet;
-(void)setHideComet:(char)arg1 ;
@end

