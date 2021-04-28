/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:58 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/iTunesCloud.framework/Versions/A/iTunesCloud
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSDictionary, NSURL, NSArray;

@interface ICURLBagEnhancedAudioConfiguration : NSObject {

	NSDictionary* _bagEnhancedAudioDictionary;

}

@property (nonatomic,copy) NSDictionary * bagEnhancedAudioDictionary;              //@synthesize bagEnhancedAudioDictionary=_bagEnhancedAudioDictionary - In the implementation block
@property (nonatomic,copy,readonly) NSURL * certificateURL; 
@property (nonatomic,copy,readonly) NSURL * keyServerURL; 
@property (nonatomic,copy,readonly) NSArray * prefetchSKDs; 
-(NSURL *)keyServerURL;
-(NSURL *)certificateURL;
-(id)initWithBagEnhancedAudioDictionary:(id)arg1 ;
-(NSArray *)prefetchSKDs;
-(id)_urlForBagEnhancedAudioKey:(id)arg1 ;
-(NSDictionary *)bagEnhancedAudioDictionary;
-(void)setBagEnhancedAudioDictionary:(NSDictionary *)arg1 ;
@end
