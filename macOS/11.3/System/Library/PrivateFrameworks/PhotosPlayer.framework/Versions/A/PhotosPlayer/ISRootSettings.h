/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:50 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/PhotosPlayer.framework/Versions/A/PhotosPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PhotosPlayer/ISSettings.h>

@class ISPlayerSettings, ISVitalitySettings, ISPerformanceDiagnosticsSettings;

@interface ISRootSettings : ISSettings {

	ISPlayerSettings* _playerSettings;
	ISVitalitySettings* _vitalitySettings;
	ISPerformanceDiagnosticsSettings* _performanceDiagnosticsSettings;

}

@property (nonatomic,retain) ISPlayerSettings * playerSettings;                                              //@synthesize playerSettings=_playerSettings - In the implementation block
@property (nonatomic,retain) ISVitalitySettings * vitalitySettings;                                          //@synthesize vitalitySettings=_vitalitySettings - In the implementation block
@property (nonatomic,retain) ISPerformanceDiagnosticsSettings * performanceDiagnosticsSettings;              //@synthesize performanceDiagnosticsSettings=_performanceDiagnosticsSettings - In the implementation block
+(id)sharedInstance;
-(void)save;
-(void)setDefaultValues;
-(ISPerformanceDiagnosticsSettings *)performanceDiagnosticsSettings;
-(ISPlayerSettings *)playerSettings;
-(ISVitalitySettings *)vitalitySettings;
-(void)setPlayerSettings:(ISPlayerSettings *)arg1 ;
-(void)setVitalitySettings:(ISVitalitySettings *)arg1 ;
-(void)setPerformanceDiagnosticsSettings:(ISPerformanceDiagnosticsSettings *)arg1 ;
@end
