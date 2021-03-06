/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:28 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/PhotosImagingFoundation.framework/Versions/A/PhotosImagingFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSObject, NSMutableDictionary;

@interface IPAAutoRegistry : NSObject {

	NSObject*<OS_dispatch_queue> _serializer;
	NSMutableDictionary* _entries;

}
+(id)sharedRegistry;
+(void)setSharedRegistry:(id)arg1 ;
-(id)init;
-(void)registerAutoCalculatorSettingsClass:(Class)arg1 toAutoIdentifier:(id)arg2 operationIdentifier:(id)arg3 ;
-(void)registerAutoCalculatorSettingsClass:(Class)arg1 toAutoIdentifier:(id)arg2 operationIdentifier:(id)arg3 persistable:(char)arg4 ;
-(id)_entryForAutoIdentifier:(id)arg1 operationIdentifier:(id)arg2 ;
-(char)hasMappingForAutoIdentifier:(id)arg1 operationIdentifier:(id)arg2 ;
-(Class)settingsClassForAutoIdentifier:(id)arg1 operationIdentifier:(id)arg2 ;
-(char)isPersistableAutoIdentifier:(id)arg1 forOperationIdentifier:(id)arg2 ;
@end

