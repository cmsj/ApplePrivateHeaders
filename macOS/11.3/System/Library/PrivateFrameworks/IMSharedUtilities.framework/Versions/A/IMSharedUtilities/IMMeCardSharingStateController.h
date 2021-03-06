/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:39 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/IMSharedUtilities.framework/Versions/A/IMSharedUtilities
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface IMMeCardSharingStateController : NSObject

@property (assign,nonatomic) char sharingEnabled; 
@property (assign,nonatomic) unsigned long long sharingAudience; 
@property (assign,nonatomic) unsigned long long nameFormat; 
@property (assign,nonatomic) char nameForkedFromMeCard; 
@property (assign,nonatomic) char imageForkedFromMeCard; 
+(id)sharedInstance;
-(id)init;
-(void)_migrateMeCardDomains;
-(void)_syncPreferenceDidChange;
-(void)setSharingAudience:(unsigned long long)arg1 ;
-(void)_incrementSharingVersion;
-(char)sharingEnabled;
-(void)setSharingEnabled:(char)arg1 ;
-(unsigned long long)sharingAudience;
-(unsigned long long)nameFormat;
-(void)setNameFormat:(unsigned long long)arg1 ;
-(void)postNameFormatChangedNotification;
-(char)nameForkedFromMeCard;
-(void)setNameForkedFromMeCard:(char)arg1 ;
-(char)imageForkedFromMeCard;
-(void)setImageForkedFromMeCard:(char)arg1 ;
-(char)wasSharingEverEnabled;
@end

