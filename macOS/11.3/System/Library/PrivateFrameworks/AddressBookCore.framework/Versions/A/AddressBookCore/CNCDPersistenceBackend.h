/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:18 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/AddressBookCore.framework/Versions/A/AddressBookCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol CNCDPersistenceBackend <NSObject>
@property (readonly) id<CNCDIOSLegacyIdentifierRegistration> iOSLegacyIdentifierRegistrar; 
@required
-(id)defaultContainer;
-(id)allContainers;
-(id)makePersistenceContextWithNotificationSource:(id)arg1;
-(void)applyDiff:(id)arg1 toContainerWithIdentifier:(id)arg2;
-(id<CNCDIOSLegacyIdentifierRegistration>)iOSLegacyIdentifierRegistrar;

@end

