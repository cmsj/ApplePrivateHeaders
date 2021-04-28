/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:47 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/DigitalTouchShared.framework/Versions/A/DigitalTouchShared
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <DigitalTouchShared/DigitalTouchShared-Structs.h>
#import <DigitalTouchShared/ETMessage.h>

@class SKTexture, SKUniform, NSMutableArray, NSMutableSet, KissNode;

@interface ETKissMessage : ETMessage {

	SKTexture* _atlas;
	SKUniform* _atlasUniform;
	NSMutableArray* _points;
	NSMutableArray* _angles;
	NSMutableArray* _delays;
	NSMutableSet* _kissMarkNodes;
	double _lastKissTime;
	KissNode* _lastKiss;
	char _didDelegateWillStopPlaying;
	char _didDelegateDidStopPlaying;

}
+(unsigned short)messageType;
+(id)_kissColor;
-(id)init;
-(id)archiveData;
-(void)stopPlaying;
-(double)messageDuration;
-(id)initWithArchiveData:(id)arg1 ;
-(void)setParentMessage:(id)arg1 ;
-(id)messageTypeAsString;
-(void)displayInScene:(id)arg1 ;
-(char)reachedSizeLimit;
-(void)_initAtlas;
-(char)_leaveMarkAtDelay:(double)arg1 ;
-(void)_displayKissAtPoint:(CGPoint)arg1 angle:(double)arg2 leavesMark:(char)arg3 inScene:(id)arg4 ;
-(char)_hasKissesThatLeaveMark;
-(void)_notifyDelegateWillStopPlaying;
-(void)_notifyDelegateDidStopPlaying;
-(void)_setKissLeavesMark:(id)arg1 ;
-(void)addKissAtNormalizedPoint:(CGPoint)arg1 angle:(double)arg2 time:(double)arg3 toScene:(id)arg4 ;
@end
