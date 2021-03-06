/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:52 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/SiriVOX.framework/Versions/A/SiriVOX
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SiriVOX/SiriVOX-Structs.h>
#import <libobjc.A.dylib/SVXStoreDemoMutating.h>

@class SVXStoreDemo, NSString;

@interface _SVXStoreDemoMutation : NSObject <SVXStoreDemoMutating> {

	SVXStoreDemo* _baseModel;
	long long _transcriptID;
	NSString* _languageCode;
	long long _gender;
	float _outputVolume;
	struct {
		unsigned isDirty : 1;
		unsigned hasTranscriptID : 1;
		unsigned hasLanguageCode : 1;
		unsigned hasGender : 1;
		unsigned hasOutputVolume : 1;
	}  _mutationFlags;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(void)setGender:(long long)arg1 ;
-(void)setLanguageCode:(id)arg1 ;
-(id)initWithBaseModel:(id)arg1 ;
-(id)generate;
-(void)setOutputVolume:(float)arg1 ;
-(void)setTranscriptID:(long long)arg1 ;
@end

