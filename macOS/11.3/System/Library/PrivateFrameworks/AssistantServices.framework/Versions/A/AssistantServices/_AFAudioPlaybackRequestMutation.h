/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:39 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/AssistantServices.framework/Versions/A/AssistantServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AssistantServices/AssistantServices-Structs.h>
#import <libobjc.A.dylib/AFAudioPlaybackRequestMutating.h>

@class AFAudioPlaybackRequest, NSURL, NSData, NSDictionary, NSString;

@interface _AFAudioPlaybackRequestMutation : NSObject <AFAudioPlaybackRequestMutating> {

	AFAudioPlaybackRequest* _baseModel;
	NSURL* _itemURL;
	NSData* _itemData;
	long long _numberOfLoops;
	float _volume;
	double _fadeInDuration;
	double _fadeOutDuration;
	NSDictionary* _userInfo;
	struct {
		unsigned isDirty : 1;
		unsigned hasItemURL : 1;
		unsigned hasItemData : 1;
		unsigned hasNumberOfLoops : 1;
		unsigned hasVolume : 1;
		unsigned hasFadeInDuration : 1;
		unsigned hasFadeOutDuration : 1;
		unsigned hasUserInfo : 1;
	}  _mutationFlags;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(void)setUserInfo:(id)arg1 ;
-(void)setVolume:(float)arg1 ;
-(void)setNumberOfLoops:(long long)arg1 ;
-(void)setItemURL:(id)arg1 ;
-(id)initWithBaseModel:(id)arg1 ;
-(id)generate;
-(void)setItemData:(id)arg1 ;
-(void)setFadeInDuration:(double)arg1 ;
-(void)setFadeOutDuration:(double)arg1 ;
@end

