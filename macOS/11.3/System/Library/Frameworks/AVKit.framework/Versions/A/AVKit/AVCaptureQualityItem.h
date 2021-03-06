/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:51 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/AVKit.framework/Versions/A/AVKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSDictionary;

@interface AVCaptureQualityItem : NSObject {

	NSString* _localizedName;
	NSDictionary* _options;
	NSString* _sessionPreset;

}

@property (copy,readonly) NSString * identifier; 
@property (copy,readonly) NSString * localizedName; 
@property (copy,readonly) NSString * sessionPreset;              //@synthesize sessionPreset=_sessionPreset - In the implementation block
-(NSString *)identifier;
-(NSString *)localizedName;
-(id)initWithOptions:(id)arg1 ;
-(NSString *)sessionPreset;
-(char)applyToSession:(id)arg1 ;
-(id)initWithSessionPreset:(id)arg1 localizedName:(id)arg2 ;
@end

