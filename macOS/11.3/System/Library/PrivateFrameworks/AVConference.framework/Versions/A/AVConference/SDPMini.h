/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:12 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/AVConference.framework/Versions/A/AVConference
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <AVConference/AVConference-Structs.h>
@class NSString, NSMutableDictionary, NSMutableArray, NSNumber, NSDictionary;

@interface SDPMini : NSObject {

	NSString* _sdpUsername;
	NSMutableDictionary* _audioParameters;
	NSString* origin;
	NSMutableArray* audioPayloads;
	NSMutableArray* secondaryAudioPayloads;
	NSString* sessionIP;
	NSNumber* audioRTPPort;
	NSNumber* audioRTCPPort;
	NSNumber* audioRTPID;
	NSNumber* videoRTPID;
	char allowRTCPFB;
	NSNumber* answerBandwidth;
	NSNumber* maxBandwidth;
	char allowsDynamicMaxBitrate;
	char allowsContentsChangeWithAspectPreservation;
	NSDictionary* featuresListDict;
	NSNumber* aacBlockSize;
	NSNumber* audioUnitModel;
	char allowAudioRecording;
	NSString* basebandCodecType;
	NSNumber* basebandCodecSampleRate;
	NSMutableDictionary* _mediaLines;

}

@property (nonatomic,retain) NSString * origin; 
@property (nonatomic,readonly) NSMutableArray * audioPayloads; 
@property (nonatomic,readonly) NSMutableArray * secondaryAudioPayloads; 
@property (nonatomic,retain) NSString * sessionIP; 
@property (nonatomic,retain) NSNumber * audioRTPPort; 
@property (nonatomic,retain) NSNumber * audioRTCPPort; 
@property (nonatomic,retain) NSNumber * audioRTPID; 
@property (assign,nonatomic) char allowRTCPFB; 
@property (nonatomic,retain) NSNumber * answerBandwidth; 
@property (nonatomic,retain) NSNumber * maxBandwidth; 
@property (assign,nonatomic) char allowsDynamicMaxBitrate; 
@property (nonatomic,retain) NSDictionary * featuresListDict; 
@property (assign,nonatomic) char allowsContentsChangeWithAspectPreservation; 
@property (nonatomic,retain) NSNumber * aacBlockSize; 
@property (nonatomic,retain) NSNumber * audioUnitModel; 
@property (assign,nonatomic) char allowAudioRecording; 
+(char)setPayload:(int)arg1 mediaLine:(id)arg2 ;
-(void)dealloc;
-(id)init;
-(id)initWithString:(id)arg1 ;
-(NSString *)origin;
-(void)setOrigin:(NSString *)arg1 ;
-(char)allowAudioRecording;
-(void)setAllowAudioRecording:(char)arg1 ;
-(NSNumber *)maxBandwidth;
-(void)setMaxBandwidth:(NSNumber *)arg1 ;
-(void)setAudioUnitModel:(NSNumber *)arg1 ;
-(NSNumber *)audioUnitModel;
-(void)setAacBlockSize:(NSNumber *)arg1 ;
-(NSNumber *)aacBlockSize;
-(NSMutableArray *)audioPayloads;
-(id)SDPUsername;
-(void)addMediaLine:(id)arg1 mediaType:(int)arg2 ;
-(void)parseSDPFromString:(id)arg1 ;
-(id)getMediaLineForType:(int)arg1 ;
-(id)composeSessionString;
-(id)composeAudioString;
-(id)mediaTypeToString:(int)arg1 ;
-(void)createVideoImageAttr:(int)arg1 direction:(int)arg2 dimensions:(imageTag*)arg3 count:(int)arg4 ;
-(char)setVideoPayloads:(int*)arg1 count:(int)arg2 ;
-(id)toStringWithVideoEnabled:(char)arg1 ;
-(void)setBasebandCodecType:(id)arg1 sampleRate:(id)arg2 ;
-(char)getBasebandCodecType:(id*)arg1 sampleRate:(id*)arg2 ;
-(void)getNegotiatedResolutionForPayload:(int)arg1 forInterface:(int)arg2 withRule:(id)arg3 direction:(int)arg4 result:(imageTag*)arg5 remoteSupportsHD:(char)arg6 screenSharing:(char)arg7 ;
-(NSMutableArray *)secondaryAudioPayloads;
-(NSString *)sessionIP;
-(void)setSessionIP:(NSString *)arg1 ;
-(NSNumber *)audioRTPPort;
-(void)setAudioRTPPort:(NSNumber *)arg1 ;
-(NSNumber *)audioRTCPPort;
-(void)setAudioRTCPPort:(NSNumber *)arg1 ;
-(NSNumber *)audioRTPID;
-(void)setAudioRTPID:(NSNumber *)arg1 ;
-(char)allowRTCPFB;
-(void)setAllowRTCPFB:(char)arg1 ;
-(NSNumber *)answerBandwidth;
-(void)setAnswerBandwidth:(NSNumber *)arg1 ;
-(char)allowsDynamicMaxBitrate;
-(void)setAllowsDynamicMaxBitrate:(char)arg1 ;
-(NSDictionary *)featuresListDict;
-(void)setFeaturesListDict:(NSDictionary *)arg1 ;
-(char)allowsContentsChangeWithAspectPreservation;
-(void)setAllowsContentsChangeWithAspectPreservation:(char)arg1 ;
-(id)composeBandwidthString;
-(id)composeFLSString;
-(id)composeAudioFMTPForPayload:(id)arg1 ;
-(void)parseAudioMediaAttributes:(id)arg1 ;
-(id)parseIP:(id)arg1 ;
-(void)parseBandwidth:(id)arg1 ;
-(void)parseMediaLine:(id)arg1 ;
-(void)parseSessionAttributes:(id)arg1 ;
-(id)parseRTPID:(id)arg1 ;
-(id)parseRTCPPort:(id)arg1 ;
-(void)parseAudioFormatAttribute:(id)arg1 ;
-(int)rulesFramerate:(int)arg1 ;
-(void)rulesImageSizeForExternalPayload:(int)arg1 pWidth:(int*)arg2 pHeight:(int*)arg3 ;
-(void)setUseSbr:(char)arg1 blockSize:(int)arg2 forAACFormat:(int)arg3 ;
-(char)getUseSbr:(char*)arg1 blockSize:(int*)arg2 forAACFormat:(int)arg3 ;
-(void)setVideoRTCPFB:(char)arg1 useNACK:(char)arg2 ;
@end
