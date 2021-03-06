/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:39 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/AssistantServices.framework/Versions/A/AssistantServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AssistantServices/AssistantServices-Structs.h>
#import <libobjc.A.dylib/AFOutputVoiceColorDescriptorMutating.h>

@class AFOutputVoiceColorDescriptor, NSString;

@interface _AFOutputVoiceColorDescriptorMutation : NSObject <AFOutputVoiceColorDescriptorMutating> {

	AFOutputVoiceColorDescriptor* _baseModel;
	NSString* _hexColor;
	NSString* _colorName;
	float _alpha;
	NSString* _localizedOutputVoiceColor;
	NSString* _localizedOutputVoice;
	struct {
		unsigned isDirty : 1;
		unsigned hasHexColor : 1;
		unsigned hasColorName : 1;
		unsigned hasAlpha : 1;
		unsigned hasLocalizedOutputVoiceColor : 1;
		unsigned hasLocalizedOutputVoice : 1;
	}  _mutationFlags;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(void)setAlpha:(float)arg1 ;
-(void)setColorName:(id)arg1 ;
-(id)initWithBaseModel:(id)arg1 ;
-(id)generate;
-(void)setLocalizedOutputVoiceColor:(id)arg1 ;
-(void)setLocalizedOutputVoice:(id)arg1 ;
-(void)setHexColor:(id)arg1 ;
@end

