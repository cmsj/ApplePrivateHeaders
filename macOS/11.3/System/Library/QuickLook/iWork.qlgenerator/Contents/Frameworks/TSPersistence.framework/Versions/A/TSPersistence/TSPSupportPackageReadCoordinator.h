/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:58 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/QuickLook/iWork.qlgenerator/Contents/Frameworks/TSPersistence.framework/Versions/A/TSPersistence
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TSPersistence/TSPPackageReadCoordinator.h>

@protocol OS_dispatch_queue;
@class TSPPackage, TSPPackageReadCoordinator, NSObject;

@interface TSPSupportPackageReadCoordinator : TSPPackageReadCoordinator {

	TSPPackage* _documentPackage;
	TSPPackageReadCoordinator* _documentPackageReadCoordinator;
	NSObject*<OS_dispatch_queue> _documentComponentReadQueue;

}
-(id)initWithContext:(id)arg1 package:(id)arg2 packageURL:(id)arg3 finalizeHandlerQueue:(id)arg4 areExternalDataReferencesAllowed:(char)arg5 skipDocumentUpgrade:(char)arg6 documentLoadValidationPolicy:(id)arg7 ;
-(id)initWithContext:(id)arg1 package:(id)arg2 packageURL:(id)arg3 finalizeHandlerQueue:(id)arg4 areExternalDataReferencesAllowed:(char)arg5 skipDocumentUpgrade:(char)arg6 documentLoadValidationPolicy:(id)arg7 documentPackage:(id)arg8 ;
-(void)setDocumentPackageReadCoordinator:(id)arg1 ;
-(char)endReading;
-(long long)metadataObjectIdentifier;
-(id)externalObjectForIdentifier:(long long)arg1 componentIdentifier:(long long)arg2 isReadFinished:(char)arg3 ;
-(void)prepareToReadComponentWithIdentifier:(long long)arg1 forObjectIdentifier:(long long)arg2 isWeakReference:(char)arg3 queue:(id)arg4 completion:(/*^block*/id)arg5 ;
@end

