/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:23 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/AudioDSPManager.framework/Versions/A/AudioDSPManager
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSManagedObjectContext;

@interface VPContentDSPMOFetchUtil : NSObject {

	NSManagedObjectContext* mManagedObjectContext;

}
-(id)initWithManagedObjectContext:(id)arg1 ;
-(id)fetchWithCategory:(id)arg1 mode:(id)arg2 dspFlavor:(id)arg3 isInput:(id)arg4 portType:(id)arg5 hwHasVP:(id)arg6 dspModuleDescriptions:(id)arg7 ;
-(id)fetchAllWithCategory:(id)arg1 mode:(id)arg2 dspFlavor:(id)arg3 isInput:(id)arg4 portType:(id)arg5 hwHasVP:(id)arg6 dspModuleDescriptions:(id)arg7 ;
@end

