/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:02 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/CoreData.framework/Versions/A/CoreData
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSCloudKitMirroringDelegateOptions;

@interface PFCloudKitOptionsValidator : NSObject {

	NSCloudKitMirroringDelegateOptions* _parsedOptions;

}

@property (nonatomic,readonly) NSCloudKitMirroringDelegateOptions * parsedOptions;              //@synthesize parsedOptions=_parsedOptions - In the implementation block
-(char)validateOptions:(id)arg1 andStoreOptions:(id)arg2 error:(id*)arg3 ;
-(char)_validateContainerIdentifier:(id)arg1 error:(id*)arg2 ;
-(char)_validateHistoryTrackingOptions:(id)arg1 error:(id*)arg2 ;
-(char)_validateContainerOptions:(id)arg1 error:(id*)arg2 ;
-(char)_validateAssetThreshold:(id)arg1 error:(id*)arg2 ;
-(char)_validateMemoryThreshold:(id)arg1 error:(id*)arg2 ;
-(NSCloudKitMirroringDelegateOptions *)parsedOptions;
-(void)dealloc;
@end
