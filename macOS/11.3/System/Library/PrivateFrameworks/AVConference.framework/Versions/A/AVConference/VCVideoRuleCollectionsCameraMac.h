/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:12 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/AVConference.framework/Versions/A/AVConference
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AVConference/VCVideoRuleCollectionsCamera.h>

@protocol VCHardwareSettingsMacProtocol;
@interface VCVideoRuleCollectionsCameraMac : VCVideoRuleCollectionsCamera {

	unsigned _encodeScore;
	unsigned _decodeScore;
	id<VCHardwareSettingsMacProtocol> _hardwareSettings;

}
+(id)sharedInstance;
-(void)dealloc;
-(char)useSoftFramerateSwitching;
-(id)initWithHardwareSettings:(id)arg1 ;
-(void)initSupportedPayloads;
-(char)setupRules;
-(char)setupH264Rules;
-(char)setupHEVCRules;
-(void)computeEncodingScore;
-(void)computeDecodingScore;
-(char)setupH264WifiRules;
-(char)setUp1080pRules:(int)arg1 ;
-(void)_removeRulesGreaterThanVGA;
-(void)_addWVGAEncodingRules;
-(void)_removeRulesGreaterThan720p;
-(void)_resetJ92EncodingRulesForCameraIsHD:(char)arg1 isWVGA:(char)arg2 is1080:(char)arg3 ;
-(double)preferredAspectRatio;
-(void)resetEncodingRulesForCameraIsHD:(char)arg1 isWVGA:(char)arg2 is1080:(char)arg3 ;
@end
