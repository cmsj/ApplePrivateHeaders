/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:52 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/SiriVOX.framework/Versions/A/SiriVOX
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SiriVOX/SiriVOX-Structs.h>
#import <libobjc.A.dylib/SVXDeviceSetupOptionsMutating.h>

@class SVXDeviceSetupOptions, NSString;

@interface _SVXDeviceSetupOptionsMutation : NSObject <SVXDeviceSetupOptionsMutating> {

	SVXDeviceSetupOptions* _baseModel;
	NSString* _languageCode;
	long long _gender;
	long long _hasActiveAccount;
	long long _isNewsRestricted;
	struct {
		unsigned isDirty : 1;
		unsigned hasLanguageCode : 1;
		unsigned hasGender : 1;
		unsigned hasHasActiveAccount : 1;
		unsigned hasIsNewsRestricted : 1;
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
-(void)setHasActiveAccount:(long long)arg1 ;
-(void)setIsNewsRestricted:(long long)arg1 ;
@end

