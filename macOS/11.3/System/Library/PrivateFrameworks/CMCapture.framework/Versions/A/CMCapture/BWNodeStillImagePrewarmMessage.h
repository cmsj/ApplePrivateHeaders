/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:43 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/CMCapture.framework/Versions/A/CMCapture
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CMCapture/BWNodeMessage.h>

@class BWStillImageSettings;

@interface BWNodeStillImagePrewarmMessage : BWNodeMessage {

	BWStillImageSettings* _stillImageSettings;

}

@property (readonly) BWStillImageSettings * stillImageSettings; 
+(id)newMessageWithStillImageSettings:(id)arg1 ;
-(void)dealloc;
-(BWStillImageSettings *)stillImageSettings;
-(id)_initWithStillImageSettings:(id)arg1 ;
@end

