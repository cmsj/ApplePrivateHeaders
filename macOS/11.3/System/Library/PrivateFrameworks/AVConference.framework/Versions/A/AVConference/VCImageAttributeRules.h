/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:12 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/AVConference.framework/Versions/A/AVConference
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableDictionary;

@interface VCImageAttributeRules : NSObject {

	NSMutableDictionary* _imageAttributeRules;

}

@property (nonatomic,retain) NSMutableDictionary * imageAttributeRules;              //@synthesize imageAttributeRules=_imageAttributeRules - In the implementation block
-(void)dealloc;
-(id)description;
-(id)init;
-(NSMutableDictionary *)imageAttributeRules;
-(id)extractDimensionsForInterface:(int)arg1 direction:(int)arg2 ;
-(void)setImageAttributeRules:(NSMutableDictionary *)arg1 ;
-(void)swapSendAndReceiveRules;
-(void)addRuleForVideoPayload:(int)arg1 withDirection:(int)arg2 width:(int)arg3 height:(int)arg4 frameRate:(int)arg5 priority:(int)arg6 interface:(int)arg7 ;
-(void)interfaceKey:(id*)arg1 forInterface:(int)arg2 directionKey:(id*)arg3 forDirection:(int)arg4 ;
@end
