/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:39 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/AssistantServices.framework/Versions/A/AssistantServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AssistantServices/AssistantServices-Structs.h>
#import <libobjc.A.dylib/AFClientInfoMutating.h>

@class AFClientInfo, NSString;

@interface _AFClientInfoMutation : NSObject <AFClientInfoMutating> {

	AFClientInfo* _baseModel;
	int _processIdentifier;
	NSString* _processName;
	struct {
		unsigned isDirty : 1;
		unsigned hasProcessIdentifier : 1;
		unsigned hasProcessName : 1;
	}  _mutationFlags;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(void)setProcessName:(id)arg1 ;
-(void)setProcessIdentifier:(int)arg1 ;
-(id)initWithBaseModel:(id)arg1 ;
-(id)generate;
@end

