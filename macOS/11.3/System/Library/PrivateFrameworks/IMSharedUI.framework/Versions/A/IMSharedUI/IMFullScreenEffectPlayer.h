/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:48 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/IMSharedUI.framework/Versions/A/IMSharedUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <IMSharedUI/IMFullScreenEffectSoundPlayerDelegate.h>

@protocol IMFullScreenEffectSoundPlayer, IMFullScreenEffectPlayerDelegate;
@class IMFullScreenEffect, IMMessagePartChatItem, NSImage, NSString, NSTimer;

@interface IMFullScreenEffectPlayer : NSObject <IMFullScreenEffectSoundPlayerDelegate> {

	char _wasAborted;
	char _shouldRepeat;
	char _triggeredByResponseKit;
	char _isFromMe;
	IMFullScreenEffect* _fullScreenEffect;
	id<IMFullScreenEffectSoundPlayer> _soundPlayer;
	IMMessagePartChatItem* _messagePartChatItem;
	NSImage* _messageImage;
	double _startTime;
	double _endTime;
	NSString* _languageCode;
	NSTimer* _effectTimer;
	NSString* _identifier;
	id<IMFullScreenEffectPlayerDelegate> _delegate;

}

@property (__weak) NSTimer * effectTimer;                                                //@synthesize effectTimer=_effectTimer - In the implementation block
@property (retain) IMFullScreenEffect * fullScreenEffect;                                //@synthesize fullScreenEffect=_fullScreenEffect - In the implementation block
@property (__weak) IMMessagePartChatItem * messagePartChatItem;                          //@synthesize messagePartChatItem=_messagePartChatItem - In the implementation block
@property (assign) char triggeredByResponseKit;                                          //@synthesize triggeredByResponseKit=_triggeredByResponseKit - In the implementation block
@property (nonatomic,retain) id<IMFullScreenEffectSoundPlayer> soundPlayer;              //@synthesize soundPlayer=_soundPlayer - In the implementation block
@property (retain) NSString * identifier;                                                //@synthesize identifier=_identifier - In the implementation block
@property (assign) char isFromMe;                                                        //@synthesize isFromMe=_isFromMe - In the implementation block
@property (assign) double startTime;                                                     //@synthesize startTime=_startTime - In the implementation block
@property (assign) double endTime;                                                       //@synthesize endTime=_endTime - In the implementation block
@property (retain) NSString * languageCode;                                              //@synthesize languageCode=_languageCode - In the implementation block
@property (assign) char wasAborted;                                                      //@synthesize wasAborted=_wasAborted - In the implementation block
@property (__weak) id<IMFullScreenEffectPlayerDelegate> delegate;                        //@synthesize delegate=_delegate - In the implementation block
@property (assign) char shouldRepeat;                                                    //@synthesize shouldRepeat=_shouldRepeat - In the implementation block
@property (retain) NSImage * messageImage;                                               //@synthesize messageImage=_messageImage - In the implementation block
@property (readonly) char isPlaying; 
@property (readonly) char didPlay; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(id<IMFullScreenEffectPlayerDelegate>)delegate;
-(void)setDelegate:(id<IMFullScreenEffectPlayerDelegate>)arg1 ;
-(NSString *)languageCode;
-(NSString *)identifier;
-(void)setIdentifier:(NSString *)arg1 ;
-(double)startTime;
-(void)setStartTime:(double)arg1 ;
-(char)isPlaying;
-(void)stopTimer;
-(void)startTimer;
-(void)setEndTime:(double)arg1 ;
-(double)endTime;
-(void)setShouldRepeat:(char)arg1 ;
-(char)shouldRepeat;
-(void)setLanguageCode:(NSString *)arg1 ;
-(char)isFromMe;
-(void)setIsFromMe:(char)arg1 ;
-(void)_didPrepare;
-(IMMessagePartChatItem *)messagePartChatItem;
-(IMFullScreenEffect *)fullScreenEffect;
-(char)triggeredByResponseKit;
-(void)loadFullScreenEffect:(/*^block*/id)arg1 ;
-(void)abortPlayingEffect;
-(void)prepareToPlayEffect;
-(void)startPlayingEffect;
-(void)setTriggeredByResponseKit:(char)arg1 ;
-(char)_shouldAddFilter:(id)arg1 toCell:(id)arg2 ;
-(void)addFullScreenEffectFiltersToCells:(id)arg1 ;
-(void)removeFullScreenEffectFiltersFromCells:(id)arg1 ;
-(void)addFullScreenEffectFilterToTriggeringCell:(id)arg1 ;
-(void)fullScreenEffectSoundPlayerDidStopPlaying:(id)arg1 ;
-(void)fullScreenEffectSoundPlayerDidStartPlaying:(id)arg1 ;
-(void)fullScreenEffectSoundPlayerDidPrepare:(id)arg1 ;
-(id)initWithIdentifier:(id)arg1 isFromMe:(char)arg2 ;
-(id)createSoundPlayer;
-(void)setSoundPlayer:(id<IMFullScreenEffectSoundPlayer>)arg1 ;
-(void)setFullScreenEffect:(IMFullScreenEffect *)arg1 ;
-(void)didSetFullScreenEffect:(id)arg1 ;
-(void)_setFullScreenEffect:(id)arg1 ;
-(void)setWasAborted:(char)arg1 ;
-(void)didAbortPlaying;
-(void)didStopPlaying;
-(void)willStartPlaying;
-(id)initWithMessagePartChatItem:(id)arg1 languageCode:(id)arg2 ;
-(void)stopPlayingEffect;
-(char)didPlay;
-(id<IMFullScreenEffectSoundPlayer>)soundPlayer;
-(void)setMessagePartChatItem:(IMMessagePartChatItem *)arg1 ;
-(NSImage *)messageImage;
-(void)setMessageImage:(NSImage *)arg1 ;
-(char)wasAborted;
-(NSTimer *)effectTimer;
-(void)setEffectTimer:(NSTimer *)arg1 ;
@end

