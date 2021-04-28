/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:52 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/SiriVOX.framework/Versions/A/SiriVOX
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SiriVOX/SiriVOX-Structs.h>
#import <libobjc.A.dylib/SVXDeviceSetupFlowSiriCapabilitiesHintMutating.h>

@class SVXDeviceSetupFlowSiriCapabilitiesHint, NSString;

@interface _SVXDeviceSetupFlowSiriCapabilitiesHintMutation : NSObject <SVXDeviceSetupFlowSiriCapabilitiesHintMutating> {

	SVXDeviceSetupFlowSiriCapabilitiesHint* _baseModel;
	long long _style;
	struct {
		unsigned isDirty : 1;
		unsigned hasStyle : 1;
	}  _mutationFlags;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(void)setStyle:(long long)arg1 ;
-(id)initWithBaseModel:(id)arg1 ;
-(id)generate;
@end
