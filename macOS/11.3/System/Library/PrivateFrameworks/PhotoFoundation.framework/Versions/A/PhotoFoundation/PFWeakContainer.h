/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:39 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/PhotoFoundation.framework/Versions/A/PhotoFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class _PFWeakContainerSentenal;

@interface PFWeakContainer : NSObject {

	_PFWeakContainerSentenal* _sentenal;
	id _nilNotificationDelegate;

}
-(void)dealloc;
-(id)init;
-(void)weakReferenceBecameNil;
-(char)isTrackingWeakObjectDealloc:(id)arg1 ;
-(void)trackWeakObjectDealloc:(id)arg1 ;
-(void)stopTrackingWeakObjectDealloc:(id)arg1 ;
-(void)setNilNotificationDelegate:(id)arg1 ;
@end
