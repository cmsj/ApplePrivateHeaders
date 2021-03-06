/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:16 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/MapKit.framework/Versions/A/MapKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MapKit/_MXExtensionContext.h>
#import <libobjc.A.dylib/_MXExtensionVendorContextType.h>

@protocol _MXExtensionResponseObserver;
@class NSString;

@interface _MXExtensionVendorContext : _MXExtensionContext <_MXExtensionVendorContextType> {

	id<_MXExtensionResponseObserver> _observer;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)_errorForVendor:(id)arg1 requestDispatcher:(id)arg2 ;
-(void)handleRequest:(id)arg1 requestDispatcher:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)startSendingUpdatesForRequest:(id)arg1 requestDispatcher:(id)arg2 toObserver:(id)arg3 ;
-(void)stopSendingUpdatesForRequest:(id)arg1 requestDispatcher:(id)arg2 ;
@end

