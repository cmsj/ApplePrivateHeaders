/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:23 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/DialogEngine.framework/Versions/A/DialogEngine
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSDictionary;

@interface CATContext : NSObject {

	char _isMultiUserEnabled;
	char _requiresUserGrounding;
	unsigned _randomSeed;
	NSString* _siriLocale;
	NSString* _siriVoiceGender;
	long long _currentTime;
	NSDictionary* _userSettings;

}

@property (nonatomic,retain) NSString * siriLocale;                    //@synthesize siriLocale=_siriLocale - In the implementation block
@property (nonatomic,retain) NSString * siriVoiceGender;               //@synthesize siriVoiceGender=_siriVoiceGender - In the implementation block
@property (assign) char isMultiUserEnabled;                            //@synthesize isMultiUserEnabled=_isMultiUserEnabled - In the implementation block
@property (assign) char requiresUserGrounding;                         //@synthesize requiresUserGrounding=_requiresUserGrounding - In the implementation block
@property (assign) unsigned randomSeed;                                //@synthesize randomSeed=_randomSeed - In the implementation block
@property (assign) long long currentTime;                              //@synthesize currentTime=_currentTime - In the implementation block
@property (nonatomic,retain) NSDictionary * userSettings;              //@synthesize userSettings=_userSettings - In the implementation block
-(id)init;
-(long long)currentTime;
-(void)setCurrentTime:(long long)arg1 ;
-(unsigned)randomSeed;
-(NSString *)siriLocale;
-(void)setSiriLocale:(NSString *)arg1 ;
-(id)toDictionary;
-(NSDictionary *)userSettings;
-(void)setUserSettings:(NSDictionary *)arg1 ;
-(char)isMultiUserEnabled;
-(void)setRandomSeed:(unsigned)arg1 ;
-(void)setSiriVoiceGender:(NSString *)arg1 ;
-(void)setIsMultiUserEnabled:(char)arg1 ;
-(void)setRequiresUserGrounding:(char)arg1 ;
-(NSString *)siriVoiceGender;
-(char)requiresUserGrounding;
-(id)initWithInputLocale:(id)arg1 outputVoiceLocale:(id)arg2 ;
@end

