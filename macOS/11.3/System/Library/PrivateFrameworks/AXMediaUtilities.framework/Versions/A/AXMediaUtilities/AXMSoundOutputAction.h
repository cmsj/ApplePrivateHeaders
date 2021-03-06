/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:41 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/AXMediaUtilities.framework/Versions/A/AXMediaUtilities
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AXMediaUtilities/AXMOutputAction.h>

@class NSString, NSURL;

@interface AXMSoundOutputAction : AXMOutputAction {

	NSString* _soundID;
	NSURL* _soundFileURL;

}

@property (nonatomic,readonly) NSURL * soundFileURL; 
@property (nonatomic,readonly) NSString * soundID; 
+(id)_soundFileURLForSoundID:(id)arg1 ;
-(id)initWithURL:(id)arg1 ;
-(NSURL *)soundFileURL;
-(NSString *)soundID;
-(id)initWithSoundID:(id)arg1 ;
-(id)_initWithURL:(id)arg1 handle:(id)arg2 ;
-(id)_initWithSoundID:(id)arg1 handle:(id)arg2 ;
@end

